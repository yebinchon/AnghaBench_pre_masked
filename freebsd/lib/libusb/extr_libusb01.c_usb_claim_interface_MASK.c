
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
struct libusb20_device {int claimed_interface; } ;



int
FUNC_0(usb_dev_handle * VAR_0, int VAR_1)
{
 struct libusb20_device *VAR_2 = (void *)VAR_0;

 VAR_2->claimed_interface = VAR_1;

 return (0);
}
