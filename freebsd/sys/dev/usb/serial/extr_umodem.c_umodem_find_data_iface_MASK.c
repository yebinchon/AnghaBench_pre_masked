
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; int bInterfaceNumber; } ;
struct usb_interface {int dummy; } ;
struct usb_attach_arg {int device; } ;


 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_interface* FUNC_1 (int ,int) ;
 struct usb_interface_descriptor* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static void
FUNC_3(struct usb_attach_arg *VAR_2,
    uint8_t VAR_3, uint8_t *VAR_4, uint8_t *VAR_5)
{
 struct usb_interface_descriptor *VAR_6;
 struct usb_interface *VAR_7;

 VAR_7 = FUNC_1(VAR_2->device, VAR_3);


 if (VAR_7 == ((void*)0))
  return;

 VAR_6 = FUNC_2(VAR_7);


 if (VAR_6->bInterfaceClass != VAR_0 ||
     VAR_6->bInterfaceSubClass != VAR_1) {

  if (*VAR_5)
   return;
 } else {
  *VAR_5 = 1;
 }

 FUNC_0(11, "Match at index %u\n", VAR_3);

 *VAR_4 = VAR_6->bInterfaceNumber;
}
