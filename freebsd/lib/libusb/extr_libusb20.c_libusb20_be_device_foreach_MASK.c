
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {int dummy; } ;
struct libusb20_backend {int usb_devs; } ;


 struct libusb20_device* FUNC_0 (int *) ;
 struct libusb20_device* FUNC_1 (struct libusb20_device*,int ) ;
 int VAR_0 ;

struct libusb20_device *
FUNC_2(struct libusb20_backend *VAR_1, struct libusb20_device *VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  VAR_2 = ((void*)0);
 } else if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_0(&(VAR_1->usb_devs));
 } else {
  VAR_2 = FUNC_1(VAR_2, VAR_0);
 }
 return (VAR_2);
}
