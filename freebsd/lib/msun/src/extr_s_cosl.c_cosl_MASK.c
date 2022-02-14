
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; scalar_t__ sign; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int FUNC_0 () ;
 long double VAR_0 ;
 int FUNC_1 (long double) ;
 int FUNC_2 (long double,long double*) ;
 long double FUNC_3 (long double,long double) ;
 long double FUNC_4 (long double,long double,int) ;

long double
FUNC_5(long double VAR_1)
{
 union IEEEl2bits VAR_2;
 int VAR_3;
 long double VAR_4[2];
 long double VAR_5, VAR_6;

 VAR_2.e = VAR_1;
 VAR_2.bits.sign = 0;


 if (VAR_2.bits.exp == 0)
  return (1.0);


 if (VAR_2.bits.exp == 32767)
  return ((VAR_1 - VAR_1) / (VAR_1 - VAR_1));

 FUNC_0();


 if (VAR_2.e < VAR_0)
  FUNC_1(FUNC_3(VAR_2.e, 0));

 VAR_3 = FUNC_2(VAR_1, VAR_4);
 VAR_5 = VAR_4[0];
 VAR_6 = VAR_4[1];

 switch (VAR_3 & 3) {
 case 0:
     VAR_5 = FUNC_3(VAR_5, VAR_6);
     break;
 case 1:
     VAR_5 = - FUNC_4(VAR_5, VAR_6, 1);
     break;
 case 2:
     VAR_5 = - FUNC_3(VAR_5, VAR_6);
     break;
 case 3:
     VAR_5 = FUNC_4(VAR_5, VAR_6, 1);
     break;
 }

 FUNC_1(VAR_5);
}
