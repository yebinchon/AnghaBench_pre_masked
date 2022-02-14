
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb20_device {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* set_power_mode ) (struct libusb20_device*,int ) ;} ;


 int FUNC_0 (struct libusb20_device*,int ) ;

int
FUNC_1(struct libusb20_device *VAR_0, uint8_t VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->methods->set_power_mode(VAR_0, VAR_1);
 return (VAR_2);
}
