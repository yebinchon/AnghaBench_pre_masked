
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static char const *
FUNC_0 (char const *VAR_0, char *VAR_1)
{
  register char const *VAR_2 = VAR_0;
  char VAR_3;
  ptrdiff_t VAR_4;
  char VAR_5 = *VAR_2++;

  switch (VAR_5)
    {
      case 0:
      case '\'':
 return 0;

      case '\\':
 VAR_3 = 0;
 while ((VAR_5 = *VAR_2++) != '\'')
   {
     unsigned int VAR_6 = VAR_5 - '0';
     if (8 <= VAR_6)
       return 0;
     VAR_3 = 8 * VAR_3 + VAR_6;
   }
 VAR_4 = VAR_2 - VAR_0 - 2;
 if (! (1 <= VAR_4 && VAR_4 <= 3))
   return 0;
 break;

      default:
 VAR_3 = VAR_5;
 if (*VAR_2++ != '\'')
   return 0;
 break;
    }

  *VAR_1 = VAR_3;
  return VAR_2;
}
