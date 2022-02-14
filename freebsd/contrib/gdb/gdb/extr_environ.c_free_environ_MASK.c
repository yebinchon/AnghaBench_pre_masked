
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ {char** vector; } ;


 int FUNC_0 (struct environ*) ;

void
FUNC_1 (struct environ *VAR_0)
{
  char **VAR_1 = VAR_0->vector;

  while (*VAR_1)
    FUNC_0 (*VAR_1++);

  FUNC_0 (VAR_0);
}
