
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0 (char *VAR_0)
{
  int VAR_1;

  while ((VAR_1 = *VAR_0) != ' ' && VAR_1 != '\t' && VAR_1)
    {
      if (VAR_1 == '\'' || VAR_1 == '"')
 {
   while (*++VAR_0 != VAR_1 && *VAR_0)
     {
       if (*VAR_0 == '\\')
  VAR_0++;
     }
   if (!*VAR_0)
     break;
 }
      VAR_0++;
    }
  return VAR_0;
}
