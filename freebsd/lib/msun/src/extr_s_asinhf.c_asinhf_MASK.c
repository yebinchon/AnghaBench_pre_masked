
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float FUNC_4 (float) ;
 float VAR_2 ;

float
FUNC_5(float VAR_3)
{
 float VAR_4,VAR_5;
 int32_t VAR_6,VAR_7;
 FUNC_0(VAR_6,VAR_3);
 VAR_7 = VAR_6&0x7fffffff;
 if(VAR_7>=0x7f800000) return VAR_3+VAR_3;
 if(VAR_7< 0x31800000) {
     if(VAR_0+VAR_3>VAR_2) return VAR_3;
 }
 if(VAR_7>0x4d800000) {
     VAR_5 = FUNC_1(FUNC_3(VAR_3))+VAR_1;
 } else if (VAR_7>0x40000000) {
     VAR_4 = FUNC_3(VAR_3);
     VAR_5 = FUNC_1((float)2.0*VAR_4+VAR_2/(FUNC_2(VAR_3*VAR_3+VAR_2)+VAR_4));
 } else {
     VAR_4 = VAR_3*VAR_3;
     VAR_5 =FUNC_4(FUNC_3(VAR_3)+VAR_4/(VAR_2+FUNC_2(VAR_2+VAR_4)));
 }
 if(VAR_6>0) return VAR_5; else return -VAR_5;
}
