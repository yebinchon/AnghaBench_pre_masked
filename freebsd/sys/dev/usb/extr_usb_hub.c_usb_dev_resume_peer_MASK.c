
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* type_refs; int last_xfer_time; } ;
struct TYPE_4__ {scalar_t__ self_suspended; scalar_t__ usb_mode; scalar_t__ remote_wakeup; } ;
struct usb_device {TYPE_2__ pwr_save; TYPE_1__ flags; int port_no; struct usb_device* parent_hub; struct usb_bus* bus; } ;
struct usb_bus {TYPE_3__* methods; int hw_power_state; } ;
struct TYPE_6__ {int (* set_hw_power ) (struct usb_bus*) ;int (* device_resume ) (struct usb_device*) ;} ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_bus*) ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (struct usb_device*) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (struct usb_device*) ;
 int VAR_13 ;
 int FUNC_10 (struct usb_device*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct usb_device*,int *,int ) ;
 int FUNC_13 (struct usb_device*,int *,int ,int ) ;
 int FUNC_14 (struct usb_device*,int *,int ,int ) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_device*) ;

__attribute__((used)) static void
FUNC_17(struct usb_device *VAR_14)
{
 struct usb_bus *VAR_15;
 int VAR_16;


 if (VAR_14 == ((void*)0))
  return;


 if (VAR_14->flags.self_suspended == 0)
  return;


 if (VAR_14->parent_hub == ((void*)0))
  return;

 FUNC_0("udev=%p\n", VAR_14);

 if ((VAR_14->flags.usb_mode == VAR_11) &&
     (VAR_14->flags.remote_wakeup == 0)) {




  FUNC_0("remote wakeup is not set!\n");
  return;
 }

 VAR_15 = VAR_14->bus;


 FUNC_17(VAR_14->parent_hub);


 FUNC_8(((void*)0), FUNC_4(20));

 if (FUNC_7(VAR_14)) {

  VAR_16 = FUNC_13(VAR_14->parent_hub,
      ((void*)0), VAR_14->port_no, VAR_5);
  if (VAR_16) {
   FUNC_1(0, "Resuming port failed\n");
   return;
  }
 } else {

  VAR_16 = FUNC_14(VAR_14->parent_hub,
      ((void*)0), VAR_14->port_no, VAR_6);
  if (VAR_16) {
   FUNC_1(0, "Resuming port failed\n");
   return;
  }
 }


 FUNC_8(((void*)0), FUNC_4(VAR_13));

 if (VAR_15->methods->device_resume != ((void*)0)) {

  (VAR_15->methods->device_resume) (VAR_14);
 }
 FUNC_2(VAR_15);

 VAR_14->flags.self_suspended = 0;
 FUNC_3(VAR_15);

 if (VAR_15->methods->set_hw_power != ((void*)0)) {

  (VAR_15->methods->set_hw_power) (VAR_15);
 }

 FUNC_15(VAR_14);


 VAR_16 = FUNC_10(VAR_14, 0);

 FUNC_16(VAR_14);


 if (FUNC_9(VAR_14)) {

  VAR_16 = FUNC_12(VAR_14,
      ((void*)0), VAR_4);
  if (VAR_16) {
   FUNC_1(0, "Clearing device "
       "remote wakeup failed: %s\n",
       FUNC_11(VAR_16));
  }
 }
}
