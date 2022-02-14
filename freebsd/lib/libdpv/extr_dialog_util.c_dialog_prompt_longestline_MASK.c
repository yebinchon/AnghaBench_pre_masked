
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

unsigned int
FUNC_0(const char *VAR_5, uint8_t VAR_6)
{
 uint8_t VAR_7 = 0;
 uint8_t VAR_8 = VAR_6;
 const char *VAR_9 = VAR_5;
 int VAR_10 = 0;
 int VAR_11 = 0;


 if (VAR_5 == ((void*)0))
  return (0);
 if (*VAR_5 == '\0')
  return (0);


 while (*VAR_9 != '\0') {

  if (VAR_3 || VAR_4) {
   if (*VAR_9 == '\n') {
    if (!VAR_4 && VAR_8)
     VAR_11++;
    else {
     if (VAR_11 > VAR_10)
      VAR_10 = VAR_11;
     VAR_11 = 0;
    }
    VAR_8 = VAR_0;
    VAR_9++;
    continue;
   }
  }


  if (*VAR_9 == '\\') {

   if ((VAR_7 ^= 1) == 0)
    VAR_11++;
  } else if (VAR_7) {
   if (*VAR_9 == 'n' && !VAR_4) {

    VAR_8 = VAR_1;
    if (VAR_11 > VAR_10)
     VAR_10 = VAR_11;
    VAR_11 = 0;
   } else if (VAR_2 && *VAR_9 == 'Z') {
    if (*++VAR_9 != '\0')
     VAR_9++;
    VAR_7 = 0;
    continue;
   } else
    VAR_11 += 2;

   VAR_7 = 0;
  } else
   VAR_11++;
  VAR_9++;
 }
 if (VAR_11 > VAR_10)
  VAR_10 = VAR_11;

 return (VAR_10);
}
