
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int,long double) ;
 int FUNC_2 (double) ;
 double VAR_2 ;
 double FUNC_3 (long double) ;
 double FUNC_4 (double) ;
 long double VAR_3 ;
 long double FUNC_5 (double) ;

long double
FUNC_6(long double VAR_4)
{
 long double VAR_5;
 int16_t VAR_6;

 FUNC_0();
 FUNC_1(VAR_6, VAR_4);
 if (VAR_6 < 0x3fff) {
     FUNC_2((VAR_4-VAR_4)/(VAR_4-VAR_4));
 } else if (VAR_6 >= VAR_0 + VAR_1) {
     if (VAR_6 >= 0x7fff) {
         FUNC_2(VAR_4+VAR_4);
     } else
  FUNC_2(FUNC_4(VAR_4)+VAR_2);
 } else if (VAR_6 == 0x3fff && VAR_4 == 1) {
     FUNC_2(0.0);
 } else if (VAR_6 >= 0x4000) {
     VAR_5=VAR_4*VAR_4;
     FUNC_2(FUNC_4(2.0*VAR_4-VAR_3/(VAR_4+FUNC_5(VAR_5-VAR_3))));
 } else {
     VAR_5 = VAR_4-VAR_3;
     FUNC_2(FUNC_3(VAR_5+FUNC_5(2.0*VAR_5+VAR_5*VAR_5)));
 }
}
