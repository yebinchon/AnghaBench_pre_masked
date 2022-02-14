
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_xfer_root {int bus; struct usb_device* udev; } ;
struct usb_xfer_queue {struct usb_xfer* curr; } ;
struct TYPE_15__ {int can_cancel_immed; } ;
struct TYPE_9__ {scalar_t__ stall_pipe; } ;
struct usb_xfer {scalar_t__ nframes; scalar_t__ interval; scalar_t__ error; TYPE_7__ flags_int; scalar_t__ aframes; struct usb_xfer_root* xroot; TYPE_1__ flags; struct usb_endpoint* endpoint; } ;
struct usb_endpoint {int is_stalled; TYPE_8__* methods; TYPE_6__* edesc; } ;
struct TYPE_11__ {scalar_t__ usb_mode; } ;
struct usb_device {TYPE_5__* bus; TYPE_3__ flags; int * cs_msg; TYPE_2__** ctrl_xfer; } ;
struct TYPE_16__ {int (* start ) (struct usb_xfer*) ;} ;
struct TYPE_14__ {int bmAttributes; } ;
struct TYPE_13__ {TYPE_4__* methods; } ;
struct TYPE_12__ {int (* clear_stall ) (struct usb_device*,struct usb_endpoint*) ;int (* set_stall ) (struct usb_device*,struct usb_endpoint*,int*) ;} ;
struct TYPE_10__ {struct usb_xfer_root* xroot; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct usb_device*,struct usb_endpoint*,int*) ;
 int FUNC_5 (struct usb_device*,struct usb_endpoint*) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (struct usb_xfer*,int ) ;
 int VAR_8 ;
 int FUNC_9 (struct usb_xfer*,int *,scalar_t__) ;
 int FUNC_10 (struct usb_xfer*,int ) ;

void
FUNC_11(struct usb_xfer_queue *VAR_9)
{
 struct usb_endpoint *VAR_10;
 struct usb_xfer *VAR_11;
 uint8_t VAR_12;

 VAR_11 = VAR_9->curr;
 VAR_10 = VAR_11->endpoint;

 FUNC_3(VAR_11->xroot->bus, VAR_0);




 if (VAR_10->is_stalled) {
  return;
 }



 if (VAR_11->flags.stall_pipe) {
  struct usb_device *VAR_13;
  struct usb_xfer_root *VAR_14;


  VAR_11->flags.stall_pipe = 0;


  VAR_14 = VAR_11->xroot;
  VAR_13 = VAR_14->udev;




  VAR_12 = (VAR_10->edesc->bmAttributes & VAR_5);
  if ((VAR_12 == VAR_1) ||
      (VAR_12 == VAR_3)) {
   uint8_t VAR_15;

   VAR_15 = 1;

   if (VAR_13->flags.usb_mode == VAR_7) {
    (VAR_13->bus->methods->set_stall) (
        VAR_13, VAR_10, &VAR_15);
   } else if (VAR_13->ctrl_xfer[1]) {
    VAR_14 = VAR_13->ctrl_xfer[1]->xroot;
    FUNC_7(
        FUNC_2(VAR_14->bus),
        &VAR_13->cs_msg[0], &VAR_13->cs_msg[1]);
   } else {

    FUNC_1(0, "No stall handler\n");
   }




   if (VAR_15) {





    VAR_10->is_stalled = 1;
    return;
   }
  } else if (VAR_12 == VAR_4) {







   if (VAR_13->flags.usb_mode == VAR_7) {
    (VAR_13->bus->methods->clear_stall) (VAR_13, VAR_10);
   }
  }
 }

 if (VAR_11->nframes == 0) {

  VAR_11->aframes = 0;
  FUNC_8(VAR_11, 0);
  return;
 }
 if (VAR_11->interval > 0) {
  VAR_12 = (VAR_10->edesc->bmAttributes & VAR_5);
  if ((VAR_12 == VAR_1) ||
      (VAR_12 == VAR_2)) {
   FUNC_9(VAR_11,
       &VAR_8,
       VAR_11->interval);
   return;
  }
 }
 FUNC_0("start\n");





 VAR_11->flags_int.can_cancel_immed = 1;


 if (VAR_11->error == 0)
  (VAR_10->methods->start) (VAR_11);


 if (VAR_11->error) {

  FUNC_8(VAR_11, 0);
 }
}
