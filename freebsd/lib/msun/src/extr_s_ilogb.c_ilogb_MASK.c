
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(double VAR_3)
{
 int32_t VAR_4,VAR_5,VAR_6;

 FUNC_0(VAR_4,VAR_5,VAR_3);
 VAR_4 &= 0x7fffffff;
 if(VAR_4<0x00100000) {
     if((VAR_4|VAR_5)==0)
  return VAR_0;
     else
  if(VAR_4==0) {
      for (VAR_6 = -1043; VAR_5>0; VAR_5<<=1) VAR_6 -=1;
  } else {
      for (VAR_6 = -1022,VAR_4<<=11; VAR_4>0; VAR_4<<=1) VAR_6 -=1;
  }
     return VAR_6;
 }
 else if (VAR_4<0x7ff00000) return (VAR_4>>20)-1023;
 else if (VAR_4>0x7ff00000 || VAR_5!=0) return VAR_1;
 else return VAR_2;
}
