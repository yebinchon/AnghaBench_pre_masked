
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (double,int ) ;
 double FUNC_2 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_3 (double) ;
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
 double VAR_14 ;
 double VAR_15 ;
 double VAR_16 ;
 double VAR_17 ;
 double VAR_18 ;
 double VAR_19 ;
 double VAR_20 ;
 double VAR_21 ;
 double VAR_22 ;
 double VAR_23 ;
 double VAR_24 ;
 double VAR_25 ;
 double VAR_26 ;
 double VAR_27 ;
 double VAR_28 ;
 double VAR_29 ;
 double VAR_30 ;
 double VAR_31 ;
 double VAR_32 ;
 double VAR_33 ;
 double VAR_34 ;
 double VAR_35 ;
 double VAR_36 ;
 double VAR_37 ;
 double VAR_38 ;
 double VAR_39 ;
 double VAR_40 ;
 double VAR_41 ;
 double VAR_42 ;
 double VAR_43 ;
 double VAR_44 ;
 double VAR_45 ;
 double VAR_46 ;
 double VAR_47 ;
 double VAR_48 ;
 double VAR_49 ;
 double VAR_50 ;
 double VAR_51 ;
 double VAR_52 ;
 double VAR_53 ;
 double VAR_54 ;
 double VAR_55 ;
 double VAR_56 ;
 double VAR_57 ;

double
FUNC_4(double VAR_58)
{
 int32_t VAR_59,VAR_60,VAR_61;
 double VAR_62,VAR_63,VAR_64,VAR_65,VAR_66,VAR_67,VAR_68,VAR_69;
 FUNC_0(VAR_59,VAR_58);
 VAR_60 = VAR_59&0x7fffffff;
 if(VAR_60>=0x7ff00000) {
     VAR_61 = ((u_int32_t)VAR_59>>31)<<1;
     return (double)(1-VAR_61)+VAR_3/VAR_58;
 }

 if(VAR_60 < 0x3feb0000) {
     if(VAR_60 < 0x3e300000) {
         if (VAR_60 < 0x00800000)
      return (8*VAR_58+VAR_1*VAR_58)/8;
  return VAR_58 + VAR_0*VAR_58;
     }
     VAR_68 = VAR_58*VAR_58;
     VAR_69 = VAR_11+VAR_68*(VAR_12+VAR_68*(VAR_13+VAR_68*(VAR_14+VAR_68*VAR_15)));
     VAR_66 = VAR_3+VAR_68*(VAR_22+VAR_68*(VAR_23+VAR_68*(VAR_24+VAR_68*(VAR_25+VAR_68*VAR_26))));
     VAR_67 = VAR_69/VAR_66;
     return VAR_58 + VAR_58*VAR_67;
 }
 if(VAR_60 < 0x3ff40000) {
     VAR_66 = FUNC_3(VAR_58)-VAR_3;
     VAR_64 = VAR_4+VAR_66*(VAR_5+VAR_66*(VAR_6+VAR_66*(VAR_7+VAR_66*(VAR_8+VAR_66*(VAR_9+VAR_66*VAR_10)))));
     VAR_65 = VAR_3+VAR_66*(VAR_16+VAR_66*(VAR_17+VAR_66*(VAR_18+VAR_66*(VAR_19+VAR_66*(VAR_20+VAR_66*VAR_21)))));
     if(VAR_59>=0) return VAR_2 + VAR_64/VAR_65; else return -VAR_2 - VAR_64/VAR_65;
 }
 if (VAR_60 >= 0x40180000) {
     if(VAR_59>=0) return VAR_3-VAR_57; else return VAR_57-VAR_3;
 }
 VAR_58 = FUNC_3(VAR_58);
  VAR_66 = VAR_3/(VAR_58*VAR_58);
 if(VAR_60< 0x4006DB6E) {
     VAR_62=VAR_27+VAR_66*(VAR_28+VAR_66*(VAR_29+VAR_66*(VAR_30+VAR_66*(VAR_31+VAR_66*(VAR_32+VAR_66*(VAR_33+VAR_66*VAR_34))))));
     VAR_63=VAR_3+VAR_66*(VAR_42+VAR_66*(VAR_43+VAR_66*(VAR_44+VAR_66*(VAR_45+VAR_66*(VAR_46+VAR_66*(VAR_47+VAR_66*(VAR_48+
  VAR_66*VAR_49)))))));
 } else {
     VAR_62=VAR_35+VAR_66*(VAR_36+VAR_66*(VAR_37+VAR_66*(VAR_38+VAR_66*(VAR_39+VAR_66*(VAR_40+VAR_66*VAR_41)))));
     VAR_63=VAR_3+VAR_66*(VAR_50+VAR_66*(VAR_51+VAR_66*(VAR_52+VAR_66*(VAR_53+VAR_66*(VAR_54+VAR_66*(VAR_55+VAR_66*VAR_56))))));
 }
 VAR_68 = VAR_58;
 FUNC_1(VAR_68,0);
 VAR_69 = FUNC_2(-VAR_68*VAR_68-0.5625)*FUNC_2((VAR_68-VAR_58)*(VAR_68+VAR_58)+VAR_62/VAR_63);
 if(VAR_59>=0) return VAR_3-VAR_69/VAR_58; else return VAR_69/VAR_58-VAR_3;
}
