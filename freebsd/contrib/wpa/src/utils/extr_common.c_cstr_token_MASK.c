
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const) ;

const char * FUNC_1(const char *VAR_0, const char *VAR_1, const char **VAR_2)
{
 const char *VAR_3, *VAR_4 = VAR_0;

 if (!VAR_0 || !VAR_1 || !VAR_2)
  return ((void*)0);

 if (*VAR_2)
  VAR_4 = *VAR_2;

 while (*VAR_4 && FUNC_0(VAR_1, *VAR_4))
  VAR_4++;

 if (!*VAR_4)
  return ((void*)0);

 VAR_3 = VAR_4 + 1;

 while (*VAR_3 && !FUNC_0(VAR_1, *VAR_3))
  VAR_3++;

 *VAR_2 = VAR_3;
 return VAR_4;
}
