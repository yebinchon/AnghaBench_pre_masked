
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

long
FUNC_1(void)
{
 uint32_t VAR_6;
 uint32_t *VAR_7, *VAR_8;

 if (VAR_3 == VAR_0) {
  VAR_6 = VAR_5[0];
  VAR_5[0] = VAR_6 = FUNC_0(VAR_6);
 } else {



  VAR_7 = VAR_2; VAR_8 = VAR_4;
  *VAR_7 += *VAR_8;
  VAR_6 = *VAR_7 >> 1;
  if (++VAR_7 >= VAR_1) {
   VAR_7 = VAR_5;
   ++VAR_8;
  }
  else if (++VAR_8 >= VAR_1) {
   VAR_8 = VAR_5;
  }

  VAR_2 = VAR_7; VAR_4 = VAR_8;
 }
 return ((long)VAR_6);
}
