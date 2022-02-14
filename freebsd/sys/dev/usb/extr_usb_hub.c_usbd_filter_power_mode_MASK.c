
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_device {TYPE_1__* bus; } ;
struct usb_bus_methods {int (* get_power_mode ) (struct usb_device*,int*) ;} ;
typedef int int8_t ;
struct TYPE_2__ {struct usb_bus_methods* methods; } ;


 int FUNC_0 (struct usb_device*,int*) ;

uint8_t
FUNC_1(struct usb_device *VAR_0, uint8_t VAR_1)
{
 const struct usb_bus_methods *VAR_2;
 int8_t VAR_3;

 VAR_2 = VAR_0->bus->methods;
 VAR_3 = -1;

 if (VAR_2->get_power_mode != ((void*)0))
  (VAR_2->get_power_mode) (VAR_0, &VAR_3);


 if (VAR_3 < 0)
  return (VAR_1);


 return (VAR_3);
}
