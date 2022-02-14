
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 double FUNC_2 (double) ;
 double VAR_0 ;

double
FUNC_3(double VAR_1)
{
 int32_t VAR_2,VAR_3;
 FUNC_0(VAR_3,VAR_2,VAR_1);
 VAR_3 &= 0x7fffffff;
 if((VAR_3|VAR_2)==0) return -1.0/FUNC_2(VAR_1);
 if(VAR_3>=0x7ff00000) return VAR_1*VAR_1;
 if(VAR_3<0x00100000) {
  VAR_1 *= VAR_0;
  FUNC_1(VAR_3,VAR_1);
  VAR_3 &= 0x7fffffff;
  return (double) ((VAR_3>>20)-1023-54);
 } else
  return (double) ((VAR_3>>20)-1023);
}
