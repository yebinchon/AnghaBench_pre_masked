
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,long double) ;
 int FUNC_2 (long double) ;
 long double FUNC_3 (long double) ;
 long double VAR_3 ;
 long double VAR_4 ;
 long double FUNC_4 (long double) ;
 long double FUNC_5 (double) ;
 long double VAR_5 ;
 long double FUNC_6 (long double) ;

long double
FUNC_7(long double VAR_6)
{
 long double VAR_7, VAR_8;
 uint16_t VAR_9, VAR_10;

 FUNC_0();
 FUNC_1(VAR_9, VAR_6);
 VAR_10 = VAR_9 & 0x7fff;
 if (VAR_10 >= 0x7fff) FUNC_2(VAR_6+VAR_6);
 if (VAR_10 < VAR_0 + VAR_2) {
     if (VAR_3 + VAR_6 > VAR_5) FUNC_2(VAR_6);
 }
 if (VAR_10 >= VAR_0 + VAR_1) {
     VAR_8 = FUNC_5(FUNC_3(VAR_6))+VAR_4;
 } else if (VAR_10 >= 0x4000) {
     VAR_7 = FUNC_3(VAR_6);
     VAR_8 = FUNC_5(2.0*VAR_7+VAR_5/(FUNC_6(VAR_6*VAR_6+VAR_5)+VAR_7));
 } else {
     VAR_7 = VAR_6*VAR_6;
     VAR_8 =FUNC_4(FUNC_3(VAR_6)+VAR_7/(VAR_5+FUNC_6(VAR_5+VAR_7)));
 }
 FUNC_2((VAR_9 & 0x8000) == 0 ? VAR_8 : -VAR_8);
}
