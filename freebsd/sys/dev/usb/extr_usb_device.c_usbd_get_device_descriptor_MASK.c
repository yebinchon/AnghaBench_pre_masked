
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_descriptor {int dummy; } ;
struct usb_device {struct usb_device_descriptor ddesc; } ;



struct usb_device_descriptor *
FUNC_0(struct usb_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (((void*)0));
 return (&VAR_0->ddesc);
}
