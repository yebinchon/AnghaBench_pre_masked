
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_timeout_t ;
typedef int uint32_t ;
struct usb_device {TYPE_1__* bus; } ;
struct usb_bus_methods {int (* get_dma_delay ) (struct usb_device*,int*) ;} ;
struct TYPE_2__ {struct usb_bus_methods* methods; } ;


 int FUNC_0 (struct usb_device*,int*) ;

usb_timeout_t
FUNC_1(struct usb_device *VAR_0)
{
 const struct usb_bus_methods *VAR_1;
 uint32_t VAR_2;

 VAR_1 = VAR_0->bus->methods;
 VAR_2 = 0;

 if (VAR_1->get_dma_delay) {
  (VAR_1->get_dma_delay) (VAR_0, &VAR_2);




  VAR_2 += 0x3FF;
  VAR_2 /= 0x400;
 }
 return (VAR_2);
}
