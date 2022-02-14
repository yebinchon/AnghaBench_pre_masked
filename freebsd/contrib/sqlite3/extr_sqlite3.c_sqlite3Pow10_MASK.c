
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long double LONGDOUBLE_TYPE ;


 int FUNC_0 (int) ;

__attribute__((used)) static LONGDOUBLE_TYPE FUNC_1(int VAR_0){
  LONGDOUBLE_TYPE VAR_1 = 10.0;
  LONGDOUBLE_TYPE VAR_2 = 1.0;
  while(1){
    if( VAR_0 & 1 ) VAR_2 *= VAR_1;
    VAR_0 >>= 1;
    if( VAR_0==0 ) break;
    VAR_1 *= VAR_1;
  }
  return VAR_2;

}
