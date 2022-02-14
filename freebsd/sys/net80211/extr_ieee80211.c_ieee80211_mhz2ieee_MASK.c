
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

int
FUNC_3(u_int VAR_3, u_int VAR_4)
{

 if (VAR_4 & VAR_2)
  return FUNC_1(VAR_3, VAR_4);
 if (VAR_4 & VAR_0) {
  if (VAR_3 == 2484)
   return 14;
  if (VAR_3 < 2484)
   return ((int) VAR_3 - 2407) / 5;
  else
   return 15 + ((VAR_3 - 2512) / 20);
 } else if (VAR_4 & VAR_1) {
  if (VAR_3 <= 5000) {

   if (((VAR_3) > 4940 && (VAR_3) < 4990))
    return FUNC_2(VAR_3, VAR_4);
   return (VAR_3 - 4000) / 5;
  } else
   return (VAR_3 - 5000) / 5;
 } else {
  if (VAR_3 == 2484)
   return 14;
  if (VAR_3 < 2484) {
   if (907 <= VAR_3 && VAR_3 <= 922)
    return FUNC_1(VAR_3, VAR_4);
   return ((int) VAR_3 - 2407) / 5;
  }
  if (VAR_3 < 5000) {
   if (((VAR_3) > 4940 && (VAR_3) < 4990))
    return FUNC_2(VAR_3, VAR_4);
   else if (VAR_3 > 4900)
    return (VAR_3 - 4000) / 5;
   else
    return 15 + ((VAR_3 - 2512) / 20);
  }
  return (VAR_3 - 5000) / 5;
 }

}
