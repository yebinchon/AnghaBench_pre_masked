
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2;

 if (VAR_1 == ((void*)0))
  return (FUNC_2(VAR_0));

 VAR_2 = FUNC_0(VAR_1);
 if (FUNC_1(VAR_0, VAR_1, VAR_2) == 0) {
  if (VAR_1[VAR_2 - 1] != '/' && VAR_0[VAR_2] == '/')
   VAR_2++;
  return (FUNC_2(VAR_0 + VAR_2));
 }

 return (FUNC_2(VAR_0));
}
