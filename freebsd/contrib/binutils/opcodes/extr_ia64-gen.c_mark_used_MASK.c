
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iclass {int terminal_resolved; int nsubs; size_t* subs; int nxsubs; size_t* xsubs; scalar_t__ orphan; } ;


 struct iclass** VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct iclass *VAR_1, int VAR_2)
{
  int VAR_3;

  VAR_1->orphan = 0;
  if (VAR_2)
    VAR_1->terminal_resolved = 1;

  for (VAR_3 = 0; VAR_3 < VAR_1->nsubs; VAR_3++)
    FUNC_0 (VAR_0[VAR_1->subs[VAR_3]], VAR_2);

  for (VAR_3 = 0; VAR_3 < VAR_1->nxsubs; VAR_3++)
    FUNC_0 (VAR_0[VAR_1->xsubs[VAR_3]], VAR_2);
}
