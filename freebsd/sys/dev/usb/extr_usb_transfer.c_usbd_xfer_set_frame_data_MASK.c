
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_frlength_t ;
typedef size_t usb_frcount_t ;
struct usb_xfer {size_t max_frame_count; TYPE_1__* frbuffers; } ;
struct TYPE_2__ {void* buffer; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct usb_xfer*,size_t,int ) ;

void
FUNC_2(struct usb_xfer *VAR_0, usb_frcount_t VAR_1,
    void *VAR_2, usb_frlength_t VAR_3)
{
 FUNC_0(VAR_1 < VAR_0->max_frame_count, ("frame index overflow"));


 VAR_0->frbuffers[VAR_1].buffer = VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_3);
}
