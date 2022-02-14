
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 int FUNC_2 (double,int,int) ;
 double VAR_0 ;

double
FUNC_3(double VAR_1, double *VAR_2)
{
 int32_t VAR_3,VAR_4,VAR_5;
 u_int32_t VAR_6;
 FUNC_0(VAR_3,VAR_4,VAR_1);
 VAR_5 = ((VAR_3>>20)&0x7ff)-0x3ff;
 if(VAR_5<20) {
     if(VAR_5<0) {
         FUNC_2(*VAR_2,VAR_3&0x80000000,0);
  return VAR_1;
     } else {
  VAR_6 = (0x000fffff)>>VAR_5;
  if(((VAR_3&VAR_6)|VAR_4)==0) {
      u_int32_t VAR_7;
      *VAR_2 = VAR_1;
      FUNC_1(VAR_7,VAR_1);
      FUNC_2(VAR_1,VAR_7&0x80000000,0);
      return VAR_1;
  } else {
      FUNC_2(*VAR_2,VAR_3&(~VAR_6),0);
      return VAR_1 - *VAR_2;
  }
     }
 } else if (VAR_5>51) {
     u_int32_t VAR_8;
     if (VAR_5 == 0x400) {
  *VAR_2 = VAR_1;
  return 0.0 / VAR_1;
     }
     *VAR_2 = VAR_1*VAR_0;
     FUNC_1(VAR_8,VAR_1);
     FUNC_2(VAR_1,VAR_8&0x80000000,0);
     return VAR_1;
 } else {
     VAR_6 = ((u_int32_t)(0xffffffff))>>(VAR_5-20);
     if((VAR_4&VAR_6)==0) {
         u_int32_t VAR_9;
  *VAR_2 = VAR_1;
  FUNC_1(VAR_9,VAR_1);
  FUNC_2(VAR_1,VAR_9&0x80000000,0);
  return VAR_1;
     } else {
         FUNC_2(*VAR_2,VAR_3,VAR_4&(~VAR_6));
  return VAR_1 - *VAR_2;
     }
 }
}
