
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; int manh; int manl; size_t sign; } ;
union IEEEd2bits {double d; TYPE_1__ bits; } ;



double
FUNC_0(double VAR_0, double VAR_1)
{
 union IEEEd2bits VAR_2[2];

 VAR_2[0].d = VAR_0;
 VAR_2[1].d = VAR_1;


 if (VAR_2[0].bits.exp == 2047 && (VAR_2[0].bits.manh | VAR_2[0].bits.manl) != 0)
  return (VAR_1);
 if (VAR_2[1].bits.exp == 2047 && (VAR_2[1].bits.manh | VAR_2[1].bits.manl) != 0)
  return (VAR_0);


 if (VAR_2[0].bits.sign != VAR_2[1].bits.sign)
  return (VAR_2[VAR_2[1].bits.sign].d);

 return (VAR_0 < VAR_1 ? VAR_0 : VAR_1);
}
