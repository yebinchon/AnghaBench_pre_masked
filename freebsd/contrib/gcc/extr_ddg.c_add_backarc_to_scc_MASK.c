
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ddg_scc_ptr ;
typedef int ddg_edge_ptr ;
struct TYPE_3__ {int num_backarcs; int * backarcs; } ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1 (ddg_scc_ptr VAR_0, ddg_edge_ptr VAR_1)
{
  int VAR_2 = (VAR_0->num_backarcs + 1) * sizeof (ddg_edge_ptr);

  VAR_0->backarcs = (ddg_edge_ptr *) FUNC_0 (VAR_0->backarcs, VAR_2);
  VAR_0->backarcs[VAR_0->num_backarcs++] = VAR_1;
}
