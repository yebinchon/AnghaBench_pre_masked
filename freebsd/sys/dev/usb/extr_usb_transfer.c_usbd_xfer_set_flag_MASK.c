
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int force_short_xfer; int short_xfer_ok; int short_frames_ok; int manual_status; } ;
struct usb_xfer {TYPE_1__ flags; } ;







void
FUNC_0(struct usb_xfer *VAR_0, int VAR_1)
{
 switch (VAR_1) {
  case 131:
   VAR_0->flags.force_short_xfer = 1;
   break;
  case 128:
   VAR_0->flags.short_xfer_ok = 1;
   break;
  case 129:
   VAR_0->flags.short_frames_ok = 1;
   break;
  case 130:
   VAR_0->flags.manual_status = 1;
   break;
 }
}
