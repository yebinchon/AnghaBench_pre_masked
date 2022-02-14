
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_endpoint {int ep_mode; } ;
struct usb_device {int dummy; } ;



uint8_t
FUNC_0(struct usb_device *VAR_0, struct usb_endpoint *VAR_1)
{
 return (VAR_1->ep_mode);
}
