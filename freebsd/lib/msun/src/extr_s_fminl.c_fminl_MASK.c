
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; int manh; int manl; scalar_t__ sign; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int FUNC_0 (union IEEEl2bits) ;

long double
FUNC_1(long double VAR_0, long double VAR_1)
{
 union IEEEl2bits VAR_2[2];

 VAR_2[0].e = VAR_0;
 FUNC_0(VAR_2[0]);
 VAR_2[1].e = VAR_1;
 FUNC_0(VAR_2[1]);


 if (VAR_2[0].bits.exp == 32767 && (VAR_2[0].bits.manh | VAR_2[0].bits.manl) != 0)
  return (VAR_1);
 if (VAR_2[1].bits.exp == 32767 && (VAR_2[1].bits.manh | VAR_2[1].bits.manl) != 0)
  return (VAR_0);


 if (VAR_2[0].bits.sign != VAR_2[1].bits.sign)
  return (VAR_2[1].bits.sign ? VAR_1 : VAR_0);

 return (VAR_0 < VAR_1 ? VAR_0 : VAR_1);
}
