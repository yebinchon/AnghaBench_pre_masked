
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float FUNC_2 (float) ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 float VAR_11 ;
 float VAR_12 ;
 float VAR_13 ;
 float VAR_14 ;
 float VAR_15 ;
 float FUNC_3 (float) ;
 int VAR_16 ;
 float VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 float VAR_23 ;
 float VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 float VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 float VAR_31 ;
 float VAR_32 ;
 float VAR_33 ;
 float VAR_34 ;
 float VAR_35 ;
 float VAR_36 ;

float
FUNC_4(float VAR_37, int *VAR_38)
{
 float VAR_39,VAR_40,VAR_41,VAR_42,VAR_43,VAR_44,VAR_45,VAR_46,VAR_47,VAR_48;
 int32_t VAR_49;
 int VAR_50,VAR_51;

 FUNC_0(VAR_49,VAR_37);


 *VAR_38 = 1;
 VAR_51 = VAR_49&0x7fffffff;
 if(VAR_51>=0x7f800000) return VAR_37*VAR_37;


 *VAR_38 = 1-2*((uint32_t)VAR_49>>31);
 if(VAR_51<0x32000000) {
     if(VAR_51==0)
         return VAR_7/VAR_32;
     return -FUNC_1(FUNC_2(VAR_37));
 }


 if(VAR_49<0) {
     *VAR_38 = 1;
     if(VAR_51>=0x4b000000)
  return VAR_7/VAR_32;
     VAR_45 = FUNC_3(VAR_37);
     if(VAR_45==VAR_36) return VAR_7/VAR_32;
     VAR_39 = FUNC_1(VAR_8/FUNC_2(VAR_45*VAR_37));
     if(VAR_45<VAR_36) *VAR_38 = -1;
     VAR_37 = -VAR_37;
 }


 if (VAR_51==0x3f800000||VAR_51==0x40000000) VAR_44 = 0;

 else if(VAR_51<0x40000000) {
     if(VAR_51<=0x3f666666) {
  VAR_44 = -FUNC_1(VAR_37);
  if(VAR_51>=0x3f3b4a20) {VAR_47 = VAR_7-VAR_37; VAR_50= 0;}
  else if(VAR_51>=0x3e6d3308) {VAR_47= VAR_37-(VAR_24-VAR_7); VAR_50=1;}
    else {VAR_47 = VAR_37; VAR_50=2;}
     } else {
    VAR_44 = VAR_36;
         if(VAR_51>=0x3fdda618) {VAR_47=2-VAR_37;VAR_50=0;}
         else if(VAR_51>=0x3F9da620) {VAR_47=VAR_37-VAR_24;VAR_50=1;}
  else {VAR_47=VAR_37-VAR_7;VAR_50=2;}
     }
     switch(VAR_50) {
       case 0:
  VAR_48 = VAR_47*VAR_47;
  VAR_41 = VAR_0+VAR_48*(VAR_2+VAR_48*VAR_4);
  VAR_42 = VAR_48*(VAR_1+VAR_48*(VAR_3+VAR_48*VAR_5));
  VAR_40 = VAR_47*VAR_41+VAR_42;
  VAR_44 += VAR_40-VAR_47/2; break;
       case 1:
  VAR_40 = VAR_16+VAR_47*VAR_17+VAR_47*VAR_47*(VAR_18+VAR_47*(VAR_19+VAR_47*(VAR_20+VAR_47*(VAR_21+VAR_47*(VAR_22+VAR_47*VAR_23)))));
  VAR_44 += VAR_25 + VAR_40; break;
       case 2:
  VAR_41 = VAR_47*(VAR_26+VAR_47*(VAR_27+VAR_47*VAR_28));
  VAR_42 = VAR_7+VAR_47*(VAR_29+VAR_47*(VAR_30+VAR_47*VAR_31));
  VAR_44 += VAR_41/VAR_42-VAR_47/2;
     }
 }

 else if(VAR_51<0x41000000) {
     VAR_50 = VAR_37;
     VAR_47 = VAR_37-VAR_50;
     VAR_40 = VAR_47*(VAR_12+VAR_47*(VAR_13+VAR_47*(VAR_14+VAR_47*VAR_15)));
     VAR_43 = VAR_7+VAR_47*(VAR_9+VAR_47*(VAR_10+VAR_47*VAR_11));
     VAR_44 = VAR_47/2+VAR_40/VAR_43;
     VAR_48 = VAR_7;
     switch(VAR_50) {
     case 7: VAR_48 *= (VAR_47+6);
     case 6: VAR_48 *= (VAR_47+5);
     case 5: VAR_48 *= (VAR_47+4);
     case 4: VAR_48 *= (VAR_47+3);
     case 3: VAR_48 *= (VAR_47+2);
      VAR_44 += FUNC_1(VAR_48); break;
     }

 } else if (VAR_51 < 0x4d000000) {
     VAR_45 = FUNC_1(VAR_37);
     VAR_48 = VAR_7/VAR_37;
     VAR_47 = VAR_48*VAR_48;
     VAR_46 = VAR_33+VAR_48*(VAR_34+VAR_47*VAR_35);
     VAR_44 = (VAR_37-VAR_6)*(VAR_45-VAR_7)+VAR_46;
 } else

     VAR_44 = VAR_37*(FUNC_1(VAR_37)-VAR_7);
 if(VAR_49<0) VAR_44 = VAR_39 - VAR_44;
 return VAR_44;
}
