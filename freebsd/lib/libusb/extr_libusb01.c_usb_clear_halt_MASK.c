
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
struct libusb20_transfer {int dummy; } ;


 int FUNC_0 (struct libusb20_transfer*) ;
 struct libusb20_transfer* FUNC_1 (int *,unsigned int) ;

int
FUNC_2(usb_dev_handle * VAR_0, unsigned int VAR_1)
{
 struct libusb20_transfer *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (-1);

 FUNC_0(VAR_2);

 return (0);
}
