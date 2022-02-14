
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int state; } ;
typedef enum usb_dev_state { ____Placeholder_usb_dev_state } usb_dev_state ;


 int VAR_0 ;

enum usb_dev_state
FUNC_0(struct usb_device *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);
 return (VAR_1->state);
}
