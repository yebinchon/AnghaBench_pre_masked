
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_2 (char *VAR_0, char *VAR_1)
{
  char *VAR_2;
  size_t VAR_3;

  VAR_3 = FUNC_0(VAR_1);
  for (VAR_2 = VAR_0; *VAR_2 != '\0'; ++VAR_2)
    if (FUNC_1(VAR_2, VAR_1, VAR_3) == 0)
      return VAR_2;
  return ((void*)0);
}
