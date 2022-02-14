
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct usb_endpoint {scalar_t__ iface_index; TYPE_2__* edesc; } ;
struct TYPE_3__ {scalar_t__ usb_mode; } ;
struct usb_device {int endpoints_max; struct usb_endpoint ctrl_ep; TYPE_1__ flags; struct usb_endpoint* endpoints; } ;
struct usb_config {scalar_t__ ep_index; scalar_t__ endpoint; scalar_t__ type; scalar_t__ direction; scalar_t__ usb_mode; } ;
struct TYPE_4__ {scalar_t__ bEndpointAddress; scalar_t__ bmAttributes; } ;


 int FUNC_0 (int,char*,struct usb_device*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

struct usb_endpoint *
FUNC_1(struct usb_device *VAR_12, uint8_t VAR_13,
    const struct usb_config *VAR_14)
{
 struct usb_endpoint *VAR_15 = VAR_12->endpoints;
 struct usb_endpoint *VAR_16 = VAR_12->endpoints + VAR_12->endpoints_max;
 uint8_t VAR_17 = VAR_14->ep_index;
 uint8_t VAR_18;
 uint8_t VAR_19;
 uint8_t VAR_20;
 uint8_t VAR_21;

 FUNC_0(10, "udev=%p iface_index=%d address=0x%x "
     "type=0x%x dir=0x%x index=%d\n",
     VAR_12, VAR_13, VAR_14->endpoint,
     VAR_14->type, VAR_14->direction, VAR_14->ep_index);



 if (VAR_14->usb_mode != VAR_11 &&
     VAR_12->flags.usb_mode != VAR_14->usb_mode) {

  return (((void*)0));
 }



 if (VAR_14->direction == VAR_6) {
  VAR_18 = (VAR_4 | VAR_5);
  VAR_19 = (VAR_12->flags.usb_mode == VAR_10) ?
      VAR_5 : VAR_4;
 } else if (VAR_14->direction == VAR_7) {
  VAR_18 = (VAR_4 | VAR_5);
  VAR_19 = (VAR_12->flags.usb_mode == VAR_10) ?
      VAR_4 : VAR_5;
 } else if (VAR_14->direction == VAR_3) {

  VAR_18 = 0;
  VAR_19 = 0;
 } else {

  VAR_18 = (VAR_4 | VAR_5);
  VAR_19 = (VAR_14->direction & (VAR_4 | VAR_5));
 }



 if (VAR_14->endpoint == VAR_1) {

 } else {

  VAR_18 |= VAR_0;
  VAR_19 |= (VAR_14->endpoint & VAR_0);
 }



 if (VAR_14->type == VAR_2) {

  VAR_20 = 2;
  VAR_21 = 2;
 } else if (VAR_14->type == VAR_8) {

  VAR_20 = 0;
  VAR_21 = 0;
 } else {

  VAR_20 = VAR_9;
  VAR_21 = (VAR_14->type & VAR_9);
 }






 for (; VAR_15 != VAR_16; VAR_15++) {

  if ((VAR_15->edesc == ((void*)0)) ||
      (VAR_15->iface_index != VAR_13)) {
   continue;
  }


  if (((VAR_15->edesc->bEndpointAddress & VAR_18) == VAR_19) &&
      ((VAR_15->edesc->bmAttributes & VAR_20) == VAR_21)) {
   if (!VAR_17--) {
    goto found;
   }
  }
 }






 if ((VAR_12->ctrl_ep.edesc != ((void*)0)) &&
     ((VAR_12->ctrl_ep.edesc->bEndpointAddress & VAR_18) == VAR_19) &&
     ((VAR_12->ctrl_ep.edesc->bmAttributes & VAR_20) == VAR_21) &&
     (!VAR_17)) {
  VAR_15 = &VAR_12->ctrl_ep;
  goto found;
 }
 return (((void*)0));

found:
 return (VAR_15);
}
