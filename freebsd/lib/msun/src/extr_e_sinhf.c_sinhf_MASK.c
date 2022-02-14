
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

float
FUNC_5(float VAR_2)
{
 float VAR_3,VAR_4;
 int32_t VAR_5,VAR_6;

 FUNC_0(VAR_6,VAR_2);
 VAR_5 = VAR_6&0x7fffffff;


 if(VAR_5>=0x7f800000) return VAR_2+VAR_2;

 VAR_4 = 0.5;
 if (VAR_6<0) VAR_4 = -VAR_4;

 if (VAR_5 < 0x41100000) {
     if (VAR_5<0x39800000)
  if(VAR_1+VAR_2>VAR_0) return VAR_2;
     VAR_3 = FUNC_3(FUNC_4(VAR_2));
     if(VAR_5<0x3f800000) return VAR_4*((float)2.0*VAR_3-VAR_3*VAR_3/(VAR_3+VAR_0));
     return VAR_4*(VAR_3+VAR_3/(VAR_3+VAR_0));
 }


 if (VAR_5 < 0x42b17217) return VAR_4*FUNC_1(FUNC_4(VAR_2));


 if (VAR_5<=0x42b2d4fc)
     return VAR_4*2.0F*FUNC_2(FUNC_4(VAR_2), -1);


 return VAR_2*VAR_1;
}
