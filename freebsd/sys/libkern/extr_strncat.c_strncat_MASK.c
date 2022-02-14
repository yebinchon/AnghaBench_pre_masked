
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, const char *VAR_1, size_t VAR_2)
{

 if (VAR_2 != 0) {
  char *VAR_3 = VAR_0;
  const char *VAR_4 = VAR_1;

  while (*VAR_3 != 0)
   VAR_3++;
  do {
   if ((*VAR_3 = *VAR_4++) == '\0')
    break;
   VAR_3++;
  } while (--VAR_2 != 0);
  *VAR_3 = '\0';
 }
 return (VAR_0);
}
