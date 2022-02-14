
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;

float
FUNC_2(float VAR_1)
{
 int32_t VAR_2,VAR_3;
 u_int32_t VAR_4;
 FUNC_0(VAR_2,VAR_1);
 VAR_3 = ((VAR_2>>23)&0xff)-0x7f;
 if(VAR_3<23) {
     if(VAR_3<0) {
  if(VAR_0+VAR_1>(float)0.0) {
      if(VAR_2>=0) {VAR_2=0;}
      else if((VAR_2&0x7fffffff)!=0)
   { VAR_2=0xbf800000;}
  }
     } else {
  VAR_4 = (0x007fffff)>>VAR_3;
  if((VAR_2&VAR_4)==0) return VAR_1;
  if(VAR_0+VAR_1>(float)0.0) {
      if(VAR_2<0) VAR_2 += (0x00800000)>>VAR_3;
      VAR_2 &= (~VAR_4);
  }
     }
 } else {
     if(VAR_3==0x80) return VAR_1+VAR_1;
     else return VAR_1;
 }
 FUNC_1(VAR_1,VAR_2);
 return VAR_1;
}
