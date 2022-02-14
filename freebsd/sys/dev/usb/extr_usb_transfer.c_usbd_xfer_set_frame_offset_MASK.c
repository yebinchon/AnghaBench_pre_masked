
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_frlength_t ;
typedef size_t usb_frcount_t ;
struct TYPE_3__ {int ext_buffer; } ;
struct usb_xfer {size_t max_frame_count; int local_buffer; TYPE_2__* frbuffers; TYPE_1__ flags; } ;
struct TYPE_4__ {int buffer; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct usb_xfer *VAR_0, usb_frlength_t VAR_1,
    usb_frcount_t VAR_2)
{
 FUNC_0(!VAR_0->flags.ext_buffer, ("Cannot offset data frame "
     "when the USB buffer is external\n"));
 FUNC_0(VAR_2 < VAR_0->max_frame_count, ("frame index overflow"));


 VAR_0->frbuffers[VAR_2].buffer =
     FUNC_1(VAR_0->local_buffer, VAR_1);
}
