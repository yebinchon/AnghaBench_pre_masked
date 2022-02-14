
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;

int
FUNC_2 (const char *VAR_0)
{
  if (VAR_0 == ((void*)0))
    return 0;
  else
    {
      const char *VAR_1 = FUNC_1 (VAR_0, "___");
      if (VAR_1 == ((void*)0))
 return FUNC_0 (VAR_0);
      else
 return VAR_1 - VAR_0;
    }
}
