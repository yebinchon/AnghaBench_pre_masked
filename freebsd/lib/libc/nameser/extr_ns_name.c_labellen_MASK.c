
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(const u_char *VAR_3)
{
 int VAR_4;
 u_char VAR_5 = *VAR_3;

 if ((VAR_5 & VAR_1) == VAR_1) {

  return (-1);
 }

 if ((VAR_5 & VAR_1) == VAR_2) {
  if (VAR_5 == VAR_0) {
   if ((VAR_4 = *(VAR_3 + 1)) == 0)
    VAR_4 = 256;
   return ((VAR_4 + 7 ) / 8 + 1);
  }
  return (-1);
 }
 return (VAR_5);
}
