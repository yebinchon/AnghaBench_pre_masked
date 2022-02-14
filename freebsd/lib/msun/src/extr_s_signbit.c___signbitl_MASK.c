
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sign; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;



int
FUNC_0(long double VAR_0)
{
 union IEEEl2bits VAR_1;

 VAR_1.e = VAR_0;
 return (VAR_1.bits.sign);
}
