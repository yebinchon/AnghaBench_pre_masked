
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const* const,char const*) ;

const char *
FUNC_1(const char *VAR_0, const char *const *VAR_1)
{
  while (VAR_1 && (*VAR_1))
    {
      if (FUNC_0(VAR_1[0], VAR_0) == 0)
        return VAR_1[1];
      else
        VAR_1 += 2;
    }


  return ((void*)0);
}
