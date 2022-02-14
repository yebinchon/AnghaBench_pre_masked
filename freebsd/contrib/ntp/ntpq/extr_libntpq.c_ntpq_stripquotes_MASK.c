
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



int FUNC_0 ( char *VAR_0, char *VAR_1, int VAR_2, int VAR_3 )
{
 char* VAR_4 = VAR_0;
 char* VAR_5 = VAR_0 + VAR_3 - 1;
 char* VAR_6 = VAR_1;
 char* VAR_7 = VAR_1 + (VAR_2 >= 0 ? VAR_2 : 0);
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_3 <= 0)
  return 0;

 while ((VAR_4 != VAR_5) && (VAR_6 != VAR_7) && (VAR_9 = (u_char)*VAR_6++) != 0) {
  if (VAR_8) {
   VAR_8 = 0;
   switch (VAR_9) {


   case 'n':
   case 'r':
   case 'g':
   case 't':
    continue;
   default:
    break;
   }
  } else {
   switch (VAR_9) {
   case '\\':
    VAR_8 = 1;
   case '"':
    continue;
   default:
    break;
   }
  }
  *VAR_4++ = (char)VAR_9;
 }
 *VAR_4 = '\0';
 return (int)(VAR_4 - VAR_0);
}
