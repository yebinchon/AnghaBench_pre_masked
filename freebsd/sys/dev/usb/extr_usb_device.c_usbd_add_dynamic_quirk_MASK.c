
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device {scalar_t__* autoQuirk; } ;


 int VAR_0 ;
 size_t VAR_1 ;

usb_error_t
FUNC_0(struct usb_device *VAR_2, uint16_t VAR_3)
{
 uint8_t VAR_4;

 for (VAR_4 = 0; VAR_4 != VAR_1; VAR_4++) {
  if (VAR_2->autoQuirk[VAR_4] == 0 ||
      VAR_2->autoQuirk[VAR_4] == VAR_3) {
   VAR_2->autoQuirk[VAR_4] = VAR_3;
   return (0);
  }
 }
 return (VAR_0);
}
