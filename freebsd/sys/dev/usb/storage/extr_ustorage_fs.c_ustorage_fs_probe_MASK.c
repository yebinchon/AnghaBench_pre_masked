
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_attach_arg {scalar_t__ usb_mode; int iface; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct usb_interface_descriptor* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_6)
{
 struct usb_attach_arg *VAR_7 = FUNC_0(VAR_6);
 struct usb_interface_descriptor *VAR_8;

 if (VAR_7->usb_mode != VAR_5) {
  return (VAR_1);
 }

 VAR_8 = FUNC_1(VAR_7->iface);
 if ((VAR_8 == ((void*)0)) ||
     (VAR_8->bInterfaceClass != VAR_2) ||
     (VAR_8->bInterfaceSubClass != VAR_4) ||
     (VAR_8->bInterfaceProtocol != VAR_3)) {
  return (VAR_1);
 }
 return (VAR_0);
}
