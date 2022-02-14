
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int usb_timeout_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_8__ {int self_suspended; scalar_t__ usb_mode; } ;
struct usb_device {struct usb_device* parent_hub; int port_no; TYPE_4__* bus; TYPE_2__ flags; TYPE_1__* hub; } ;
struct TYPE_10__ {TYPE_3__* methods; } ;
struct TYPE_9__ {int (* device_suspend ) (struct usb_device*) ;} ;
struct TYPE_7__ {scalar_t__ nports; scalar_t__ ports; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct usb_device*) ;
 struct usb_device* FUNC_6 (TYPE_4__*,scalar_t__) ;
 int FUNC_7 (struct usb_device*) ;
 scalar_t__ FUNC_8 (struct usb_device*) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*) ;
 int VAR_4 ;
 int FUNC_12 (struct usb_device*,int) ;
 int FUNC_13 (struct usb_device*) ;
 int FUNC_14 (struct usb_device*,int *,int ) ;
 int FUNC_15 (struct usb_device*,int *,int ,int ) ;
 int FUNC_16 (struct usb_device*,int *,int ) ;
 int FUNC_17 (struct usb_device*,int *,int ,int ) ;
 int FUNC_18 (struct usb_device*,int *,int ,int ) ;
 int FUNC_19 (struct usb_device*) ;
 int FUNC_20 (struct usb_device*) ;

__attribute__((used)) static void
FUNC_21(struct usb_device *VAR_5)
{
 struct usb_device *VAR_6;
 int VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;

repeat:

 if (VAR_5 == ((void*)0))
  return;


 if (VAR_5->flags.self_suspended)
  return;


 if (VAR_5->parent_hub == ((void*)0))
  return;

 FUNC_0("udev=%p\n", VAR_5);


 if (VAR_5->hub != ((void*)0)) {
  VAR_9 = VAR_5->hub->nports;


  for (VAR_8 = 0; VAR_8 != VAR_9; VAR_8++) {
   VAR_6 = FUNC_6(VAR_5->bus,
       VAR_5->hub->ports + VAR_8);

   if (VAR_6 == ((void*)0))
    continue;

   if (VAR_6->flags.self_suspended)
    continue;

   FUNC_1(1, "Port %u is busy on the HUB!\n", VAR_8 + 1);
   return;
  }
 }

 if (FUNC_10(VAR_5)) {






  VAR_7 = FUNC_16(VAR_5,
      ((void*)0), VAR_0);
  if (VAR_7) {
   FUNC_1(0, "Setting device "
       "remote wakeup failed\n");
  }
 }

 FUNC_2(VAR_5->bus);




 VAR_7 = FUNC_11(VAR_5);
 if (VAR_7 == 0) {





  VAR_5->flags.self_suspended = 1;
 }
 FUNC_3(VAR_5->bus);

 if (VAR_7 != 0) {
  if (FUNC_10(VAR_5)) {

   VAR_7 = FUNC_14(VAR_5,
       ((void*)0), VAR_0);
   if (VAR_7) {
    FUNC_1(0, "Setting device "
        "remote wakeup failed\n");
   }
  }

  if (VAR_5->flags.usb_mode == VAR_3) {

   FUNC_7(VAR_5->parent_hub);


   FUNC_9(((void*)0), FUNC_4(20));


   VAR_7 = FUNC_15(VAR_5->parent_hub,
       ((void*)0), VAR_5->port_no, VAR_1);


   FUNC_9(((void*)0), FUNC_4(VAR_4));
  }
  FUNC_0("Suspend was cancelled!\n");
  return;
 }

 FUNC_19(VAR_5);


 VAR_7 = FUNC_12(VAR_5, 1);

 FUNC_20(VAR_5);

 if (VAR_5->bus->methods->device_suspend != ((void*)0)) {
  usb_timeout_t VAR_10;


  (VAR_5->bus->methods->device_suspend) (VAR_5);


  VAR_10 = FUNC_13(VAR_5);
  if (VAR_10 != 0)
   FUNC_9(((void*)0), FUNC_4(VAR_10));

 }

 if (FUNC_8(VAR_5)) {

  VAR_7 = FUNC_17(VAR_5->parent_hub,
      ((void*)0), VAR_5->port_no, VAR_1);
  if (VAR_7) {
   FUNC_1(0, "Suspending port failed\n");
   return;
  }
 } else {

  VAR_7 = FUNC_18(VAR_5->parent_hub,
      ((void*)0), VAR_5->port_no, VAR_2);
  if (VAR_7) {
   FUNC_1(0, "Suspending port failed\n");
   return;
  }
 }

 VAR_5 = VAR_5->parent_hub;
 goto repeat;
}
