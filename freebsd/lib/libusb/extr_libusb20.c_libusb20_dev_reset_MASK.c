
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libusb20_device {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* reset_device ) (struct libusb20_device*) ;} ;


 int FUNC_0 (struct libusb20_device*) ;

int
FUNC_1(struct libusb20_device *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->methods->reset_device(VAR_0);
 return (VAR_1);
}
