
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int bEndpointAddress; int bmAttributes; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;
struct usb_device {struct usb_host_endpoint ep0; struct usb_interface* linux_iface_end; struct usb_interface* linux_iface_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct usb_host_endpoint *
FUNC_0(struct usb_device *VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 struct usb_host_endpoint *VAR_8;
 struct usb_host_endpoint *VAR_9;
 struct usb_host_interface *VAR_10;
 struct usb_interface *VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;

 if (VAR_5 == ((void*)0)) {
  return (((void*)0));
 }
 if (VAR_6 == VAR_1) {
  VAR_14 = VAR_0;
 } else {
  VAR_14 = (VAR_2 | VAR_3 | VAR_0);
 }

 VAR_7 &= VAR_14;





 for (VAR_11 = VAR_5->linux_iface_start;
     VAR_11 != VAR_5->linux_iface_end;
     VAR_11++) {
  VAR_10 = VAR_11->cur_altsetting;
  if (VAR_10) {
   VAR_9 = VAR_10->endpoint + VAR_10->desc.bNumEndpoints;
   for (VAR_8 = VAR_10->endpoint;
       VAR_8 != VAR_9;
       VAR_8++) {
    VAR_12 = VAR_8->desc.bEndpointAddress;
    VAR_13 = VAR_8->desc.bmAttributes;

    if (((VAR_12 & VAR_14) == VAR_7) &&
        ((VAR_13 & VAR_4) == VAR_6)) {
     return (VAR_8);
    }
   }
  }
 }

 if ((VAR_6 == VAR_1) && ((VAR_7 & VAR_0) == 0)) {
  return (&VAR_5->ep0);
 }
 return (((void*)0));
}
