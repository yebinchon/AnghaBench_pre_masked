
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint {int * edesc; } ;
struct usb_device {int endpoints_max; struct usb_endpoint* endpoints; } ;



struct usb_endpoint *
FUNC_0(struct usb_device *VAR_0, struct usb_endpoint *VAR_1)
{
 struct usb_endpoint *VAR_2;


 if (VAR_0 == ((void*)0))
  return (((void*)0));

 VAR_2 = VAR_0->endpoints + VAR_0->endpoints_max;


 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_0->endpoints;
 else
  VAR_1++;


 while (VAR_1 != VAR_2) {
  if (VAR_1->edesc != ((void*)0))
   return (VAR_1);
  VAR_1++;
 }
 return (((void*)0));
}
