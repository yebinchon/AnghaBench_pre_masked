
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; scalar_t__ man; } ;
union IEEEf2bits {float f; TYPE_1__ bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(float VAR_5)
{
 union IEEEf2bits VAR_6;

 VAR_6.f = VAR_5;
 if (VAR_6.bits.exp == 0) {
  if (VAR_6.bits.man == 0)
   return (VAR_4);
  return (VAR_3);
 }
 if (VAR_6.bits.exp == 255) {
  if (VAR_6.bits.man == 0)
   return (VAR_0);
  return (VAR_1);
 }
 return (VAR_2);
}
