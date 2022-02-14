
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb20_device {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* get_power_mode ) (struct libusb20_device*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct libusb20_device*,int *) ;

uint8_t
FUNC_1(struct libusb20_device *VAR_1)
{
 int VAR_2;
 uint8_t VAR_3;

 VAR_2 = VAR_1->methods->get_power_mode(VAR_1, &VAR_3);
 if (VAR_2)
  VAR_3 = VAR_0;
 return (VAR_3);
}
