
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sign; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;



long double
FUNC_0(long double VAR_0, long double VAR_1)
{
 union IEEEl2bits VAR_2, VAR_3;

 VAR_2.e = VAR_0;
 VAR_3.e = VAR_1;
 VAR_2.bits.sign = VAR_3.bits.sign;
 return (VAR_2.e);
}
