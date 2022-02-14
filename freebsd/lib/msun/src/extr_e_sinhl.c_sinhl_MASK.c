
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,long double) ;
 int VAR_1 ;
 int FUNC_2 (double) ;
 long double VAR_2 ;
 long double VAR_3 ;
 long double VAR_4 ;
 long double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 long double VAR_10 ;
 long double VAR_11 ;
 long double VAR_12 ;
 long double VAR_13 ;
 scalar_t__ FUNC_3 (long double) ;
 double FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,long double*,long double*) ;
 scalar_t__ VAR_14 ;
 long double VAR_15 ;

long double
FUNC_6(long double VAR_16)
{
 long double VAR_17,VAR_18,VAR_19,VAR_20;



 double VAR_21;
 int16_t VAR_22,VAR_23;

 FUNC_1(VAR_23,VAR_16);
 VAR_22 = VAR_23&0x7fff;


 if(VAR_22>=0x7fff) return VAR_16+VAR_16;

 FUNC_0();

 VAR_21 = 1;
 if (VAR_23<0) VAR_21 = -1;


 if (VAR_22<0x4005) {
     if (VAR_22<VAR_0-(VAR_1+1)/2)
  if(VAR_15+VAR_16>1) FUNC_2(VAR_16);
     if (VAR_22<0x3fff) {
  VAR_19 = VAR_16*VAR_16;
     }
     FUNC_5(FUNC_3(VAR_16), &VAR_17, &VAR_18);
     FUNC_2(VAR_21*(VAR_18 - 0.25/(VAR_17 + VAR_18) + VAR_17));
 }


 if (FUNC_3(VAR_16) <= VAR_14)
     FUNC_2(VAR_21*FUNC_4(FUNC_3(VAR_16)));


 return VAR_16*VAR_15;
}
