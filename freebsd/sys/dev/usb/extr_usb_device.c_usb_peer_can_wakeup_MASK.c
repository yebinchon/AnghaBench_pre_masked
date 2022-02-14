
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {TYPE_1__ flags; struct usb_config_descriptor* cdesc; } ;
struct usb_config_descriptor {int bmAttributes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

uint8_t
FUNC_0(struct usb_device *VAR_2)
{
 const struct usb_config_descriptor *VAR_3;

 VAR_3 = VAR_2->cdesc;
 if ((VAR_3 != ((void*)0)) && (VAR_2->flags.usb_mode == VAR_1)) {
  return (VAR_3->bmAttributes & VAR_0);
 }
 return (0);
}
