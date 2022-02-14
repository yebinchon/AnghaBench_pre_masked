
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int actlen; int sumlen; int aframes; int nframes; } ;



void
FUNC_0(struct usb_xfer *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3,
    int *VAR_4)
{
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_0->actlen;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_0->sumlen;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_0->aframes;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_0->nframes;
}
