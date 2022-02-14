
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_0)
{
  char *VAR_1 = VAR_0;
  char *VAR_2 = ((void*)0);


  if (VAR_0 == ((void*)0))
    return ((void*)0);




  while (*VAR_1 != '\0')
    {
      if (!FUNC_0 (*VAR_1) && (*VAR_1 != '_'))
 break;
      VAR_2 = VAR_1;
      VAR_1++;
    }

  return VAR_2;
}
