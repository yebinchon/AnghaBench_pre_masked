
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;
 float FUNC_2 (float) ;
 float VAR_1 ;
 float VAR_2 ;

float
FUNC_3(float VAR_3)
{
 float VAR_4;
 int32_t VAR_5,VAR_6;
 FUNC_0(VAR_5,VAR_3);
 VAR_6 = VAR_5&0x7fffffff;
 if (VAR_6>0x3f800000)
     return (VAR_3-VAR_3)/(VAR_3-VAR_3);
 if(VAR_6==0x3f800000)
     return VAR_3/VAR_2;
 if(VAR_6<0x31800000&&(VAR_0+VAR_3)>VAR_2) return VAR_3;
 FUNC_1(VAR_3,VAR_6);
 if(VAR_6<0x3f000000) {
     VAR_4 = VAR_3+VAR_3;
     VAR_4 = (float)0.5*FUNC_2(VAR_4+VAR_4*VAR_3/(VAR_1-VAR_3));
 } else
     VAR_4 = (float)0.5*FUNC_2((VAR_3+VAR_3)/(VAR_1-VAR_3));
 if(VAR_5>=0) return VAR_4; else return -VAR_4;
}
