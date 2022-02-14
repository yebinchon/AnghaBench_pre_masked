
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

enum mandoc_esc
FUNC_0(const char *VAR_7, int VAR_8)
{
 switch (VAR_8) {
 case 0:
  return VAR_5;
 case 1:
  switch (VAR_7[0]) {
  case 'B':
  case '3':
   return VAR_2;
  case 'I':
  case '2':
   return VAR_4;
  case 'P':
   return VAR_5;
  case 'R':
  case '1':
   return VAR_6;
  case '4':
   return VAR_1;
  default:
   return VAR_0;
  }
 case 2:
  switch (VAR_7[0]) {
  case 'B':
   switch (VAR_7[1]) {
   case 'I':
    return VAR_1;
   default:
    return VAR_0;
   }
  case 'C':
   switch (VAR_7[1]) {
   case 'B':
    return VAR_2;
   case 'I':
    return VAR_4;
   case 'R':
   case 'W':
    return VAR_3;
   default:
    return VAR_0;
   }
  default:
   return VAR_0;
  }
 default:
  return VAR_0;
 }
}
