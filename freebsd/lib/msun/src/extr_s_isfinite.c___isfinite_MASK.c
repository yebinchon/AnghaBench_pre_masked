
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; } ;
union IEEEd2bits {double d; TYPE_1__ bits; } ;



int
FUNC_0(double VAR_0)
{
 union IEEEd2bits VAR_1;

 VAR_1.d = VAR_0;
 return (VAR_1.bits.exp != 2047);
}
