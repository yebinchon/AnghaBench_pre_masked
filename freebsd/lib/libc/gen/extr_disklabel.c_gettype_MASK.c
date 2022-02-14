
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, const char **VAR_1)
{
 const char **VAR_2;

 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
  if (FUNC_2(VAR_0, *VAR_2) == 0)
   return (VAR_2 - VAR_1);
 if (FUNC_1((unsigned char)*VAR_0))
  return (FUNC_0(VAR_0));
 return (0);
}
