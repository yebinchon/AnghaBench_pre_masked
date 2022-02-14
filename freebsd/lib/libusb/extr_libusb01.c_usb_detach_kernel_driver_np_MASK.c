
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
struct libusb20_device {int dummy; } ;


 int FUNC_0 (struct libusb20_device*,int) ;

int
FUNC_1(usb_dev_handle * VAR_0, int VAR_1)
{
 struct libusb20_device *VAR_2;
 int VAR_3;

 VAR_2 = (void *)VAR_0;

 if (VAR_2 == ((void*)0))
  return (-1);

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 != 0)
  return (-1);

 return (0);
}
