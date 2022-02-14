
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; } ;
union IEEEf2bits {float f; TYPE_1__ bits; } ;



int
FUNC_0(float VAR_0)
{
 union IEEEf2bits VAR_1;

 VAR_1.f = VAR_0;
 return (VAR_1.bits.exp != 255);
}
