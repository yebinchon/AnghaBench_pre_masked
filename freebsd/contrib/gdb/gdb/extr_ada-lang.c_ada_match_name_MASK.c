
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,char const*) ;

int
FUNC_4 (const char *VAR_0, const char *VAR_1, int VAR_2)
{
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    return 0;
  else if (VAR_2)
    return FUNC_3 (VAR_1, FUNC_2 (VAR_1), VAR_0);
  else
    {
      int VAR_3 = FUNC_2 (VAR_1);
      return (FUNC_0 (VAR_0, VAR_1, VAR_3)
       && FUNC_1 (VAR_0 + VAR_3))
 || (FUNC_0 (VAR_0, "_ada_", 5)
     && FUNC_0 (VAR_0 + 5, VAR_1, VAR_3)
     && FUNC_1 (VAR_0 + VAR_3 + 5));
    }
}
