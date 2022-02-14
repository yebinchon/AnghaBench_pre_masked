
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

char *
FUNC_0(char *VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6 = VAR_5;
 char *VAR_7;
 char *VAR_8;

 if (VAR_4 == ((void*)0))
  return (((void*)0));
 if (*VAR_4 == '\0')
  return (VAR_4);

 VAR_7 = VAR_8 = VAR_4;
 while (*VAR_8 != '\0') {

  if (VAR_2 || VAR_3) {
   if (*VAR_8 == '\n') {
    if (VAR_3 || !VAR_6)
     VAR_7 = VAR_8 + 1;
    VAR_6 = VAR_0;
   }
  }

  if (VAR_3) {
   VAR_8++;
   continue;
  }
  if (*VAR_8 == '\\' && *(VAR_8 + 1) != '\0' && *(++VAR_8) == 'n') {
   VAR_6 = VAR_1;
   VAR_7 = VAR_8 + 1;
  }
  VAR_8++;
 }

 return (VAR_7);
}
