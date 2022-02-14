
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expsign; } ;
union IEEEl2bits {long double e; TYPE_1__ xbits; } ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 long double* VAR_4 ;

long double
FUNC_0(long double VAR_5)
{
 union IEEEl2bits VAR_6;
 uint32_t VAR_7;
 int VAR_8, VAR_9;

 VAR_6.e = VAR_5;
 VAR_7 = VAR_6.xbits.expsign;
 VAR_8 = VAR_7 & 0x7fff;

 if (VAR_8 >= VAR_0 + VAR_1 - 1) {
  if (VAR_8 == VAR_0 + VAR_2)
   return (VAR_5 + VAR_5);
  return (VAR_5);
 }
 VAR_9 = VAR_7 >> 15;
 VAR_5 += VAR_3[VAR_9];
 VAR_5 -= VAR_3[VAR_9];





 if (VAR_8 < VAR_0 && VAR_5 == 0.0L)
  return (VAR_4[VAR_9]);

 return (VAR_5);
}
