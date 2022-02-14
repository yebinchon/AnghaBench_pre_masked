
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_descriptor {scalar_t__ bDescriptorType; } ;
struct usb_config_descriptor {int dummy; } ;


 struct usb_descriptor* FUNC_0 (struct usb_config_descriptor*,struct usb_descriptor*) ;

uint8_t
FUNC_1(struct usb_config_descriptor *VAR_0, uint8_t VAR_1)
{
 struct usb_descriptor *VAR_2 = ((void*)0);
 uint8_t VAR_3 = 0;

 while ((VAR_2 = FUNC_0(VAR_0, VAR_2))) {
  if (VAR_2->bDescriptorType == VAR_1) {
   VAR_3++;
   if (VAR_3 == 0xFF)
    break;
  }
 }
 return (VAR_3);
}
