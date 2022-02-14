
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

u_int
FUNC_0(u_int VAR_5, u_int VAR_6)
{
 if (VAR_6 & VAR_2)
  return 907 + 5 * (VAR_5 / 10);
 if (VAR_6 & VAR_0) {
  if (VAR_5 == 14)
   return 2484;
  if (VAR_5 < 14)
   return 2407 + VAR_5*5;
  else
   return 2512 + ((VAR_5-15)*20);
 } else if (VAR_6 & VAR_1) {
  if (VAR_6 & (VAR_3|VAR_4)) {
   VAR_5 -= 37;
   return 4940 + VAR_5*5 + (VAR_5 % 5 ? 2 : 0);
  }
  return 5000 + (VAR_5*5);
 } else {

  if (VAR_5 == 14)
   return 2484;
  if (VAR_5 < 14)
   return 2407 + VAR_5*5;
  if (VAR_5 < 27)
   return 2512 + ((VAR_5-15)*20);
  return 5000 + (VAR_5*5);
 }
}
