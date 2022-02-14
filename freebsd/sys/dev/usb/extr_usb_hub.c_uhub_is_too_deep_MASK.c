
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device {int speed; int depth; } ;


 int VAR_0 ;




 int VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(struct usb_device *VAR_2)
{
 switch (VAR_2->speed) {
 case 131:
 case 129:
 case 130:
  if (VAR_2->depth > VAR_0)
   return (1);
  break;
 case 128:
  if (VAR_2->depth > VAR_1)
   return (1);
  break;
 default:
  break;
 }
 return (0);
}
