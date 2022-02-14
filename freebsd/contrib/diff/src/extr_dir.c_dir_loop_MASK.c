
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comparison {TYPE_1__* file; struct comparison* parent; } ;
struct TYPE_2__ {int stat; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1 (struct comparison const *VAR_0, int VAR_1)
{
  struct comparison const *VAR_2 = VAR_0;
  while ((VAR_2 = VAR_2->parent))
    if (0 < FUNC_0 (&VAR_2->file[VAR_1].stat, &VAR_0->file[VAR_1].stat))
      return 1;
  return 0;
}
