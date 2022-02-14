
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {size_t device_index; } ;
struct usb_device {int dummy; } ;
struct usb_bus {struct usb_device** devices; } ;



struct usb_device *
FUNC_0(struct usb_bus *VAR_0, struct usb_port *VAR_1)
{
 if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0))) {

  return (((void*)0));
 }
 if (VAR_1->device_index == 0) {

  return (((void*)0));
 }
 return (VAR_0->devices[VAR_1->device_index]);
}
