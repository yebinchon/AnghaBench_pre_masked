
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ddg_scc_ptr ;
typedef TYPE_1__* ddg_all_sccs_ptr ;
struct TYPE_3__ {int num_sccs; int * sccs; } ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1 (ddg_all_sccs_ptr VAR_0, ddg_scc_ptr VAR_1)
{
  int VAR_2 = (VAR_0->num_sccs + 1) * sizeof (ddg_scc_ptr);

  VAR_0->sccs = (ddg_scc_ptr *) FUNC_0 (VAR_0->sccs, VAR_2);
  VAR_0->sccs[VAR_0->num_sccs++] = VAR_1;
}
