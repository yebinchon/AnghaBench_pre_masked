
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_backend_methods {int (* init_backend ) (struct libusb20_backend*) ;} ;
struct libusb20_backend {struct libusb20_backend_methods const* methods; int usb_devs; } ;


 int FUNC_0 (int *) ;
 struct libusb20_backend* FUNC_1 (int) ;
 int FUNC_2 (struct libusb20_backend*,int ,int) ;
 int FUNC_3 (struct libusb20_backend*) ;

struct libusb20_backend *
FUNC_4(const struct libusb20_backend_methods *VAR_0)
{
 struct libusb20_backend *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0)) {
  return (((void*)0));
 }
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 FUNC_0(&(VAR_1->usb_devs));

 VAR_1->methods = VAR_0;


 if (VAR_1->methods->init_backend) {
  VAR_1->methods->init_backend(VAR_1);
 }
 return (VAR_1);
}
