
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (int,double) ;
 int FUNC_2 (double,int) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;

double
FUNC_6(double VAR_0, double VAR_1)
{
 double VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
 int32_t VAR_9,VAR_10,VAR_11,VAR_12;

 FUNC_0(VAR_11,VAR_0);
 VAR_11 &= 0x7fffffff;
 FUNC_0(VAR_12,VAR_1);
 VAR_12 &= 0x7fffffff;
 if(VAR_12 > VAR_11) {VAR_2=VAR_1;VAR_3=VAR_0;VAR_9=VAR_11; VAR_11=VAR_12;VAR_12=VAR_9;} else {VAR_2=VAR_0;VAR_3=VAR_1;}
 VAR_2 = FUNC_3(VAR_2);
 VAR_3 = FUNC_3(VAR_3);
 if((VAR_11-VAR_12)>0x3c00000) {return VAR_2+VAR_3;}
 VAR_10=0;
 if(VAR_11 > 0x5f300000) {
    if(VAR_11 >= 0x7ff00000) {
        u_int32_t VAR_13;

        VAR_8 = FUNC_4(VAR_0+0.0L)-FUNC_3(VAR_1+0);
        FUNC_1(VAR_13,VAR_2);
        if(((VAR_11&0xfffff)|VAR_13)==0) VAR_8 = VAR_2;
        FUNC_1(VAR_13,VAR_3);
        if(((VAR_12^0x7ff00000)|VAR_13)==0) VAR_8 = VAR_3;
        return VAR_8;
    }

    VAR_11 -= 0x25800000; VAR_12 -= 0x25800000; VAR_10 += 600;
    FUNC_2(VAR_2,VAR_11);
    FUNC_2(VAR_3,VAR_12);
 }
 if(VAR_12 < 0x20b00000) {
     if(VAR_12 <= 0x000fffff) {
         u_int32_t VAR_14;
  FUNC_1(VAR_14,VAR_3);
  if((VAR_12|VAR_14)==0) return VAR_2;
  VAR_4=0;
  FUNC_2(VAR_4,0x7fd00000);
  VAR_3 *= VAR_4;
  VAR_2 *= VAR_4;
  VAR_10 -= 1022;
     } else {
         VAR_11 += 0x25800000;
  VAR_12 += 0x25800000;
  VAR_10 -= 600;
  FUNC_2(VAR_2,VAR_11);
  FUNC_2(VAR_3,VAR_12);
     }
 }

 VAR_8 = VAR_2-VAR_3;
 if (VAR_8>VAR_3) {
     VAR_4 = 0;
     FUNC_2(VAR_4,VAR_11);
     VAR_5 = VAR_2-VAR_4;
     VAR_8 = FUNC_5(VAR_4*VAR_4-(VAR_3*(-VAR_3)-VAR_5*(VAR_2+VAR_4)));
 } else {
     VAR_2 = VAR_2+VAR_2;
     VAR_6 = 0;
     FUNC_2(VAR_6,VAR_12);
     VAR_7 = VAR_3 - VAR_6;
     VAR_4 = 0;
     FUNC_2(VAR_4,VAR_11+0x00100000);
     VAR_5 = VAR_2 - VAR_4;
     VAR_8 = FUNC_5(VAR_4*VAR_6-(VAR_8*(-VAR_8)-(VAR_4*VAR_7+VAR_5*VAR_3)));
 }
 if(VAR_10!=0) {
     u_int32_t VAR_15;
     VAR_4 = 1.0;
     FUNC_0(VAR_15,VAR_4);
     FUNC_2(VAR_4,VAR_15+(VAR_10<<20));
     return VAR_4*VAR_8;
 } else return VAR_8;
}
