
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0 (char *VAR_0)
{
  while (1)
    {


      if (VAR_0[0] == '\n' && VAR_0[1] == '\n' && VAR_0[2] == '\n')
 return VAR_0 + 1;
      else if (*VAR_0 == '\n' || *VAR_0 == ' ' || *VAR_0 == '\t')
 VAR_0++;
      else if (*VAR_0 == '#')
 {
   while (*VAR_0 != '\n')
     VAR_0++;
   VAR_0++;
 }
      else
 break;
    }

  return VAR_0;
}
