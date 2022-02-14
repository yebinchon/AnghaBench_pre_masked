
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; scalar_t__ manl; scalar_t__ manh; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int FUNC_0 (union IEEEl2bits) ;

int
FUNC_1(long double VAR_0)
{
 union IEEEl2bits VAR_1;

 VAR_1.e = VAR_0;
 FUNC_0(VAR_1);
 return (VAR_1.bits.exp == 32767 && (VAR_1.bits.manl != 0 || VAR_1.bits.manh != 0));
}
