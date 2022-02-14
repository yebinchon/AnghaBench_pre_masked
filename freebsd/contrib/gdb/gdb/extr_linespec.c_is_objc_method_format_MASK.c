
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char const) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0)
{
  if (VAR_0 == ((void*)0) || *VAR_0 == '\0')
    return 0;

  if ((VAR_0[0] == ':') && (FUNC_0 ("+-", VAR_0[1]) != ((void*)0))
      && (VAR_0[2] == '[') && FUNC_0(VAR_0, ']'))
    return 1;

  else if ((FUNC_0 ("+-", VAR_0[0]) != ((void*)0)) && (VAR_0[1] == '[') && FUNC_0(VAR_0, ']'))
    return 1;
  return 0;
}
