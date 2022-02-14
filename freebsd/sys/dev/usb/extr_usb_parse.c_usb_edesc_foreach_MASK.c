
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {int dummy; } ;
struct usb_descriptor {scalar_t__ bDescriptorType; int bLength; } ;
struct usb_config_descriptor {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_descriptor* FUNC_0 (struct usb_config_descriptor*,struct usb_descriptor*) ;

struct usb_endpoint_descriptor *
FUNC_1(struct usb_config_descriptor *VAR_2,
    struct usb_endpoint_descriptor *VAR_3)
{
 struct usb_descriptor *VAR_4;

 VAR_4 = ((struct usb_descriptor *)VAR_3);

 while ((VAR_4 = FUNC_0(VAR_2, VAR_4))) {
  if (VAR_4->bDescriptorType == VAR_1) {
   break;
  }
  if (VAR_4->bDescriptorType == VAR_0) {
   if (VAR_4->bLength < sizeof(*VAR_3)) {

    break;
   }
   return ((struct usb_endpoint_descriptor *)VAR_4);
  }
 }
 return (((void*)0));
}
