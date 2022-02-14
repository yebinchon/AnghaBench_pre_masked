
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libusb20_device {int dummy; } ;
struct libusb20_backend {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* exit_backend ) (struct libusb20_backend*) ;} ;


 int FUNC_0 (struct libusb20_backend*) ;
 int FUNC_1 (struct libusb20_backend*,struct libusb20_device*) ;
 struct libusb20_device* FUNC_2 (struct libusb20_backend*,int *) ;
 int FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb20_backend*) ;

void
FUNC_5(struct libusb20_backend *VAR_0)
{
 struct libusb20_device *VAR_1;

 if (VAR_0 == ((void*)0)) {

  return;
 }
 while ((VAR_1 = FUNC_2(VAR_0, ((void*)0)))) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_3(VAR_1);
 }
 if (VAR_0->methods->exit_backend) {
  VAR_0->methods->exit_backend(VAR_0);
 }

 FUNC_0(VAR_0);
}
