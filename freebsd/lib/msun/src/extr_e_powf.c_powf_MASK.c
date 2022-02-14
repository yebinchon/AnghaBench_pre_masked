
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 int FUNC_1 (float,int) ;
 float FUNC_2 (float) ;
 float* VAR_11 ;
 float VAR_12 ;
 float VAR_13 ;
 float VAR_14 ;
 float* VAR_15 ;
 float* VAR_16 ;
 float FUNC_3 (float) ;
 float VAR_17 ;
 float VAR_18 ;
 float VAR_19 ;
 float VAR_20 ;
 float VAR_21 ;
 float VAR_22 ;
 float VAR_23 ;
 float VAR_24 ;
 float FUNC_4 (float,float) ;
 float VAR_25 ;
 float VAR_26 ;
 float VAR_27 ;
 float FUNC_5 (float,int) ;
 float VAR_28 ;
 float VAR_29 ;
 float VAR_30 ;
 float VAR_31 ;
 float VAR_32 ;

float
FUNC_6(float VAR_33, float VAR_34)
{
 float VAR_35,VAR_36,VAR_37,VAR_38,VAR_39,VAR_40;
 float VAR_41,VAR_42,VAR_43,VAR_44,VAR_45,VAR_46,VAR_47,VAR_48,VAR_49,VAR_50;
 int32_t VAR_51,VAR_52,VAR_53,VAR_54,VAR_55;
 int32_t VAR_56,VAR_57,VAR_58,VAR_59,VAR_60;

 FUNC_0(VAR_56,VAR_33);
 FUNC_0(VAR_57,VAR_34);
 VAR_58 = VAR_56&0x7fffffff; VAR_59 = VAR_57&0x7fffffff;


 if(VAR_59==0) return VAR_25;


 if (VAR_56==0x3f800000) return VAR_25;


 if(VAR_58 > 0x7f800000 ||
    VAR_59 > 0x7f800000)
     return FUNC_4(VAR_33, VAR_34);






 VAR_54 = 0;
 if(VAR_56<0) {
     if(VAR_59>=0x4b800000) VAR_54 = 2;
     else if(VAR_59>=0x3f800000) {
  VAR_53 = (VAR_59>>23)-0x7f;
  VAR_52 = VAR_59>>(23-VAR_53);
  if((VAR_52<<(23-VAR_53))==VAR_59) VAR_54 = 2-(VAR_52&1);
     }
 }


 if (VAR_59==0x7f800000) {
     if (VAR_58==0x3f800000)
         return VAR_25;
     else if (VAR_58 > 0x3f800000)
         return (VAR_57>=0)? VAR_34: VAR_32;
     else
         return (VAR_57<0)?-VAR_34: VAR_32;
 }
 if(VAR_59==0x3f800000) {
     if(VAR_57<0) return VAR_25/VAR_33; else return VAR_33;
 }
 if(VAR_57==0x40000000) return VAR_33*VAR_33;
 if(VAR_57==0x3f000000) {
     if(VAR_56>=0)
     return FUNC_2(VAR_33);
 }

 VAR_36 = FUNC_3(VAR_33);

 if(VAR_58==0x7f800000||VAR_58==0||VAR_58==0x3f800000){
     VAR_35 = VAR_36;
     if(VAR_57<0) VAR_35 = VAR_25/VAR_35;
     if(VAR_56<0) {
  if(((VAR_58-0x3f800000)|VAR_54)==0) {
      VAR_35 = (VAR_35-VAR_35)/(VAR_35-VAR_35);
  } else if(VAR_54==1)
      VAR_35 = -VAR_35;
     }
     return VAR_35;
 }

 VAR_55 = ((u_int32_t)VAR_56>>31)-1;


 if((VAR_55|VAR_54)==0) return (VAR_33-VAR_33)/(VAR_33-VAR_33);

 VAR_46 = VAR_25;
 if((VAR_55|(VAR_54-1))==0) VAR_46 = -VAR_25;


 if(VAR_59>0x4d000000) {

     if(VAR_58<0x3f7ffff8) return (VAR_57<0)? VAR_46*VAR_18*VAR_18:VAR_46*VAR_29*VAR_29;
     if(VAR_58>0x3f800007) return (VAR_57>0)? VAR_46*VAR_18*VAR_18:VAR_46*VAR_29*VAR_29;


     VAR_47 = VAR_36-1;
     VAR_50 = (VAR_47*VAR_47)*(VAR_17-VAR_47*(VAR_28-VAR_47*VAR_27));
     VAR_48 = VAR_20*VAR_47;
     VAR_49 = VAR_47*VAR_21-VAR_50*VAR_19;
     VAR_42 = VAR_48+VAR_49;
     FUNC_0(VAR_60,VAR_42);
     FUNC_1(VAR_42,VAR_60&0xfffff000);
     VAR_43 = VAR_49-(VAR_42-VAR_48);
 } else {
     float VAR_61,VAR_62,VAR_63,VAR_64,VAR_65;
     VAR_55 = 0;

     if(VAR_58<0x00800000)
  {VAR_36 *= VAR_31; VAR_55 -= 24; FUNC_0(VAR_58,VAR_36); }
     VAR_55 += ((VAR_58)>>23)-0x7f;
     VAR_52 = VAR_58&0x007fffff;

     VAR_58 = VAR_52|0x3f800000;
     if(VAR_52<=0x1cc471) VAR_53=0;
     else if(VAR_52<0x5db3d7) VAR_53=1;
     else {VAR_53=0;VAR_55+=1;VAR_58 -= 0x00800000;}
     FUNC_1(VAR_36,VAR_58);


     VAR_48 = VAR_36-VAR_11[VAR_53];
     VAR_49 = VAR_25/(VAR_36+VAR_11[VAR_53]);
     VAR_45 = VAR_48*VAR_49;
     VAR_62 = VAR_45;
     FUNC_0(VAR_60,VAR_62);
     FUNC_1(VAR_62,VAR_60&0xfffff000);

     VAR_60 = ((VAR_58>>1)&0xfffff000)|0x20000000;
     FUNC_1(VAR_64,VAR_60+0x00400000+(VAR_53<<21));
     VAR_65 = VAR_36 - (VAR_64-VAR_11[VAR_53]);
     VAR_63 = VAR_49*((VAR_48-VAR_62*VAR_64)-VAR_62*VAR_65);

     VAR_61 = VAR_45*VAR_45;
     VAR_44 = VAR_61*VAR_61*(VAR_0+VAR_61*(VAR_1+VAR_61*(VAR_2+VAR_61*(VAR_3+VAR_61*(VAR_4+VAR_61*VAR_5)))));
     VAR_44 += VAR_63*(VAR_62+VAR_45);
     VAR_61 = VAR_62*VAR_62;
     VAR_64 = 3+VAR_61+VAR_44;
     FUNC_0(VAR_60,VAR_64);
     FUNC_1(VAR_64,VAR_60&0xfffff000);
     VAR_65 = VAR_44-((VAR_64-3)-VAR_61);

     VAR_48 = VAR_62*VAR_64;
     VAR_49 = VAR_63*VAR_64+VAR_65*VAR_45;

     VAR_39 = VAR_48+VAR_49;
     FUNC_0(VAR_60,VAR_39);
     FUNC_1(VAR_39,VAR_60&0xfffff000);
     VAR_40 = VAR_49-(VAR_39-VAR_48);
     VAR_37 = VAR_13*VAR_39;
     VAR_38 = VAR_14*VAR_39+VAR_40*VAR_12+VAR_16[VAR_53];

     VAR_47 = VAR_55;
     VAR_42 = (((VAR_37+VAR_38)+VAR_15[VAR_53])+VAR_47);
     FUNC_0(VAR_60,VAR_42);
     FUNC_1(VAR_42,VAR_60&0xfffff000);
     VAR_43 = VAR_38-(((VAR_42-VAR_47)-VAR_15[VAR_53])-VAR_37);
 }


 FUNC_0(VAR_60,VAR_34);
 FUNC_1(VAR_41,VAR_60&0xfffff000);
 VAR_40 = (VAR_34-VAR_41)*VAR_42+VAR_34*VAR_43;
 VAR_39 = VAR_41*VAR_42;
 VAR_35 = VAR_40+VAR_39;
 FUNC_0(VAR_52,VAR_35);
 if (VAR_52>0x43000000)
     return VAR_46*VAR_18*VAR_18;
 else if (VAR_52==0x43000000) {
     if(VAR_40+VAR_26>VAR_35-VAR_39) return VAR_46*VAR_18*VAR_18;
 }
 else if ((VAR_52&0x7fffffff)>0x43160000)
     return VAR_46*VAR_29*VAR_29;
 else if (VAR_52==0xc3160000){
     if(VAR_40<=VAR_35-VAR_39) return VAR_46*VAR_29*VAR_29;
 }



 VAR_51 = VAR_52&0x7fffffff;
 VAR_53 = (VAR_51>>23)-0x7f;
 VAR_55 = 0;
 if(VAR_51>0x3f000000) {
     VAR_55 = VAR_52+(0x00800000>>(VAR_53+1));
     VAR_53 = ((VAR_55&0x7fffffff)>>23)-0x7f;
     FUNC_1(VAR_47,VAR_55&~(0x007fffff>>VAR_53));
     VAR_55 = ((VAR_55&0x007fffff)|0x00800000)>>(23-VAR_53);
     if(VAR_52<0) VAR_55 = -VAR_55;
     VAR_39 -= VAR_47;
 }
 VAR_47 = VAR_40+VAR_39;
 FUNC_0(VAR_60,VAR_47);
 FUNC_1(VAR_47,VAR_60&0xffff8000);
 VAR_48 = VAR_47*VAR_23;
 VAR_49 = (VAR_40-(VAR_47-VAR_39))*VAR_22+VAR_47*VAR_24;
 VAR_35 = VAR_48+VAR_49;
 VAR_50 = VAR_49-(VAR_35-VAR_48);
 VAR_47 = VAR_35*VAR_35;
 VAR_42 = VAR_35 - VAR_47*(VAR_6+VAR_47*(VAR_7+VAR_47*(VAR_8+VAR_47*(VAR_9+VAR_47*VAR_10))));
 VAR_44 = (VAR_35*VAR_42)/(VAR_42-VAR_30)-(VAR_50+VAR_35*VAR_50);
 VAR_35 = VAR_25-(VAR_44-VAR_35);
 FUNC_0(VAR_52,VAR_35);
 VAR_52 += (VAR_55<<23);
 if((VAR_52>>23)<=0) VAR_35 = FUNC_5(VAR_35,VAR_55);
 else FUNC_1(VAR_35,VAR_52);
 return VAR_46*VAR_35;
}
