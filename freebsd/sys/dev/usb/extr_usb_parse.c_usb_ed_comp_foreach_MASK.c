
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_ss_comp_descriptor {int dummy; } ;
struct usb_descriptor {scalar_t__ bDescriptorType; int bLength; } ;
struct usb_config_descriptor {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct usb_descriptor* FUNC_0 (struct usb_config_descriptor*,struct usb_descriptor*) ;

struct usb_endpoint_ss_comp_descriptor *
FUNC_1(struct usb_config_descriptor *VAR_3,
    struct usb_endpoint_ss_comp_descriptor *VAR_4)
{
 struct usb_descriptor *VAR_5;

 VAR_5 = ((struct usb_descriptor *)VAR_4);

 while ((VAR_5 = FUNC_0(VAR_3, VAR_5))) {
  if (VAR_5->bDescriptorType == VAR_2)
   break;
  if (VAR_5->bDescriptorType == VAR_0)
   break;
  if (VAR_5->bDescriptorType == VAR_1) {
   if (VAR_5->bLength < sizeof(*VAR_4)) {

    break;
   }
   return ((struct usb_endpoint_ss_comp_descriptor *)VAR_5);
  }
 }
 return (((void*)0));
}
