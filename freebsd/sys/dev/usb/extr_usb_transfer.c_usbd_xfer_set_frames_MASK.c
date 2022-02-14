
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_frcount_t ;
struct usb_xfer {int nframes; } ;



void
FUNC_0(struct usb_xfer *VAR_0, usb_frcount_t VAR_1)
{
 VAR_0->nframes = VAR_1;
}
