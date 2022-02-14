
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {int beMethods; } ;
struct libusb20_backend {int usb_devs; int methods; } ;


 int FUNC_0 (int *,struct libusb20_device*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct libusb20_backend *VAR_1, struct libusb20_device *VAR_2)
{
 VAR_2->beMethods = VAR_1->methods;
 FUNC_0(&(VAR_1->usb_devs), VAR_2, VAR_0);
}
