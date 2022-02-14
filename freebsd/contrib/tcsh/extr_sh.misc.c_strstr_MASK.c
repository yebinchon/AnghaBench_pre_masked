
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(const char *VAR_0, const char *VAR_1)
{
    do {
 const char *VAR_2 = VAR_0;
 const char *VAR_3 = VAR_1;

 do
     if (*VAR_3 == '\0')
  return (VAR_0);
 while (*VAR_2++ == *VAR_3++);
    } while (*VAR_0++ != '\0');
    return (((void*)0));
}
