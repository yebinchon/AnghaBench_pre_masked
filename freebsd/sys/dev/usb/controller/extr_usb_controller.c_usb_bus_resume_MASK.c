
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_proc_msg {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_bus_msg {struct usb_bus* bus; } ;
struct usb_bus {int hw_power_state; int * bdev; TYPE_1__* methods; scalar_t__ no_explore; struct usb_device** devices; } ;
struct TYPE_2__ {int (* set_hw_power ) (struct usb_bus*) ;int (* set_hw_power_sleep ) (struct usb_bus*,int ) ;} ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct usb_bus*,int ) ;
 int FUNC_8 (struct usb_bus*) ;
 scalar_t__ FUNC_9 (struct usb_device*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*) ;
 scalar_t__ FUNC_12 (struct usb_device*,int ) ;

__attribute__((used)) static void
FUNC_13(struct usb_proc_msg *VAR_9)
{
 struct usb_bus *VAR_10;
 struct usb_device *VAR_11;
 usb_error_t VAR_12;
 uint8_t VAR_13;

 FUNC_1("\n");

 VAR_10 = ((struct usb_bus_msg *)VAR_9)->bus;
 VAR_11 = VAR_10->devices[VAR_7];

 if (VAR_11 == ((void*)0) || VAR_10->bdev == ((void*)0))
  return;

 FUNC_3(VAR_10);

 VAR_13 = FUNC_10(VAR_11);



 FUNC_4(FUNC_5(VAR_10->bdev));

 FUNC_2(VAR_10);
  VAR_10->hw_power_state =
   VAR_1 |
   VAR_0 |
   VAR_2 |
   VAR_3 |
   VAR_4;
 VAR_10->no_explore = 0;
 FUNC_3(VAR_10);

 if (VAR_10->methods->set_hw_power_sleep != ((void*)0))
  (VAR_10->methods->set_hw_power_sleep) (VAR_10, VAR_5);

 if (VAR_10->methods->set_hw_power != ((void*)0))
  (VAR_10->methods->set_hw_power) (VAR_10);


 VAR_12 = FUNC_12(VAR_11, 0);
 if (VAR_12)
  FUNC_6(VAR_10->bdev, "Could not configure root HUB\n");


 VAR_12 = FUNC_9(VAR_11, VAR_6);
 if (VAR_12) {
  FUNC_6(VAR_10->bdev, "Could not probe and "
      "attach root HUB\n");
 }

 if (VAR_13)
  FUNC_11(VAR_11);

 FUNC_2(VAR_10);
}
