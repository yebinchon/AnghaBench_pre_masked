
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_interface {int dummy; } ;
struct usb_device {int ifaces_max; struct usb_interface* ifaces; } ;



struct usb_interface *
FUNC_0(struct usb_device *VAR_0, uint8_t VAR_1)
{
 struct usb_interface *VAR_2 = VAR_0->ifaces + VAR_1;

 if (VAR_1 >= VAR_0->ifaces_max)
  return (((void*)0));
 return (VAR_2);
}
