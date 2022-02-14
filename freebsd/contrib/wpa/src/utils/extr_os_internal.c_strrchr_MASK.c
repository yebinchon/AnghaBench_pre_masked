
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char * FUNC_0(const char *VAR_0, int VAR_1)
{
 const char *VAR_2 = VAR_0;
 while (*VAR_2)
  VAR_2++;
 VAR_2--;
 while (VAR_2 >= VAR_0) {
  if (*VAR_2 == VAR_1)
   return (char *) VAR_2;
  VAR_2--;
 }
 return ((void*)0);
}
