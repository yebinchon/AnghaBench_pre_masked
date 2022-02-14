
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct usb_config {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static uint8_t
FUNC_0(const struct usb_config *VAR_3,
    uint16_t VAR_4)
{
 while (VAR_4--) {
  uint8_t VAR_5 = VAR_3[VAR_4].type;
  if (VAR_5 == VAR_0 || VAR_5 == VAR_1 ||
      VAR_5 == VAR_2)
   return (1);
 }
 return (0);
}
