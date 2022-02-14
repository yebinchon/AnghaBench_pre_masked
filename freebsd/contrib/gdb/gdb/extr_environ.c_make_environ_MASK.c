
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ {int allocated; char** vector; } ;


 scalar_t__ FUNC_0 (int) ;

struct environ *
FUNC_1 (void)
{
  struct environ *VAR_0;

  VAR_0 = (struct environ *) FUNC_0 (sizeof (struct environ));

  VAR_0->allocated = 10;
  VAR_0->vector = (char **) FUNC_0 ((VAR_0->allocated + 1) * sizeof (char *));
  VAR_0->vector[0] = 0;
  return VAR_0;
}
