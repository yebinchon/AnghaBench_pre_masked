
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_interface_descriptor {scalar_t__ bInterfaceNumber; } ;
struct usb_descriptor {scalar_t__ bDescriptorType; int bLength; } ;
struct usb_config_descriptor {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct usb_descriptor* FUNC_0 (struct usb_config_descriptor*,struct usb_descriptor*) ;

uint8_t
FUNC_1(struct usb_config_descriptor *VAR_1,
    struct usb_interface_descriptor *VAR_2)
{
 struct usb_descriptor *VAR_3;
 uint8_t VAR_4;
 uint8_t VAR_5;



 VAR_4 = 0;



 VAR_5 = VAR_2->bInterfaceNumber;



 VAR_3 = ((void*)0);
 while ((VAR_3 = FUNC_0(VAR_1, VAR_3))) {
  if ((VAR_3->bDescriptorType == VAR_0) &&
      (VAR_3->bLength >= sizeof(*VAR_2))) {
   VAR_2 = (struct usb_interface_descriptor *)VAR_3;
   if (VAR_2->bInterfaceNumber == VAR_5) {
    VAR_4++;
    if (VAR_4 == 0xFF)
     break;
   }
  }
 }
 return (VAR_4);
}
