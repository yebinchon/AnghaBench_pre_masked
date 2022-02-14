
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (int,double) ;
 int FUNC_2 (double,int ) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;
 double FUNC_3 (double) ;

double
FUNC_4(double VAR_14)
{
 double VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22;
 int32_t VAR_23,VAR_24;
 FUNC_0(VAR_23,VAR_14);
 VAR_24 = VAR_23&0x7fffffff;
 if(VAR_24>=0x3ff00000) {
     u_int32_t VAR_25;
     FUNC_1(VAR_25,VAR_14);
     if(((VAR_24-0x3ff00000)|VAR_25)==0) {
  if(VAR_23>0) return 0.0;
  else return VAR_7+2.0*VAR_9;
     }
     return (VAR_14-VAR_14)/(VAR_14-VAR_14);
 }
 if(VAR_24<0x3fe00000) {
     if(VAR_24<=0x3c600000) return VAR_8+VAR_9;
     VAR_15 = VAR_14*VAR_14;
     VAR_16 = VAR_15*(VAR_1+VAR_15*(VAR_2+VAR_15*(VAR_3+VAR_15*(VAR_4+VAR_15*(VAR_5+VAR_15*VAR_6)))));
     VAR_17 = VAR_0+VAR_15*(VAR_10+VAR_15*(VAR_11+VAR_15*(VAR_12+VAR_15*VAR_13)));
     VAR_18 = VAR_16/VAR_17;
     return VAR_8 - (VAR_14 - (VAR_9-VAR_14*VAR_18));
 } else if (VAR_23<0) {
     VAR_15 = (VAR_0+VAR_14)*0.5;
     VAR_16 = VAR_15*(VAR_1+VAR_15*(VAR_2+VAR_15*(VAR_3+VAR_15*(VAR_4+VAR_15*(VAR_5+VAR_15*VAR_6)))));
     VAR_17 = VAR_0+VAR_15*(VAR_10+VAR_15*(VAR_11+VAR_15*(VAR_12+VAR_15*VAR_13)));
     VAR_20 = FUNC_3(VAR_15);
     VAR_18 = VAR_16/VAR_17;
     VAR_19 = VAR_18*VAR_20-VAR_9;
     return VAR_7 - 2.0*(VAR_20+VAR_19);
 } else {
     VAR_15 = (VAR_0-VAR_14)*0.5;
     VAR_20 = FUNC_3(VAR_15);
     VAR_22 = VAR_20;
     FUNC_2(VAR_22,0);
     VAR_21 = (VAR_15-VAR_22*VAR_22)/(VAR_20+VAR_22);
     VAR_16 = VAR_15*(VAR_1+VAR_15*(VAR_2+VAR_15*(VAR_3+VAR_15*(VAR_4+VAR_15*(VAR_5+VAR_15*VAR_6)))));
     VAR_17 = VAR_0+VAR_15*(VAR_10+VAR_15*(VAR_11+VAR_15*(VAR_12+VAR_15*VAR_13)));
     VAR_18 = VAR_16/VAR_17;
     VAR_19 = VAR_18*VAR_20+VAR_21;
     return 2.0*(VAR_22+VAR_19);
 }
}
