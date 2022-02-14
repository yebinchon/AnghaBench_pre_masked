
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int estimated_growth; scalar_t__ insns; } ;
struct cgraph_node {TYPE_2__ global; int decl; int needed; struct cgraph_edge* callers; } ;
struct cgraph_edge {TYPE_3__* caller; scalar_t__ inline_failed; struct cgraph_edge* next_caller; } ;
struct TYPE_4__ {scalar_t__ insns; } ;
struct TYPE_6__ {TYPE_1__ global; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,TYPE_3__*,struct cgraph_node*) ;

__attribute__((used)) static int
FUNC_2 (struct cgraph_node *VAR_1)
{
  int VAR_2 = 0;
  struct cgraph_edge *VAR_3;
  if (VAR_1->global.estimated_growth != VAR_0)
    return VAR_1->global.estimated_growth;

  for (VAR_3 = VAR_1->callers; VAR_3; VAR_3 = VAR_3->next_caller)
    if (VAR_3->inline_failed)
      VAR_2 += (FUNC_1 (1, VAR_3->caller, VAR_1)
   - VAR_3->caller->global.insns);




  if (!VAR_1->needed && !FUNC_0 (VAR_1->decl))
    VAR_2 -= VAR_1->global.insns;

  VAR_1->global.estimated_growth = VAR_2;
  return VAR_2;
}
