
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t usb_frcount_t ;
struct usb_xfer {size_t max_frame_count; struct usb_page_cache* frbuffers; } ;
struct usb_page_cache {int dummy; } ;


 int FUNC_0 (int,char*) ;

struct usb_page_cache *
FUNC_1(struct usb_xfer *VAR_0, usb_frcount_t VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->max_frame_count, ("frame index overflow"));

 return (&VAR_0->frbuffers[VAR_1]);
}
