
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {struct usb_config_descriptor* cdesc; } ;
struct usb_config_descriptor {int dummy; } ;



struct usb_config_descriptor *
FUNC_0(struct usb_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (((void*)0));
 return (VAR_0->cdesc);
}
