
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;
 long double VAR_3 ;
 long double VAR_4 ;
 double VAR_5 ;
 long double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 long double VAR_11 ;
 long double VAR_12 ;
 long double VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (int,long double) ;
 int VAR_14 ;
 int FUNC_2 (long double) ;
 scalar_t__ FUNC_3 (long double) ;
 long double FUNC_4 (scalar_t__) ;
 long double VAR_15 ;
 int FUNC_5 (scalar_t__,long double*,long double*) ;
 scalar_t__ VAR_16 ;
 long double VAR_17 ;

long double
FUNC_6(long double VAR_18)
{
 long double VAR_19,VAR_20,VAR_21,VAR_22;



 uint16_t VAR_23;

 FUNC_1(VAR_23,VAR_18);
 VAR_23 &= 0x7fff;


 if(VAR_23>=0x7fff) return VAR_18*VAR_18;

 FUNC_0();


 if(VAR_23<0x3fff) {
     if (VAR_23<VAR_0-(VAR_14+1)/2)
  FUNC_2(1+VAR_17);
     VAR_21 = VAR_18*VAR_18;
 }


 if (VAR_23 < 0x4005) {
     FUNC_5(FUNC_3(VAR_18), &VAR_19, &VAR_20);
     FUNC_2(VAR_20 + 0.25/(VAR_19 + VAR_20) + VAR_19);
 }


 if (FUNC_3(VAR_18) <= VAR_16)
     FUNC_2(FUNC_4(FUNC_3(VAR_18)));


 FUNC_2(VAR_15*VAR_15);
}
