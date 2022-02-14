
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

int
FUNC_1(const char *VAR_1, const char **VAR_2)
{

 if (VAR_2 == ((void*)0))
  return (0);
 while (*VAR_2 != ((void*)0)) {
  if (FUNC_0(VAR_1, *VAR_2) == 0)
   return (VAR_0);
  ++VAR_2;
 }
 return (!VAR_0);
}
