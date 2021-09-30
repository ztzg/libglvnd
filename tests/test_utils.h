/*
 * Copyright (c) 2013, NVIDIA CORPORATION.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and/or associated documentation files (the
 * "Materials"), to deal in the Materials without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Materials, and to
 * permit persons to whom the Materials are furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * unaltered in all copies or substantial portions of the Materials.
 * Any additions, deletions, or changes to the original source files
 * must be clearly indicated in accompanying documentation.
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
 */

#ifndef __TEST_UTILS_H__
#define __TEST_UTILS_H__

#include <X11/Xlib.h>
#include <GL/glx.h>
#include <pthread.h>
#include <stdio.h>

#define printError(...) fprintf(stderr, __VA_ARGS__)

struct window_info {
    Display *dpy;
    Window win;
    GLXDrawable draw;
    XVisualInfo *visinfo;
    GLXFBConfig config;
    Colormap cmap;
};

GLboolean testUtilsCreateWindow(Display *dpy,
                                struct window_info *wi,
                                int screen);

GLboolean testUtilsCreateWindowConfig(Display *dpy,
                                struct window_info *wi,
                                int screen);

void testUtilsDestroyWindow(Display *dpy,
                            struct window_info *wi);

#endif // __TEST_UTILS_H__
