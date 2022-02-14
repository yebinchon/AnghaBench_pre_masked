
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ddg_all_sccs_ptr ;
struct TYPE_4__ {int num_sccs; int * sccs; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (ddg_all_sccs_ptr VAR_0)
{
  int VAR_1;

  if (!VAR_0)
    return;

  for (VAR_1 = 0; VAR_1 < VAR_0->num_sccs; VAR_1++)
    FUNC_1 (VAR_0->sccs[VAR_1]);

  FUNC_0 (VAR_0);
}
