
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t usb_test_quirk_p ;
typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_attach_arg {int info; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__* autoQuirk; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

uint8_t
FUNC_0(const struct usb_attach_arg *VAR_2, uint16_t VAR_3)
{
 uint8_t VAR_4;
 uint8_t VAR_5;

 if (VAR_3 == VAR_0)
  return (0);



 for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++) {
  if (VAR_2->device->autoQuirk[VAR_5] == VAR_3)
   return (1);
 }



 VAR_4 = (usb_test_quirk_p) (&VAR_2->info, VAR_3);

 return (VAR_4);
}
