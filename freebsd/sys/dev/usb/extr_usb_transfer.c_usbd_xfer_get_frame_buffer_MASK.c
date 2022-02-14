
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t usb_frcount_t ;
struct usb_xfer {size_t max_frame_count; int * frbuffers; } ;
struct usb_page_search {void* buffer; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,struct usb_page_search*) ;

void *
FUNC_2(struct usb_xfer *VAR_0, usb_frcount_t VAR_1)
{
 struct usb_page_search VAR_2;

 FUNC_0(VAR_1 < VAR_0->max_frame_count, ("frame index overflow"));

 FUNC_1(&VAR_0->frbuffers[VAR_1], 0, &VAR_2);
 return (VAR_2.buffer);
}
