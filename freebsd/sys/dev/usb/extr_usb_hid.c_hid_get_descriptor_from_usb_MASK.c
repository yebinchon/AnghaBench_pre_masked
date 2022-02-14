
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int dummy; } ;
typedef void usb_hid_descriptor ;
struct usb_descriptor {scalar_t__ bDescriptorType; scalar_t__ bLength; } ;
struct usb_config_descriptor {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct usb_descriptor* FUNC_1 (struct usb_config_descriptor*,struct usb_descriptor*) ;

struct usb_hid_descriptor *
FUNC_2(struct usb_config_descriptor *VAR_2,
    struct usb_interface_descriptor *VAR_3)
{
 struct usb_descriptor *VAR_4 = (void *)VAR_3;

 if (VAR_4 == ((void*)0)) {
  return (((void*)0));
 }
 while ((VAR_4 = FUNC_1(VAR_2, VAR_4))) {
  if ((VAR_4->bDescriptorType == VAR_0) &&
      (VAR_4->bLength >= FUNC_0(0))) {
   return (void *)VAR_4;
  }
  if (VAR_4->bDescriptorType == VAR_1) {
   break;
  }
 }
 return (((void*)0));
}
