
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char * __restrict VAR_0, const char * __restrict VAR_1, size_t VAR_2)
{

 for (; VAR_2--; VAR_0++, VAR_1++) {
  if (!(*VAR_0 = *VAR_1)) {
   char *VAR_3 = VAR_0;
   while (VAR_2--)
    *++VAR_0 = '\0';
   return (VAR_3);
  }
 }
 return (VAR_0);
}
