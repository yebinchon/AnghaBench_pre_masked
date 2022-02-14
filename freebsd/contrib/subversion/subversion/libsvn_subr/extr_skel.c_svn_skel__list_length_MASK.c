
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* children; scalar_t__ is_atom; } ;
typedef TYPE_1__ svn_skel_t ;



int
FUNC_0(const svn_skel_t *VAR_0)
{
  int VAR_1 = 0;
  const svn_skel_t *VAR_2;

  if ((! VAR_0) || VAR_0->is_atom)
    return -1;

  for (VAR_2 = VAR_0->children; VAR_2; VAR_2 = VAR_2->next)
    VAR_1++;

  return VAR_1;
}
