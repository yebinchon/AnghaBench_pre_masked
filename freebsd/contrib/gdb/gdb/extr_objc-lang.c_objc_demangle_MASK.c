
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;

char *
FUNC_5 (const char *VAR_0, int VAR_1)
{
  char *VAR_2, *VAR_3;

  if (VAR_0[0] == '_' &&
     (VAR_0[1] == 'i' || VAR_0[1] == 'c') &&
      VAR_0[2] == '_')
    {
      VAR_3 = VAR_2 = FUNC_4(FUNC_2(VAR_0) + 2);

      if (VAR_0[1] == 'i')
 *VAR_3++ = '-';
      else
 *VAR_3++ = '+';

      *VAR_3++ = '[';
      FUNC_1(VAR_3, VAR_0+3);

      while (*VAR_3 && *VAR_3 == '_')
 VAR_3++;

      VAR_3 = FUNC_0(VAR_3, '_');
      if (!VAR_3)
 {
   FUNC_3(VAR_2);
   return ((void*)0);
 }
      if (VAR_3[1] == '_') {
 *VAR_3++ = ' ';
 FUNC_1(VAR_3, VAR_0 + (VAR_3 - VAR_2) + 2);
      }
      else {
 *VAR_3++ = '(';
 VAR_3 = FUNC_0(VAR_3, '_');
 if (!VAR_3)
   {
     FUNC_3(VAR_2);
     return ((void*)0);
   }
 *VAR_3++ = ')';
 *VAR_3++ = ' ';
 FUNC_1(VAR_3, VAR_0 + (VAR_3 - VAR_2));
      }

      while (*VAR_3 && *VAR_3 == '_')
 VAR_3++;

      for (; *VAR_3; VAR_3++)
 if (*VAR_3 == '_')
   *VAR_3 = ':';

      *VAR_3++ = ']';
      *VAR_3++ = 0;
      return VAR_2;
    }
  else
    return ((void*)0);
}
