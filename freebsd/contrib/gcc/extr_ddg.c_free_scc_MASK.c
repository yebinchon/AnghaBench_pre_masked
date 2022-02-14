
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ddg_scc_ptr ;
struct TYPE_4__ {scalar_t__ num_backarcs; struct TYPE_4__* backarcs; int nodes; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (ddg_scc_ptr VAR_0)
{
  if (!VAR_0)
    return;

  FUNC_1 (VAR_0->nodes);
  if (VAR_0->num_backarcs > 0)
    FUNC_0 (VAR_0->backarcs);
  FUNC_0 (VAR_0);
}
