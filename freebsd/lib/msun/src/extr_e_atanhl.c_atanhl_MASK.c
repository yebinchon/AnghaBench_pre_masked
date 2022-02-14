
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int,long double) ;
 int FUNC_2 (long double) ;
 int FUNC_3 (long double,int) ;
 int FUNC_4 (long double) ;
 long double VAR_2 ;
 double FUNC_5 (long double) ;
 long double VAR_3 ;
 long double VAR_4 ;

long double
FUNC_6(long double VAR_5)
{
 long double VAR_6;
 uint16_t VAR_7, VAR_8;

 FUNC_0();
 FUNC_1(VAR_7, VAR_5);
 VAR_8 = VAR_7 & 0x7fff;
 if (VAR_8 >= 0x3fff)
     FUNC_2(FUNC_4(VAR_5) == 1 ? VAR_5 / VAR_4 : (VAR_5 - VAR_5) / (VAR_5 - VAR_5));
 if (VAR_8 < VAR_0 + VAR_1 && (VAR_2 + VAR_5) > VAR_4)
     FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_8);
 if (VAR_8 < 0x3ffe) {
     VAR_6 = VAR_5+VAR_5;
     VAR_6 = 0.5*FUNC_5(VAR_6+VAR_6*VAR_5/(VAR_3-VAR_5));
 } else
     VAR_6 = 0.5*FUNC_5((VAR_5+VAR_5)/(VAR_3-VAR_5));
 FUNC_2((VAR_7 & 0x8000) == 0 ? VAR_6 : -VAR_6);
}
