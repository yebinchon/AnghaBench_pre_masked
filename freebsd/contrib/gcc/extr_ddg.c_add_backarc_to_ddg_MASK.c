
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ddg_ptr ;
typedef int ddg_edge_ptr ;
struct TYPE_4__ {int num_backarcs; int * backarcs; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2 (ddg_ptr VAR_0, ddg_edge_ptr VAR_1)
{
  int VAR_2 = (VAR_0->num_backarcs + 1) * sizeof (ddg_edge_ptr);

  FUNC_0 (VAR_0, VAR_1);
  VAR_0->backarcs = (ddg_edge_ptr *) FUNC_1 (VAR_0->backarcs, VAR_2);
  VAR_0->backarcs[VAR_0->num_backarcs++] = VAR_1;
}
