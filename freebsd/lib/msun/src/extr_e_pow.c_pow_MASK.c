
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
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
 int FUNC_2 (double,int) ;
 int FUNC_3 (double,int ) ;
 double* VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;
 double VAR_14 ;
 double* VAR_15 ;
 double* VAR_16 ;
 double FUNC_4 (double) ;
 double VAR_17 ;
 double VAR_18 ;
 double VAR_19 ;
 double VAR_20 ;
 double VAR_21 ;
 double VAR_22 ;
 double VAR_23 ;
 double VAR_24 ;
 double FUNC_5 (double,double) ;
 double VAR_25 ;
 double VAR_26 ;
 double VAR_27 ;
 double FUNC_6 (double,int) ;
 double FUNC_7 (double) ;
 double VAR_28 ;
 double VAR_29 ;
 double VAR_30 ;
 double VAR_31 ;
 double VAR_32 ;

double
FUNC_8(double VAR_33, double VAR_34)
{
 double VAR_35,VAR_36,VAR_37,VAR_38,VAR_39,VAR_40;
 double VAR_41,VAR_42,VAR_43,VAR_44,VAR_45,VAR_46,VAR_47,VAR_48,VAR_49;
 int32_t VAR_50,VAR_51,VAR_52,VAR_53,VAR_54;
 int32_t VAR_55,VAR_56,VAR_57,VAR_58;
 u_int32_t VAR_59,VAR_60;

 FUNC_0(VAR_55,VAR_59,VAR_33);
 FUNC_0(VAR_56,VAR_60,VAR_34);
 VAR_57 = VAR_55&0x7fffffff; VAR_58 = VAR_56&0x7fffffff;


 if((VAR_58|VAR_60)==0) return VAR_25;


 if (VAR_55==0x3ff00000 && VAR_59 == 0) return VAR_25;


 if(VAR_57 > 0x7ff00000 || ((VAR_57==0x7ff00000)&&(VAR_59!=0)) ||
    VAR_58 > 0x7ff00000 || ((VAR_58==0x7ff00000)&&(VAR_60!=0)))
     return FUNC_5(VAR_33, VAR_34);






 VAR_53 = 0;
 if(VAR_55<0) {
     if(VAR_58>=0x43400000) VAR_53 = 2;
     else if(VAR_58>=0x3ff00000) {
  VAR_52 = (VAR_58>>20)-0x3ff;
  if(VAR_52>20) {
      VAR_51 = VAR_60>>(52-VAR_52);
      if(((u_int32_t)VAR_51<<(52-VAR_52))==VAR_60) VAR_53 = 2-(VAR_51&1);
  } else if(VAR_60==0) {
      VAR_51 = VAR_58>>(20-VAR_52);
      if((VAR_51<<(20-VAR_52))==VAR_58) VAR_53 = 2-(VAR_51&1);
  }
     }
 }


 if(VAR_60==0) {
     if (VAR_58==0x7ff00000) {
         if(((VAR_57-0x3ff00000)|VAR_59)==0)
      return VAR_25;
         else if (VAR_57 >= 0x3ff00000)
      return (VAR_56>=0)? VAR_34: VAR_32;
         else
      return (VAR_56<0)?-VAR_34: VAR_32;
     }
     if(VAR_58==0x3ff00000) {
  if(VAR_56<0) return VAR_25/VAR_33; else return VAR_33;
     }
     if(VAR_56==0x40000000) return VAR_33*VAR_33;
     if(VAR_56==0x3fe00000) {
  if(VAR_55>=0)
  return FUNC_7(VAR_33);
     }
 }

 VAR_36 = FUNC_4(VAR_33);

 if(VAR_59==0) {
     if(VAR_57==0x7ff00000||VAR_57==0||VAR_57==0x3ff00000){
  VAR_35 = VAR_36;
  if(VAR_56<0) VAR_35 = VAR_25/VAR_35;
  if(VAR_55<0) {
      if(((VAR_57-0x3ff00000)|VAR_53)==0) {
   VAR_35 = (VAR_35-VAR_35)/(VAR_35-VAR_35);
      } else if(VAR_53==1)
   VAR_35 = -VAR_35;
  }
  return VAR_35;
     }
 }





 VAR_54 = ((u_int32_t)VAR_55>>31)-1;


 if((VAR_54|VAR_53)==0) return (VAR_33-VAR_33)/(VAR_33-VAR_33);

 VAR_45 = VAR_25;
 if((VAR_54|(VAR_53-1))==0) VAR_45 = -VAR_25;


 if(VAR_58>0x41e00000) {
     if(VAR_58>0x43f00000){
  if(VAR_57<=0x3fefffff) return (VAR_56<0)? VAR_18*VAR_18:VAR_29*VAR_29;
  if(VAR_57>=0x3ff00000) return (VAR_56>0)? VAR_18*VAR_18:VAR_29*VAR_29;
     }

     if(VAR_57<0x3fefffff) return (VAR_56<0)? VAR_45*VAR_18*VAR_18:VAR_45*VAR_29*VAR_29;
     if(VAR_57>0x3ff00000) return (VAR_56>0)? VAR_45*VAR_18*VAR_18:VAR_45*VAR_29*VAR_29;


     VAR_46 = VAR_36-VAR_25;
     VAR_49 = (VAR_46*VAR_46)*(VAR_17-VAR_46*(VAR_28-VAR_46*VAR_27));
     VAR_47 = VAR_20*VAR_46;
     VAR_48 = VAR_46*VAR_21-VAR_49*VAR_19;
     VAR_42 = VAR_47+VAR_48;
     FUNC_3(VAR_42,0);
     VAR_43 = VAR_48-(VAR_42-VAR_47);
 } else {
     double VAR_61,VAR_62,VAR_63,VAR_64,VAR_65,VAR_66;
     VAR_54 = 0;

     if(VAR_57<0x00100000)
  {VAR_36 *= VAR_31; VAR_54 -= 53; FUNC_1(VAR_57,VAR_36); }
     VAR_54 += ((VAR_57)>>20)-0x3ff;
     VAR_51 = VAR_57&0x000fffff;

     VAR_57 = VAR_51|0x3ff00000;
     if(VAR_51<=0x3988E) VAR_52=0;
     else if(VAR_51<0xBB67A) VAR_52=1;
     else {VAR_52=0;VAR_54+=1;VAR_57 -= 0x00100000;}
     FUNC_2(VAR_36,VAR_57);


     VAR_47 = VAR_36-VAR_11[VAR_52];
     VAR_48 = VAR_25/(VAR_36+VAR_11[VAR_52]);
     VAR_61 = VAR_47*VAR_48;
     VAR_63 = VAR_61;
     FUNC_3(VAR_63,0);

     VAR_65 = VAR_32;
     FUNC_2(VAR_65,((VAR_57>>1)|0x20000000)+0x00080000+(VAR_52<<18));
     VAR_66 = VAR_36 - (VAR_65-VAR_11[VAR_52]);
     VAR_64 = VAR_48*((VAR_47-VAR_63*VAR_65)-VAR_63*VAR_66);

     VAR_62 = VAR_61*VAR_61;
     VAR_44 = VAR_62*VAR_62*(VAR_0+VAR_62*(VAR_1+VAR_62*(VAR_2+VAR_62*(VAR_3+VAR_62*(VAR_4+VAR_62*VAR_5)))));
     VAR_44 += VAR_64*(VAR_63+VAR_61);
     VAR_62 = VAR_63*VAR_63;
     VAR_65 = 3+VAR_62+VAR_44;
     FUNC_3(VAR_65,0);
     VAR_66 = VAR_44-((VAR_65-3)-VAR_62);

     VAR_47 = VAR_63*VAR_65;
     VAR_48 = VAR_64*VAR_65+VAR_66*VAR_61;

     VAR_39 = VAR_47+VAR_48;
     FUNC_3(VAR_39,0);
     VAR_40 = VAR_48-(VAR_39-VAR_47);
     VAR_37 = VAR_13*VAR_39;
     VAR_38 = VAR_14*VAR_39+VAR_40*VAR_12+VAR_16[VAR_52];

     VAR_46 = VAR_54;
     VAR_42 = (((VAR_37+VAR_38)+VAR_15[VAR_52])+VAR_46);
     FUNC_3(VAR_42,0);
     VAR_43 = VAR_38-(((VAR_42-VAR_46)-VAR_15[VAR_52])-VAR_37);
 }


 VAR_41 = VAR_34;
 FUNC_3(VAR_41,0);
 VAR_40 = (VAR_34-VAR_41)*VAR_42+VAR_34*VAR_43;
 VAR_39 = VAR_41*VAR_42;
 VAR_35 = VAR_40+VAR_39;
 FUNC_0(VAR_51,VAR_50,VAR_35);
 if (VAR_51>=0x40900000) {
     if(((VAR_51-0x40900000)|VAR_50)!=0)
  return VAR_45*VAR_18*VAR_18;
     else {
  if(VAR_40+VAR_26>VAR_35-VAR_39) return VAR_45*VAR_18*VAR_18;
     }
 } else if((VAR_51&0x7fffffff)>=0x4090cc00 ) {
     if(((VAR_51-0xc090cc00)|VAR_50)!=0)
  return VAR_45*VAR_29*VAR_29;
     else {
  if(VAR_40<=VAR_35-VAR_39) return VAR_45*VAR_29*VAR_29;
     }
 }



 VAR_50 = VAR_51&0x7fffffff;
 VAR_52 = (VAR_50>>20)-0x3ff;
 VAR_54 = 0;
 if(VAR_50>0x3fe00000) {
     VAR_54 = VAR_51+(0x00100000>>(VAR_52+1));
     VAR_52 = ((VAR_54&0x7fffffff)>>20)-0x3ff;
     VAR_46 = VAR_32;
     FUNC_2(VAR_46,VAR_54&~(0x000fffff>>VAR_52));
     VAR_54 = ((VAR_54&0x000fffff)|0x00100000)>>(20-VAR_52);
     if(VAR_51<0) VAR_54 = -VAR_54;
     VAR_39 -= VAR_46;
 }
 VAR_46 = VAR_40+VAR_39;
 FUNC_3(VAR_46,0);
 VAR_47 = VAR_46*VAR_23;
 VAR_48 = (VAR_40-(VAR_46-VAR_39))*VAR_22+VAR_46*VAR_24;
 VAR_35 = VAR_47+VAR_48;
 VAR_49 = VAR_48-(VAR_35-VAR_47);
 VAR_46 = VAR_35*VAR_35;
 VAR_42 = VAR_35 - VAR_46*(VAR_6+VAR_46*(VAR_7+VAR_46*(VAR_8+VAR_46*(VAR_9+VAR_46*VAR_10))));
 VAR_44 = (VAR_35*VAR_42)/(VAR_42-VAR_30)-(VAR_49+VAR_35*VAR_49);
 VAR_35 = VAR_25-(VAR_44-VAR_35);
 FUNC_1(VAR_51,VAR_35);
 VAR_51 += (VAR_54<<20);
 if((VAR_51>>20)<=0) VAR_35 = FUNC_6(VAR_35,VAR_54);
 else FUNC_2(VAR_35,VAR_51);
 return VAR_45*VAR_35;
}
