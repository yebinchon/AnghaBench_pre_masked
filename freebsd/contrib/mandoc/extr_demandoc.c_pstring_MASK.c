
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mandoc_esc { ____Placeholder_mandoc_esc } mandoc_esc ;


 char const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char const**,int *,int *) ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, int VAR_3, int *VAR_4, int VAR_5)
{
 enum mandoc_esc VAR_6;
 const char *VAR_7, *VAR_8;
 int VAR_9;






again:
 if (VAR_5 && '\0' != *VAR_2) {
  while (FUNC_1((unsigned char)*VAR_2))
   VAR_2++;

  while ('\'' == *VAR_2 || '(' == *VAR_2 || '"' == *VAR_2)
   VAR_2++;

  VAR_9 = FUNC_0((unsigned char)VAR_2[0]) &&
   FUNC_0((unsigned char)VAR_2[1]);

  for (VAR_7 = VAR_2; '\0' != *VAR_2; VAR_2++)
   if ('\\' == *VAR_2) {
    VAR_2++;
    VAR_6 = FUNC_2(&VAR_2, ((void*)0), ((void*)0));
    if (VAR_1 == VAR_6)
     return;
    VAR_9 = 0;
   } else if (FUNC_1((unsigned char)*VAR_2))
    break;

  VAR_8 = VAR_2 - 1;

  while (VAR_8 > VAR_7)
   if ('.' == *VAR_8 || ',' == *VAR_8 ||
     '\'' == *VAR_8 || '"' == *VAR_8 ||
     ')' == *VAR_8 || '!' == *VAR_8 ||
     '?' == *VAR_8 || ':' == *VAR_8 ||
     ';' == *VAR_8)
    VAR_8--;
   else
    break;

  if (VAR_9 && VAR_8 - VAR_7 >= 1) {
   for ( ; VAR_7 <= VAR_8; VAR_7++)
    if (VAR_0 == *VAR_7)
     FUNC_3('-');
    else
     FUNC_3((unsigned char)*VAR_7);
   FUNC_3('\n');
  }

  if (FUNC_1((unsigned char)*VAR_2))
   goto again;

  return;
 }

 while (*VAR_4 < VAR_3) {
  FUNC_3(' ');
  (*VAR_4)++;
 }




 while ('\0' != *VAR_2)
  if ('\\' == *VAR_2) {
   VAR_2++;
   VAR_6 = FUNC_2(&VAR_2, ((void*)0), ((void*)0));
   if (VAR_1 == VAR_6)
    break;
  } else {
   FUNC_3((unsigned char )*VAR_2++);
   (*VAR_4)++;
  }
}
