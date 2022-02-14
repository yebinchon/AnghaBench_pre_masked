
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; scalar_t__ man; size_t sign; } ;
union IEEEf2bits {float f; TYPE_1__ bits; } ;



float
FUNC_0(float VAR_0, float VAR_1)
{
 union IEEEf2bits VAR_2[2];

 VAR_2[0].f = VAR_0;
 VAR_2[1].f = VAR_1;


 if (VAR_2[0].bits.exp == 255 && VAR_2[0].bits.man != 0)
  return (VAR_1);
 if (VAR_2[1].bits.exp == 255 && VAR_2[1].bits.man != 0)
  return (VAR_0);


 if (VAR_2[0].bits.sign != VAR_2[1].bits.sign)
  return (VAR_2[VAR_2[0].bits.sign].f);

 return (VAR_0 > VAR_1 ? VAR_0 : VAR_1);
}
