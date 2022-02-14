
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; size_t sign; int manh; int manl; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long double* VAR_3 ;

long double
FUNC_1(long double VAR_4, long double *VAR_5)
{
 union IEEEl2bits VAR_6;
 int VAR_7;

 VAR_6.e = VAR_4;
 VAR_7 = VAR_6.bits.exp - VAR_2 + 1;
 if (VAR_7 < VAR_0) {
  if (VAR_7 < 0) {
   *VAR_5 = VAR_3[VAR_6.bits.sign];
   return (VAR_4);
  } else {
   if ((FUNC_0(VAR_6.bits.manh, VAR_0 - 1 - VAR_7) |
        VAR_6.bits.manl) == 0) {
    *VAR_5 = VAR_4;
    return (VAR_3[VAR_6.bits.sign]);
   } else {

    VAR_6.bits.manh >>= VAR_0 - 1 - VAR_7;
    VAR_6.bits.manh <<= VAR_0 - 1 - VAR_7;
    VAR_6.bits.manl = 0;
    *VAR_5 = VAR_6.e;
    return (VAR_4 - VAR_6.e);
   }
  }
 } else if (VAR_7 >= VAR_1 - 1) {
  *VAR_5 = VAR_4;
  if (VAR_4 != VAR_4)
   return (VAR_4);
  return (VAR_3[VAR_6.bits.sign]);
 } else {
  if (FUNC_0(VAR_6.bits.manl, VAR_1 - 1 - VAR_7) == 0) {

   *VAR_5 = VAR_4;
   return (VAR_3[VAR_6.bits.sign]);
  } else {

   VAR_6.bits.manl >>= VAR_1 - 1 - VAR_7;
   VAR_6.bits.manl <<= VAR_1 - 1 - VAR_7;
   *VAR_5 = VAR_6.e;
   return (VAR_4 - VAR_6.e);
  }
 }
}
