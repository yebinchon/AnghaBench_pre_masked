
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_proc_msg {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_bus_msg {struct usb_bus* bus; } ;
struct usb_bus {int usbrev; int hw_power_state; int bdev; TYPE_2__** devices; TYPE_1__* methods; } ;
typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;
typedef int device_t ;
struct TYPE_4__ {int * hub; } ;
struct TYPE_3__ {int (* set_hw_power ) (struct usb_bus*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,struct usb_bus*) ;
 int FUNC_5 (struct usb_bus*) ;
 struct usb_device* FUNC_6 (int ,struct usb_bus*,int *,int ,int ,int,int,int ) ;
 int FUNC_7 (struct usb_bus*) ;
 scalar_t__ FUNC_8 (struct usb_device*,int ) ;
 int FUNC_9 (struct usb_bus*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct usb_proc_msg *VAR_14)
{
 struct usb_bus *VAR_15;
 struct usb_device *VAR_16;
 device_t VAR_17;
 usb_error_t VAR_18;
 enum usb_dev_speed VAR_19;

 VAR_15 = ((struct usb_bus_msg *)VAR_14)->bus;
 VAR_17 = VAR_15->bdev;

 FUNC_0("\n");

 switch (VAR_15->usbrev) {
 case 132:
  VAR_19 = VAR_10;
  FUNC_3(VAR_15->bdev, "12Mbps Full Speed USB v1.0\n");
  break;

 case 131:
  VAR_19 = VAR_10;
  FUNC_3(VAR_15->bdev, "12Mbps Full Speed USB v1.1\n");
  break;

 case 130:
  VAR_19 = VAR_11;
  FUNC_3(VAR_15->bdev, "480Mbps High Speed USB v2.0\n");
  break;

 case 129:
  VAR_19 = VAR_13;
  FUNC_3(VAR_15->bdev, "480Mbps Wireless USB v2.5\n");
  break;

 case 128:
  VAR_19 = VAR_12;
  FUNC_3(VAR_15->bdev, "5.0Gbps Super Speed USB v3.0\n");
  break;

 default:
  FUNC_3(VAR_15->bdev, "Unsupported USB revision\n");



  return;
 }


 VAR_15->hw_power_state =
   VAR_3 |
   VAR_2 |
   VAR_4 |
   VAR_5 |
   VAR_6;

 FUNC_2(VAR_15);



 if (VAR_15->methods->set_hw_power != ((void*)0)) {
  (VAR_15->methods->set_hw_power) (VAR_15);
 }



 VAR_16 = FUNC_6(VAR_15->bdev, VAR_15, ((void*)0), 0, 0, 1,
     VAR_19, VAR_8);
 if (VAR_16) {
  VAR_18 = FUNC_8(VAR_16,
      VAR_7);
  if (!VAR_18) {
   if ((VAR_15->devices[VAR_9] == ((void*)0)) ||
       (VAR_15->devices[VAR_9]->hub == ((void*)0))) {
    VAR_18 = VAR_1;
   }
  }
 } else {
  VAR_18 = VAR_0;
 }

 FUNC_1(VAR_15);

 if (VAR_18) {
  FUNC_3(VAR_15->bdev, "Root HUB problem, error=%s\n",
      FUNC_10(VAR_18));



 }


 FUNC_4(VAR_17, VAR_15);


 FUNC_7(VAR_15);
}
