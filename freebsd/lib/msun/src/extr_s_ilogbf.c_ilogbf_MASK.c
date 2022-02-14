
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,float) ;
 int VAR_2 ;

int FUNC_1(float VAR_3)
{
 int32_t VAR_4,VAR_5;

 FUNC_0(VAR_4,VAR_3);
 VAR_4 &= 0x7fffffff;
 if(VAR_4<0x00800000) {
     if(VAR_4==0)
  return VAR_0;
     else
         for (VAR_5 = -126,VAR_4<<=8; VAR_4>0; VAR_4<<=1) VAR_5 -=1;
     return VAR_5;
 }
 else if (VAR_4<0x7f800000) return (VAR_4>>23)-127;
 else if (VAR_4>0x7f800000) return VAR_1;
 else return VAR_2;
}
