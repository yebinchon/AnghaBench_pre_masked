
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_5__ {int manual_status; scalar_t__ force_short_xfer; } ;
struct TYPE_4__ {int control_rem; } ;
struct usb_xfer {int nframes; TYPE_2__ flags; int error; TYPE_1__ flags_int; TYPE_3__* xroot; } ;
struct usb_device_request {int dummy; } ;
struct TYPE_6__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*,int ,int) ;
 int FUNC_5 (struct usb_xfer*) ;

void
FUNC_6(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 usb_error_t VAR_4;



 switch (FUNC_0(VAR_2)) {
 case 129:
 case 128:


  VAR_4 = FUNC_1(VAR_2);

  if (VAR_4) {

   if (VAR_4 == VAR_0) {

    FUNC_2(VAR_2->xroot->bus, 0);
    break;
   }
   goto tr_restart;
  }
  FUNC_3(VAR_2);
  break;

 default:

  if (VAR_2->flags_int.control_rem != 0xFFFF) {

   VAR_4 = FUNC_1(VAR_2);
  }
  if (VAR_2->error != VAR_1) {

   goto tr_restart;
  }
  break;
 }
 return;

tr_restart:




 FUNC_4(VAR_2, 0, sizeof(struct usb_device_request));
 VAR_2->nframes = 1;
 VAR_2->flags.manual_status = 1;
 VAR_2->flags.force_short_xfer = 0;
 FUNC_5(VAR_2);
 FUNC_3(VAR_2);
}
