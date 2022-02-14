
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float FUNC_4 (float) ;

float
FUNC_5(float VAR_0, float VAR_1)
{
 float VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
 int32_t VAR_9,VAR_10,VAR_11,VAR_12;

 FUNC_0(VAR_11,VAR_0);
 VAR_11 &= 0x7fffffff;
 FUNC_0(VAR_12,VAR_1);
 VAR_12 &= 0x7fffffff;
 if(VAR_12 > VAR_11) {VAR_2=VAR_1;VAR_3=VAR_0;VAR_9=VAR_11; VAR_11=VAR_12;VAR_12=VAR_9;} else {VAR_2=VAR_0;VAR_3=VAR_1;}
 VAR_2 = FUNC_3(VAR_2);
 VAR_3 = FUNC_3(VAR_3);
 if((VAR_11-VAR_12)>0xf000000) {return VAR_2+VAR_3;}
 VAR_10=0;
 if(VAR_11 > 0x58800000) {
    if(VAR_11 >= 0x7f800000) {

        VAR_8 = FUNC_4(VAR_0+0.0L)-FUNC_3(VAR_1+0);
        if(VAR_11 == 0x7f800000) VAR_8 = VAR_2;
        if(VAR_12 == 0x7f800000) VAR_8 = VAR_3;
        return VAR_8;
    }

    VAR_11 -= 0x22000000; VAR_12 -= 0x22000000; VAR_10 += 68;
    FUNC_1(VAR_2,VAR_11);
    FUNC_1(VAR_3,VAR_12);
 }
 if(VAR_12 < 0x26800000) {
     if(VAR_12 <= 0x007fffff) {
         if(VAR_12==0) return VAR_2;
  FUNC_1(VAR_4,0x7e800000);
  VAR_3 *= VAR_4;
  VAR_2 *= VAR_4;
  VAR_10 -= 126;
     } else {
         VAR_11 += 0x22000000;
  VAR_12 += 0x22000000;
  VAR_10 -= 68;
  FUNC_1(VAR_2,VAR_11);
  FUNC_1(VAR_3,VAR_12);
     }
 }

 VAR_8 = VAR_2-VAR_3;
 if (VAR_8>VAR_3) {
     FUNC_1(VAR_4,VAR_11&0xfffff000);
     VAR_5 = VAR_2-VAR_4;
     VAR_8 = FUNC_2(VAR_4*VAR_4-(VAR_3*(-VAR_3)-VAR_5*(VAR_2+VAR_4)));
 } else {
     VAR_2 = VAR_2+VAR_2;
     FUNC_1(VAR_6,VAR_12&0xfffff000);
     VAR_7 = VAR_3 - VAR_6;
     FUNC_1(VAR_4,(VAR_11+0x00800000)&0xfffff000);
     VAR_5 = VAR_2 - VAR_4;
     VAR_8 = FUNC_2(VAR_4*VAR_6-(VAR_8*(-VAR_8)-(VAR_4*VAR_7+VAR_5*VAR_3)));
 }
 if(VAR_10!=0) {
     FUNC_1(VAR_4,0x3f800000+(VAR_10<<23));
     return VAR_4*VAR_8;
 } else return VAR_8;
}
