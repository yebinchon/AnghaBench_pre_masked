
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0)
{
 size_t VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == 0)
  return;
 if (VAR_0[VAR_1 - 1] == '\n')
  VAR_0[VAR_1 - 1] = 0;
}
