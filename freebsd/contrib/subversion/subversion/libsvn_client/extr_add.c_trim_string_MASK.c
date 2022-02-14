
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static void
FUNC_2(char **VAR_0)
{
  char *VAR_1 = *VAR_0;
  size_t VAR_2;

  while (FUNC_1(*VAR_1))
    VAR_1++;
  *VAR_0 = VAR_1;
  VAR_2 = FUNC_0(VAR_1);
  while ((VAR_2 > 0) && FUNC_1(VAR_1[VAR_2-1]))
    VAR_2--;
  VAR_1[VAR_2] = '\0';
}
