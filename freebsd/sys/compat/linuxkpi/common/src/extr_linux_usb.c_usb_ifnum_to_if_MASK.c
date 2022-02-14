
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_interface {scalar_t__ num_altsetting; TYPE_2__* altsetting; } ;
struct usb_device {struct usb_interface* linux_iface_end; struct usb_interface* linux_iface_start; } ;
struct TYPE_3__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;



struct usb_interface *
FUNC_0(struct usb_device *VAR_0, uint8_t VAR_1)
{
 struct usb_interface *VAR_2;

 for (VAR_2 = VAR_0->linux_iface_start;
     VAR_2 != VAR_0->linux_iface_end;
     VAR_2++) {
  if ((VAR_2->num_altsetting > 0) &&
      (VAR_2->altsetting->desc.bInterfaceNumber == VAR_1)) {
   return (VAR_2);
  }
 }
 return (((void*)0));
}
