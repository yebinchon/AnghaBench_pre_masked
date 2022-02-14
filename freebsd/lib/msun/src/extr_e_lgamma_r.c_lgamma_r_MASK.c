
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 double FUNC_1 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 double FUNC_2 (double) ;
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
 double FUNC_3 (double) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 double VAR_32 ;
 double VAR_33 ;
 double VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 double VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 double VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 double VAR_56 ;
 double VAR_57 ;
 double VAR_58 ;
 double VAR_59 ;
 double VAR_60 ;
 double VAR_61 ;
 double VAR_62 ;
 double VAR_63 ;
 double VAR_64 ;
 double VAR_65 ;

double
FUNC_4(double VAR_66, int *VAR_67)
{
 double VAR_68,VAR_69,VAR_70,VAR_71,VAR_72,VAR_73,VAR_74,VAR_75,VAR_76,VAR_77,VAR_78;
 int32_t VAR_79;
 int VAR_80,VAR_81,VAR_82;

 FUNC_0(VAR_79,VAR_82,VAR_66);


 *VAR_67 = 1;
 VAR_81 = VAR_79&0x7fffffff;
 if(VAR_81>=0x7ff00000) return VAR_66*VAR_66;


 *VAR_67 = 1-2*((uint32_t)VAR_79>>31);
 if(VAR_81<0x3c700000) {
     if((VAR_81|VAR_82)==0)
         return VAR_13/VAR_57;
     return -FUNC_1(FUNC_2(VAR_66));
 }


 if(VAR_79<0) {
     *VAR_67 = 1;
     if(VAR_81>=0x43300000)
  return VAR_13/VAR_57;
     VAR_75 = FUNC_3(VAR_66);
     if(VAR_75==VAR_65) return VAR_13/VAR_57;
     VAR_68 = FUNC_1(VAR_14/FUNC_2(VAR_75*VAR_66));
     if(VAR_75<VAR_65) *VAR_67 = -1;
     VAR_66 = -VAR_66;
 }


 if((((VAR_81-0x3ff00000)|VAR_82)==0)||(((VAR_81-0x40000000)|VAR_82)==0)) VAR_74 = 0;

 else if(VAR_81<0x40000000) {
     if(VAR_81<=0x3feccccc) {
  VAR_74 = -FUNC_1(VAR_66);
  if(VAR_81>=0x3FE76944) {VAR_77 = VAR_13-VAR_66; VAR_80= 0;}
  else if(VAR_81>=0x3FCDA661) {VAR_77= VAR_66-(VAR_43-VAR_13); VAR_80=1;}
    else {VAR_77 = VAR_66; VAR_80=2;}
     } else {
    VAR_74 = VAR_65;
         if(VAR_81>=0x3FFBB4C3) {VAR_77=2.0-VAR_66;VAR_80=0;}
         else if(VAR_81>=0x3FF3B4C4) {VAR_77=VAR_66-VAR_43;VAR_80=1;}
  else {VAR_77=VAR_66-VAR_13;VAR_80=2;}
     }
     switch(VAR_80) {
       case 0:
  VAR_78 = VAR_77*VAR_77;
  VAR_70 = VAR_0+VAR_78*(VAR_4+VAR_78*(VAR_6+VAR_78*(VAR_8+VAR_78*(VAR_10+VAR_78*VAR_2))));
  VAR_71 = VAR_78*(VAR_1+VAR_78*(VAR_5+VAR_78*(VAR_7+VAR_78*(VAR_9+VAR_78*(VAR_11+VAR_78*VAR_3)))));
  VAR_69 = VAR_77*VAR_70+VAR_71;
  VAR_74 += VAR_69-VAR_77/2; break;
       case 1:
  VAR_78 = VAR_77*VAR_77;
  VAR_76 = VAR_78*VAR_77;
  VAR_70 = VAR_28+VAR_76*(VAR_36+VAR_76*(VAR_39+VAR_76*(VAR_42 +VAR_76*VAR_32)));
  VAR_71 = VAR_29+VAR_76*(VAR_37+VAR_76*(VAR_40+VAR_76*(VAR_30+VAR_76*VAR_33)));
  VAR_72 = VAR_35+VAR_76*(VAR_38+VAR_76*(VAR_41+VAR_76*(VAR_31+VAR_76*VAR_34)));
  VAR_69 = VAR_78*VAR_70-(VAR_45-VAR_76*(VAR_71+VAR_77*VAR_72));
  VAR_74 += VAR_44 + VAR_69; break;
       case 2:
  VAR_70 = VAR_77*(VAR_46+VAR_77*(VAR_47+VAR_77*(VAR_48+VAR_77*(VAR_49+VAR_77*(VAR_50+VAR_77*VAR_51)))));
  VAR_71 = VAR_13+VAR_77*(VAR_52+VAR_77*(VAR_53+VAR_77*(VAR_54+VAR_77*(VAR_55+VAR_77*VAR_56))));
  VAR_74 += VAR_70/VAR_71-VAR_77/2;
     }
 }

 else if(VAR_81<0x40200000) {
     VAR_80 = VAR_66;
     VAR_77 = VAR_66-VAR_80;
     VAR_69 = VAR_77*(VAR_21+VAR_77*(VAR_22+VAR_77*(VAR_23+VAR_77*(VAR_24+VAR_77*(VAR_25+VAR_77*(VAR_26+VAR_77*VAR_27))))));
     VAR_73 = VAR_13+VAR_77*(VAR_15+VAR_77*(VAR_16+VAR_77*(VAR_17+VAR_77*(VAR_18+VAR_77*(VAR_19+VAR_77*VAR_20)))));
     VAR_74 = VAR_77/2+VAR_69/VAR_73;
     VAR_78 = VAR_13;
     switch(VAR_80) {
     case 7: VAR_78 *= (VAR_77+6);
     case 6: VAR_78 *= (VAR_77+5);
     case 5: VAR_78 *= (VAR_77+4);
     case 4: VAR_78 *= (VAR_77+3);
     case 3: VAR_78 *= (VAR_77+2);
      VAR_74 += FUNC_1(VAR_78); break;
     }

 } else if (VAR_81 < 0x43700000) {
     VAR_75 = FUNC_1(VAR_66);
     VAR_78 = VAR_13/VAR_66;
     VAR_77 = VAR_78*VAR_78;
     VAR_76 = VAR_58+VAR_78*(VAR_59+VAR_77*(VAR_60+VAR_77*(VAR_61+VAR_77*(VAR_62+VAR_77*(VAR_63+VAR_77*VAR_64)))));
     VAR_74 = (VAR_66-VAR_12)*(VAR_75-VAR_13)+VAR_76;
 } else

     VAR_74 = VAR_66*(FUNC_1(VAR_66)-VAR_13);
 if(VAR_79<0) VAR_74 = VAR_68 - VAR_74;
 return VAR_74;
}
