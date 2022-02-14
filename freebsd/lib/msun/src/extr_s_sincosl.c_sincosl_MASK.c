
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sign; int exp; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;


 int FUNC_0 () ;
 long double VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (long double,long double*) ;
 int FUNC_3 (long double,long double,int,long double*,long double*) ;

void
FUNC_4(long double VAR_1, long double *VAR_2, long double *VAR_3)
{
 union IEEEl2bits VAR_4;
 int VAR_5, VAR_6;
 long double VAR_7[2];

 VAR_4.e = VAR_1;
 VAR_6 = VAR_4.bits.sign;
 VAR_4.bits.sign = 0;

 FUNC_0();


 if (VAR_4.e < VAR_0) {




  if (VAR_4.bits.exp == 0) {
   *VAR_2 = VAR_1;
   *VAR_3 = 1;
  } else
   FUNC_3(VAR_1, 0, 0, VAR_2, VAR_3);
  FUNC_1();
 }


 if (VAR_4.bits.exp == 32767) {
  *VAR_2 = VAR_1 - VAR_1;
  *VAR_3 = VAR_1 - VAR_1;
  FUNC_1();
 }


 VAR_5 = FUNC_2(VAR_1, VAR_7);

 switch (VAR_5 & 3) {
 case 0:
  FUNC_3(VAR_7[0], VAR_7[1], 1, VAR_2, VAR_3);
  break;
 case 1:
  FUNC_3(VAR_7[0], VAR_7[1], 1, VAR_3, VAR_2);
  *VAR_3 = -*VAR_3;
  break;
 case 2:
  FUNC_3(VAR_7[0], VAR_7[1], 1, VAR_2, VAR_3);
  *VAR_2 = -*VAR_2;
  *VAR_3 = -*VAR_3;
  break;
 default:
  FUNC_3(VAR_7[0], VAR_7[1], 1, VAR_3, VAR_2);
  *VAR_2 = -*VAR_2;
 }

 FUNC_1();
}
