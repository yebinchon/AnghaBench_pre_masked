
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (int ,int) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;

float
FUNC_5(float VAR_3)
{
 float VAR_4,VAR_5;
 int32_t VAR_6;

 FUNC_0(VAR_6,VAR_3);
 VAR_6 &= 0x7fffffff;


 if(VAR_6>=0x7f800000) return VAR_3*VAR_3;


 if(VAR_6<0x3eb17218) {
     VAR_4 = FUNC_3(FUNC_4(VAR_3));
     VAR_5 = VAR_2+VAR_4;
     if (VAR_6<0x39800000) return VAR_2;
     return VAR_2+(VAR_4*VAR_4)/(VAR_5+VAR_5);
 }


 if (VAR_6 < 0x41100000) {
  VAR_4 = FUNC_1(FUNC_4(VAR_3));
  return VAR_0*VAR_4+VAR_0/VAR_4;
 }


 if (VAR_6 < 0x42b17217) return VAR_0*FUNC_1(FUNC_4(VAR_3));


 if (VAR_6<=0x42b2d4fc)
     return FUNC_2(FUNC_4(VAR_3), -1);


 return VAR_1*VAR_1;
}
