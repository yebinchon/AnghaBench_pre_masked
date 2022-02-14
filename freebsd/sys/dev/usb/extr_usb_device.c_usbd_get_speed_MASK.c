
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int speed; } ;
typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;



enum usb_dev_speed
FUNC_0(struct usb_device *VAR_0)
{
 return (VAR_0->speed);
}
