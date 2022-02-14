
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cgraph_node {int dummy; } ;
struct cgraph_edge {int inline_failed; struct cgraph_edge* next_callee; TYPE_5__* callee; TYPE_4__* caller; int loop_nest; int count; } ;
struct TYPE_8__ {TYPE_4__* inlined_to; scalar_t__ insns; } ;
struct TYPE_10__ {struct cgraph_edge* callees; TYPE_3__ global; int decl; int needed; TYPE_1__* callers; } ;
struct TYPE_7__ {TYPE_4__* inlined_to; } ;
struct TYPE_9__ {TYPE_2__ global; } ;
struct TYPE_6__ {int next_caller; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct cgraph_node* FUNC_1 (TYPE_5__*,int ,int ,int) ;
 int FUNC_2 (struct cgraph_edge*,struct cgraph_node*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4 (struct cgraph_edge *VAR_3, bool VAR_4, bool VAR_5)
{
  if (VAR_4)
    {


      if (!VAR_3->callee->callers->next_caller
   && !VAR_3->callee->needed
   && VAR_0)
 {
   FUNC_3 (!VAR_3->callee->global.inlined_to);
   if (FUNC_0 (VAR_3->callee->decl))
     VAR_2 -= VAR_3->callee->global.insns, VAR_1++;
   VAR_4 = 0;
 }
      else
 {
   struct cgraph_node *VAR_6;
   VAR_6 = FUNC_1 (VAR_3->callee, VAR_3->count, VAR_3->loop_nest,
     VAR_5);
   FUNC_2 (VAR_3, VAR_6);
 }
    }

  if (VAR_3->caller->global.inlined_to)
    VAR_3->callee->global.inlined_to = VAR_3->caller->global.inlined_to;
  else
    VAR_3->callee->global.inlined_to = VAR_3->caller;


  for (VAR_3 = VAR_3->callee->callees; VAR_3; VAR_3 = VAR_3->next_callee)
    if (!VAR_3->inline_failed)
      FUNC_4 (VAR_3, VAR_4, VAR_5);
}
