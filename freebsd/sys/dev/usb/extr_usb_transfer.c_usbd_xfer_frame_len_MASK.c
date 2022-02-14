
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_frlength_t ;
typedef size_t usb_frcount_t ;
struct usb_xfer {size_t max_frame_count; int * frlengths; } ;


 int FUNC_0 (int,char*) ;

usb_frlength_t
FUNC_1(struct usb_xfer *VAR_0, usb_frcount_t VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->max_frame_count, ("frame index overflow"));

 return (VAR_0->frlengths[VAR_1]);
}
