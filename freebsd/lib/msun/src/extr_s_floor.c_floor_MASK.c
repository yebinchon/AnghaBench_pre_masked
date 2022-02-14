
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (double,int,int) ;
 double VAR_0 ;

double
FUNC_2(double VAR_1)
{
 int32_t VAR_2,VAR_3,VAR_4;
 u_int32_t VAR_5,VAR_6;
 FUNC_0(VAR_2,VAR_3,VAR_1);
 VAR_4 = ((VAR_2>>20)&0x7ff)-0x3ff;
 if(VAR_4<20) {
     if(VAR_4<0) {
  if(VAR_0+VAR_1>0.0) {
      if(VAR_2>=0) {VAR_2=VAR_3=0;}
      else if(((VAR_2&0x7fffffff)|VAR_3)!=0)
   { VAR_2=0xbff00000;VAR_3=0;}
  }
     } else {
  VAR_5 = (0x000fffff)>>VAR_4;
  if(((VAR_2&VAR_5)|VAR_3)==0) return VAR_1;
  if(VAR_0+VAR_1>0.0) {
      if(VAR_2<0) VAR_2 += (0x00100000)>>VAR_4;
      VAR_2 &= (~VAR_5); VAR_3=0;
  }
     }
 } else if (VAR_4>51) {
     if(VAR_4==0x400) return VAR_1+VAR_1;
     else return VAR_1;
 } else {
     VAR_5 = ((u_int32_t)(0xffffffff))>>(VAR_4-20);
     if((VAR_3&VAR_5)==0) return VAR_1;
     if(VAR_0+VAR_1>0.0) {
  if(VAR_2<0) {
      if(VAR_4==20) VAR_2+=1;
      else {
   VAR_6 = VAR_3+(1<<(52-VAR_4));
   if(VAR_6<VAR_3) VAR_2 +=1 ;
   VAR_3=VAR_6;
      }
  }
  VAR_3 &= (~VAR_5);
     }
 }
 FUNC_1(VAR_1,VAR_2,VAR_3);
 return VAR_1;
}
