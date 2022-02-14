
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

const char *
FUNC_2 (int VAR_0)
{
  register char *VAR_1;
  static char *VAR_2;
  static int VAR_3;

  if (VAR_0 > VAR_3)
    {
      if (VAR_2)
 {
   FUNC_0 (VAR_2);
 }
      VAR_2 = (char *) FUNC_1 (VAR_0 + 1);
      if (VAR_2 == (char *) 0)
 return 0;
      for (VAR_1 = VAR_2 + VAR_0 ; VAR_1 != VAR_2 ; )
 {
   *--VAR_1 = ' ';
 }
      VAR_3 = VAR_0;
      VAR_2[VAR_0] = '\0';
    }
  return (const char *) (VAR_2 + VAR_3 - VAR_0);
}
