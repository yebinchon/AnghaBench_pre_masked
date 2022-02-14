
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;

char *
FUNC_2 (const char *VAR_0)
{
  const char *VAR_1 = VAR_0;
  const char *VAR_2;

  if (!VAR_0)
    return ((void*)0);

  for (VAR_2 = (VAR_1
    + FUNC_0 (VAR_1));
       *VAR_2 == ':';
       VAR_2 = (VAR_1
    + FUNC_0 (VAR_1)))
    {

      VAR_1 = VAR_2 + 2;
    }

  return FUNC_1 (VAR_1);
}
