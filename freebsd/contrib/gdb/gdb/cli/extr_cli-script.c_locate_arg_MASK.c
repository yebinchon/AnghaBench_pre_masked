
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_3 (char *VAR_0)
{
  while ((VAR_0 = FUNC_1 (VAR_0, '$')))
    {
      if (FUNC_2 (VAR_0, "$arg", 4) == 0 && FUNC_0 (VAR_0[4]))
 return VAR_0;
      VAR_0++;
    }
  return ((void*)0);
}
