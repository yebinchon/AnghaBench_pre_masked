
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; int manl; int manh; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union IEEEl2bits) ;

int
FUNC_1(long double VAR_5)
{
 union IEEEl2bits VAR_6;

 VAR_6.e = VAR_5;
 if (VAR_6.bits.exp == 0) {
  if ((VAR_6.bits.manl | VAR_6.bits.manh) == 0)
   return (VAR_4);
  return (VAR_3);
 }
 FUNC_0(VAR_6);







 if (VAR_6.bits.exp == 32767) {
  if ((VAR_6.bits.manl | VAR_6.bits.manh) == 0)
   return (VAR_0);
  return (VAR_1);
 }

 return (VAR_2);
}
