
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*,size_t,int) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_0 ;
 struct type* FUNC_3 (struct type*) ;
 char* FUNC_4 (struct type*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;

char *
FUNC_7 (struct type *VAR_1)
{
  static char *VAR_2 = ((void*)0);
  static size_t VAR_3 = 0;
  struct type *VAR_4;
  const char *VAR_5;
  const char *VAR_6;
  const char *VAR_7;

  if (FUNC_2 (VAR_1) == VAR_0)
    VAR_4 = FUNC_3 (VAR_1);
  else
    VAR_4 = VAR_1;

  VAR_5 = FUNC_4 (VAR_4);

  if (VAR_5 == ((void*)0) || VAR_5[0] == '\000')
    return "";

  for (VAR_6 = VAR_5 + FUNC_5 (VAR_5) - 6; VAR_6 != VAR_5;
       VAR_6 -= 1)
    {
      if (FUNC_0 (VAR_6, "___XVN", 6))
 break;
    }
  if (VAR_6 == VAR_5)
    return "";

  for (VAR_7 = VAR_6; VAR_7 != VAR_5 + 3;
       VAR_7 -= 1)
    {
      if (VAR_7 == VAR_5 + 1)
 return "";
      if ((VAR_7 > VAR_5 + 3 && FUNC_0 (VAR_7 - 3, "___", 3))
   || VAR_7[-1] == '.')
 break;
    }

  FUNC_1 (VAR_2, VAR_3, VAR_6 - VAR_7 + 1);
  FUNC_6 (VAR_2, VAR_7, VAR_6 - VAR_7);
  VAR_2[VAR_6 - VAR_7] = '\0';
  return VAR_2;
}
