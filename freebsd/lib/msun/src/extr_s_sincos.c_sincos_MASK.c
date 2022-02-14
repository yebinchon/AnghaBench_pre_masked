
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (double,double*) ;
 int FUNC_2 (double,double,int,double*,double*) ;

void
FUNC_3(double VAR_0, double *VAR_1, double *VAR_2)
{
 double VAR_3[2];
 int32_t VAR_4, VAR_5;


 FUNC_0(VAR_5, VAR_0);


 VAR_5 &= 0x7fffffff;
 if (VAR_5 <= 0x3fe921fb) {
  if (VAR_5 < 0x3e400000) {
   if ((int)VAR_0 == 0) {
    *VAR_1 = VAR_0;
    *VAR_2 = 1;
    return;
   }
  }
  FUNC_2(VAR_0, 0, 0, VAR_1, VAR_2);
  return;
 }


 if (VAR_5 >= 0x7ff00000) {
  *VAR_1 = VAR_0 - VAR_0;
  *VAR_2 = VAR_0 - VAR_0;
  return;
 }


 VAR_4 = FUNC_1(VAR_0, VAR_3);

 switch(VAR_4 & 3) {
 case 0:
  FUNC_2(VAR_3[0], VAR_3[1], 1, VAR_1, VAR_2);
  break;
 case 1:
  FUNC_2(VAR_3[0], VAR_3[1], 1, VAR_2, VAR_1);
  *VAR_2 = -*VAR_2;
  break;
 case 2:
  FUNC_2(VAR_3[0], VAR_3[1], 1, VAR_1, VAR_2);
  *VAR_1 = -*VAR_1;
  *VAR_2 = -*VAR_2;
  break;
 default:
  FUNC_2(VAR_3[0], VAR_3[1], 1, VAR_2, VAR_1);
  *VAR_1 = -*VAR_1;
 }
}
