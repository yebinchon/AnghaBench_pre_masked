
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
struct usb_bus {int no_explore; TYPE_1__* methods; scalar_t__ hw_power_state; int * bdev; struct usb_device** devices; } ;
struct TYPE_2__ {int (* set_hw_power_sleep ) (struct usb_bus*,int ) ;int (* set_hw_power ) (struct usb_bus*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct usb_bus*) ;
 int FUNC_6 (struct usb_bus*,int ) ;
 scalar_t__ FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*) ;
 scalar_t__ FUNC_9 (struct usb_device*,int ) ;

__attribute__((used)) static void
FUNC_10(struct usb_proc_msg *VAR_3)
{
 struct usb_bus *VAR_4;
 struct usb_device *VAR_5;
 usb_error_t VAR_6;
 uint8_t VAR_7;

 FUNC_0("\n");

 VAR_4 = ((struct usb_bus_msg *)VAR_3)->bus;
 VAR_5 = VAR_4->devices[VAR_1];

 if (VAR_5 == ((void*)0) || VAR_4->bdev == ((void*)0))
  return;

 FUNC_2(VAR_4);
 FUNC_3(VAR_4->bdev);

 VAR_7 = FUNC_7(VAR_5);

 VAR_6 = FUNC_9(VAR_5, VAR_2);
 if (VAR_6)
  FUNC_4(VAR_4->bdev, "Could not unconfigure root HUB\n");

 FUNC_1(VAR_4);
 VAR_4->hw_power_state = 0;
 VAR_4->no_explore = 1;
 FUNC_2(VAR_4);

 if (VAR_4->methods->set_hw_power != ((void*)0))
  (VAR_4->methods->set_hw_power) (VAR_4);

 if (VAR_4->methods->set_hw_power_sleep != ((void*)0))
  (VAR_4->methods->set_hw_power_sleep) (VAR_4, VAR_0);

 if (VAR_7)
  FUNC_8(VAR_5);

 FUNC_1(VAR_4);
}
