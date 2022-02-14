
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const**) ;

__attribute__((used)) static char *
FUNC_2 (const char **VAR_0)
{
  const char *VAR_1;

  VAR_1 = FUNC_1 (VAR_0);

  if (VAR_1 == ((void*)0))
    return ((void*)0);

  return FUNC_0 (VAR_1, *VAR_0 - VAR_1);
}
