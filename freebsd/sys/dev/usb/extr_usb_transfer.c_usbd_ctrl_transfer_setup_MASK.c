
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_xfer {scalar_t__ address; } ;
struct TYPE_7__ {scalar_t__ bMaxPacketSize; } ;
struct TYPE_6__ {scalar_t__* wMaxPacketSize; } ;
struct TYPE_5__ {scalar_t__ usb_mode; } ;
struct usb_device {scalar_t__ address; int device_mtx; TYPE_4__* bus; struct usb_xfer** ctrl_xfer; scalar_t__ clear_stall_errors; TYPE_3__ ddesc; TYPE_2__ ctrl_ep_desc; TYPE_1__ flags; int * parent_hub; } ;
struct TYPE_8__ {scalar_t__ control_ep_quirk; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;
 int FUNC_2 (struct usb_xfer*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct usb_device*,int*,struct usb_xfer**,int ,int ,int *,int *) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer**,int ) ;

void
FUNC_6(struct usb_device *VAR_4)
{
 struct usb_xfer *VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;


 if (VAR_4->parent_hub == ((void*)0))
  return;
repeat:

 VAR_5 = VAR_4->ctrl_xfer[0];
 if (VAR_5) {
  FUNC_1(VAR_5);
  VAR_6 =
      ((VAR_5->address == VAR_4->address) &&
      (VAR_4->ctrl_ep_desc.wMaxPacketSize[0] ==
      VAR_4->ddesc.bMaxPacketSize));
  if (VAR_4->flags.usb_mode == VAR_1) {
   if (VAR_6) {





    FUNC_4(VAR_5);
   }
  }
  FUNC_2(VAR_5);
 } else {
  VAR_6 = 0;
 }

 if (VAR_6) {




  return;
 }



 VAR_4->ctrl_ep_desc.wMaxPacketSize[0] =
     VAR_4->ddesc.bMaxPacketSize;




 FUNC_5(VAR_4->ctrl_xfer, VAR_0);




 VAR_4->clear_stall_errors = 0;





 VAR_7 = 0;
 if (FUNC_3(VAR_4, &VAR_7,
     VAR_4->ctrl_xfer, VAR_4->bus->control_ep_quirk ?
     VAR_3 : VAR_2, VAR_0, ((void*)0),
     &VAR_4->device_mtx)) {
  FUNC_0(0, "could not setup default "
      "USB transfer\n");
 } else {
  goto repeat;
 }
}
