
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
typedef int uint8_t ;
struct libusb20_device {int claimed_interface; } ;


 int FUNC_0 (void*,int ,int) ;

int
FUNC_1(usb_dev_handle * VAR_0, int VAR_1)
{
 struct libusb20_device *VAR_2 = (void *)VAR_0;
 int VAR_3;
 uint8_t VAR_4;

 VAR_4 = VAR_2->claimed_interface;

 VAR_3 = FUNC_0((void *)VAR_0, VAR_4, VAR_1);

 if (VAR_3)
  return (-1);

 return (0);
}
