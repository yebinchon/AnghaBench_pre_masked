
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_1(char *VAR_5, int VAR_6, uint8_t VAR_7)
{
 uint8_t VAR_8 = 0;
 uint8_t VAR_9 = VAR_7;
 char *VAR_10;
 char *VAR_11 = VAR_5;
 int VAR_12 = 0;
 int VAR_13 = 0;


 if (VAR_11 == ((void*)0))
  return (0);
 if (*VAR_11 == '\0')
  return (0);


 while (*VAR_11 != '\0') {

  if (VAR_3 || VAR_4) {
   if (*VAR_11 == '\n') {
    if (VAR_3 || !VAR_9)
     VAR_12 = 0;
    VAR_9 = VAR_0;
   }
  }


  if (*VAR_11 == '\\') {

   if ((VAR_8 ^= 1) == 0)
    VAR_12++;
  } else if (VAR_8) {
   if (*VAR_11 == 'n' && !VAR_4) {

    VAR_9 = VAR_1;
    VAR_12 = 0;
   } else if (VAR_2 && *VAR_11 == 'Z') {
    if (*++VAR_11 != '\0')
     VAR_11++;
    VAR_8 = 0;
    continue;
   } else
    VAR_12 += 2;

   VAR_8 = 0;
  } else
   VAR_12++;


  if (VAR_12 > VAR_6) {





   VAR_10 = VAR_11;
   while (VAR_12 > 1 && !FUNC_0(*VAR_10)) {
    VAR_10--;
    VAR_12--;
   }
   if (VAR_12 > 0 && FUNC_0(*VAR_10))
    VAR_11 = VAR_10;
   VAR_13++;
   VAR_12 = 1;
  }

  VAR_11++;
 }

 return (VAR_13);
}
