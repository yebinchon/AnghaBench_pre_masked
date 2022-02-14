
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inlinable; scalar_t__ redefined_extern_inline; } ;
struct cgraph_node {TYPE_1__ local; struct cgraph_edge* callers; } ;
struct cgraph_edge {int inline_failed; TYPE_3__* callee; struct cgraph_edge* next_caller; } ;
struct TYPE_5__ {int inlined_to; } ;
struct TYPE_6__ {TYPE_2__ global; } ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (struct cgraph_node *VAR_0)
{
  struct cgraph_edge *VAR_1;

  for (VAR_1 = VAR_0->callers; VAR_1; VAR_1 = VAR_1->next_caller)
    {
      FUNC_1 (!VAR_1->callee->global.inlined_to);
      FUNC_1 (VAR_1->inline_failed);
      if (VAR_0->local.redefined_extern_inline)
 VAR_1->inline_failed = FUNC_0("redefined extern inline functions are not "
      "considered for inlining");
      else if (!VAR_0->local.inlinable)
 VAR_1->inline_failed = FUNC_0("function not inlinable");
      else
 VAR_1->inline_failed = FUNC_0("function not considered for inlining");
    }
}
