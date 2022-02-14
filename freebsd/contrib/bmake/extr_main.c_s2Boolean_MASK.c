
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;

Boolean
FUNC_0(const char *VAR_2, Boolean VAR_3)
{
    if (VAR_2) {
 switch(*VAR_2) {
 case '\0':
     break;
 case '0':
 case 'F':
 case 'f':
 case 'N':
 case 'n':
     VAR_3 = VAR_0;
     break;
 case 'O':
 case 'o':
     switch (VAR_2[1]) {
     case 'F':
     case 'f':
  VAR_3 = VAR_0;
  break;
     default:
  VAR_3 = VAR_1;
  break;
     }
     break;
 default:
     VAR_3 = VAR_1;
     break;
 }
    }
    return (VAR_3);
}
