
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

int
FUNC_2 (const char *VAR_2, const char *VAR_3)
{
  if (FUNC_0 (VAR_2, VAR_3) < 0)
    {
      if (VAR_1 != VAR_0)
 return -1;
      if (FUNC_1 (VAR_3) < 0
   || FUNC_0 (VAR_2, VAR_3) < 0)
 return -1;
    }
  return FUNC_1 (VAR_2);
}
