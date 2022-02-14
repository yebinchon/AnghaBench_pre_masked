
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_0(accmode_t *VAR_8)
{




 if (*VAR_8 & VAR_5) {
  *VAR_8 = 0;
  return (0);
 }







 if (*VAR_8 & (VAR_4 | VAR_3))
  return (VAR_0);

 if (*VAR_8 & VAR_2) {
  *VAR_8 &= ~VAR_2;
  *VAR_8 |= VAR_1;
 }





 *VAR_8 &= ~(VAR_6 | VAR_7);

 return (0);
}
