
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
struct usb_device {int dummy; } ;
struct libusb20_device {struct usb_device* privLuData; } ;



struct usb_device *
FUNC_0(usb_dev_handle * VAR_0)
{
 struct libusb20_device *VAR_1;

 VAR_1 = (void *)VAR_0;

 return (VAR_1->privLuData);
}
