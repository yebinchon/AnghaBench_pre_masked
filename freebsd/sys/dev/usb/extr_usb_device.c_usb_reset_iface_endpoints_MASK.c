
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_endpoint {scalar_t__ iface_index; int * edesc; } ;
struct usb_device {int endpoints_max; struct usb_endpoint* endpoints; } ;


 int FUNC_0 (struct usb_device*,struct usb_endpoint*,int ) ;

usb_error_t
FUNC_1(struct usb_device *VAR_0, uint8_t VAR_1)
{
 struct usb_endpoint *VAR_2;
 struct usb_endpoint *VAR_3;

 VAR_2 = VAR_0->endpoints;
 VAR_3 = VAR_0->endpoints + VAR_0->endpoints_max;

 for (; VAR_2 != VAR_3; VAR_2++) {

  if ((VAR_2->edesc == ((void*)0)) ||
      (VAR_2->iface_index != VAR_1)) {
   continue;
  }

  FUNC_0(VAR_0, VAR_2, 0);
 }
 return (0);
}
