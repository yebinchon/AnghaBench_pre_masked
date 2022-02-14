
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct libusb20_device {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* get_power_usage ) (struct libusb20_device*,scalar_t__*) ;} ;


 int FUNC_0 (struct libusb20_device*,scalar_t__*) ;

uint16_t
FUNC_1(struct libusb20_device *VAR_0)
{
 int VAR_1;
 uint16_t VAR_2;

 VAR_1 = VAR_0->methods->get_power_usage(VAR_0, &VAR_2);
 if (VAR_1)
  VAR_2 = 0;
 return (VAR_2);
}
