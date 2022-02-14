
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,int,long double) ;
 int FUNC_2 (long double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long double VAR_4 ;
 long double VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 long double FUNC_3 (long double) ;
 long double VAR_14 ;
 int FUNC_4 (long double) ;
 long double VAR_15 ;
 long double VAR_16 ;
 long double VAR_17 ;
 long double VAR_18 ;
 long double VAR_19 ;
 long double VAR_20 ;
 long double VAR_21 ;
 long double VAR_22 ;
 long double VAR_23 ;
 long double VAR_24 ;
 long double VAR_25 ;
 long double VAR_26 ;
 long double VAR_27 ;
 long double VAR_28 ;
 long double VAR_29 ;
 long double VAR_30 ;
 long double FUNC_5 (long double) ;
 int VAR_31 ;
 long double VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 long double VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 scalar_t__ VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 long double VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 long double VAR_65 ;
 long double VAR_66 ;
 long double VAR_67 ;
 long double VAR_68 ;
 long double VAR_69 ;
 long double VAR_70 ;
 long double VAR_71 ;
 long double VAR_72 ;
 long double VAR_73 ;
 long double VAR_74 ;
 long double VAR_75 ;
 long double VAR_76 ;

long double
FUNC_6(long double VAR_77, int *VAR_78)
{
 long double VAR_79,VAR_80,VAR_81,VAR_82,VAR_83,VAR_84,VAR_85,VAR_86,VAR_87,VAR_88;
 uint64_t VAR_89;
 int VAR_90;
 uint16_t VAR_91,VAR_92;

 FUNC_1(VAR_91,VAR_89,VAR_77);


 *VAR_78 = 1;
 VAR_92 = VAR_91&0x7fff;
 if(VAR_92==0x7fff) return VAR_77*VAR_77;

 FUNC_0();


 *VAR_78 = 1-2*(VAR_91>>15);
 if(VAR_92<0x3fff-67) {
     if((VAR_92|VAR_89)==0)
  FUNC_2(VAR_15/VAR_66);
     FUNC_2(-FUNC_4(FUNC_3(VAR_77)));
 }


 if(VAR_91&0x8000) {
     *VAR_78 = 1;
     if(VAR_92>=0x3fff+63)
  FUNC_2(VAR_15/VAR_66);
     VAR_85 = FUNC_5(VAR_77);
     if(VAR_85==VAR_76) FUNC_2(VAR_15/VAR_66);
     VAR_79 = FUNC_4(VAR_16/FUNC_3(VAR_85*VAR_77));
     if(VAR_85<VAR_76) *VAR_78 = -1;
     VAR_77 = -VAR_77;
 }


 if((VAR_92==0x3fff || VAR_92==0x4000) && VAR_89==0x8000000000000000ULL) VAR_84 = 0;

 else if(VAR_92<0x4000) {
     if(VAR_77<8.9999961853027344e-01) {
  VAR_84 = -FUNC_4(VAR_77);
  if(VAR_77>=7.3159980773925781e-01) {VAR_87 = 1-VAR_77; VAR_90= 0;}
  else if(VAR_77>=2.3163998126983643e-01) {VAR_87= VAR_77-(VAR_50-1); VAR_90=1;}
  else {VAR_87 = VAR_77; VAR_90=2;}
     } else {
  VAR_84 = 0;
  if(VAR_77>=1.7316312789916992e+00) {VAR_87=2-VAR_77;VAR_90=0;}
  else if(VAR_77>=1.2316322326660156e+00) {VAR_87=VAR_77-VAR_50;VAR_90=1;}
  else {VAR_87=VAR_77-1;VAR_90=2;}
     }
     switch(VAR_90) {
       case 0:
  VAR_88 = VAR_87*VAR_87;
  VAR_81 = VAR_0+VAR_88*(VAR_6+VAR_88*(VAR_8+VAR_88*(VAR_10+VAR_88*(VAR_12+VAR_88*(VAR_2+VAR_88*VAR_4)))));
  VAR_82 = VAR_88*(VAR_1+VAR_88*(VAR_7+VAR_88*(VAR_9+VAR_88*(VAR_11+VAR_88*(VAR_13+VAR_88*(VAR_3+VAR_88*VAR_5))))));
  VAR_80 = VAR_87*VAR_81+VAR_82;
  VAR_84 += VAR_80-VAR_87/2; break;
       case 1:
  VAR_80 = VAR_31+VAR_87*VAR_32+VAR_52+VAR_87*VAR_87*(VAR_42+VAR_87*(VAR_43+VAR_87*(VAR_44+VAR_87*(VAR_45+VAR_87*(VAR_46+VAR_87*(VAR_47+VAR_87*(VAR_48+
      VAR_87*(VAR_49+VAR_87*(VAR_33+VAR_87*(VAR_34+VAR_87*(VAR_35+VAR_87*(VAR_36+VAR_87*(VAR_37+VAR_87*(VAR_38+VAR_87*(VAR_39+
      VAR_87*(VAR_40+VAR_87*VAR_41))))))))))))))));
  VAR_84 += VAR_51 + VAR_80; break;
       case 2:
  VAR_81 = VAR_87*(VAR_53+VAR_87*(VAR_54+VAR_87*(VAR_55+VAR_87*(VAR_56+VAR_87*(VAR_57+VAR_87*(VAR_58+VAR_87*VAR_59))))));
  VAR_82 = 1+VAR_87*(VAR_60+VAR_87*(VAR_61+VAR_87*(VAR_62+VAR_87*(VAR_63+VAR_87*(VAR_64+VAR_87*VAR_65)))));
  VAR_84 += VAR_81/VAR_82-VAR_87/2;
     }
 }

 else if(VAR_92<0x4002) {
     VAR_90 = VAR_77;
     VAR_87 = VAR_77-VAR_90;
     VAR_80 = VAR_87*(VAR_24+VAR_87*(VAR_25+VAR_87*(VAR_26+VAR_87*(VAR_27+VAR_87*(VAR_28+VAR_87*(VAR_29+VAR_87*VAR_30))))));
     VAR_83 = 1+VAR_87*(VAR_17+VAR_87*(VAR_18+VAR_87*(VAR_19+VAR_87*(VAR_20+VAR_87*(VAR_21+VAR_87*(VAR_22+VAR_87*VAR_23))))));
     VAR_84 = VAR_87/2+VAR_80/VAR_83;
     VAR_88 = 1;
     switch(VAR_90) {
     case 7: VAR_88 *= (VAR_87+6);
     case 6: VAR_88 *= (VAR_87+5);
     case 5: VAR_88 *= (VAR_87+4);
     case 4: VAR_88 *= (VAR_87+3);
     case 3: VAR_88 *= (VAR_87+2);
      VAR_84 += FUNC_4(VAR_88); break;
     }

 } else if (VAR_92<0x3fff+67) {
     VAR_85 = FUNC_4(VAR_77);
     VAR_88 = VAR_15/VAR_77;
     VAR_87 = VAR_88*VAR_88;
     VAR_86 = VAR_67+VAR_88*(VAR_68+VAR_87*(VAR_69+VAR_87*(VAR_70+VAR_87*(VAR_71+VAR_87*(VAR_72+VAR_87*(VAR_73+VAR_87*(VAR_74+VAR_87*VAR_75)))))));
     VAR_84 = (VAR_77-VAR_14)*(VAR_85-VAR_15)+VAR_86;

 } else
     VAR_84 = VAR_77*(FUNC_4(VAR_77)-1);
 if(VAR_91&0x8000) VAR_84 = VAR_79 - VAR_84;
 FUNC_2(VAR_84);
}
