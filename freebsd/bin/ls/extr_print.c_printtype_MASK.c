
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1(u_int VAR_5)
{

 if (VAR_4) {
  if ((VAR_5 & VAR_0) == 132) {
   (void)FUNC_0('/');
   return (1);
  }
  return (0);
 }

 switch (VAR_5 & VAR_0) {
 case 132:
  (void)FUNC_0('/');
  return (1);
 case 131:
  (void)FUNC_0('|');
  return (1);
 case 130:
  (void)FUNC_0('@');
  return (1);
 case 129:
  (void)FUNC_0('=');
  return (1);
 case 128:
  (void)FUNC_0('%');
  return (1);
 default:
  break;
 }
 if (VAR_5 & (VAR_3 | VAR_1 | VAR_2)) {
  (void)FUNC_0('*');
  return (1);
 }
 return (0);
}
