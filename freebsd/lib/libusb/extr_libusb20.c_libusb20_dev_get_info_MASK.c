
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_info {int dummy; } ;
struct libusb20_device {TYPE_1__* beMethods; } ;
struct TYPE_2__ {int (* dev_get_info ) (struct libusb20_device*,struct usb_device_info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct libusb20_device*,struct usb_device_info*) ;

int
FUNC_1(struct libusb20_device *VAR_1,
    struct usb_device_info *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 return (VAR_1->beMethods->dev_get_info(VAR_1, VAR_2));
}
