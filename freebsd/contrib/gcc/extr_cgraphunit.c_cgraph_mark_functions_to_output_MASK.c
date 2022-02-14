
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct TYPE_2__ {scalar_t__ inlined_to; } ;
struct cgraph_node {int output; TYPE_1__ global; scalar_t__ reachable; scalar_t__ needed; struct cgraph_edge* callers; int decl; struct cgraph_node* next; } ;
struct cgraph_edge {scalar_t__ inline_failed; struct cgraph_edge* next_caller; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct cgraph_node* VAR_0 ;
 int FUNC_3 (int ,struct cgraph_node*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  struct cgraph_node *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    {
      tree VAR_3 = VAR_2->decl;
      struct cgraph_edge *VAR_4;

      FUNC_4 (!VAR_2->output);

      for (VAR_4 = VAR_2->callers; VAR_4; VAR_4 = VAR_4->next_caller)
 if (VAR_4->inline_failed)
   break;




      if (FUNC_1 (VAR_3)
   && !VAR_2->global.inlined_to
   && (VAR_2->needed
       || (VAR_4 && VAR_2->reachable))
   && !FUNC_2 (VAR_3)
   && !FUNC_0 (VAR_3))
 VAR_2->output = 1;
      else
 {
   FUNC_4 (VAR_2->global.inlined_to || !FUNC_1 (VAR_3)
        || FUNC_0 (VAR_3));

 }

    }
}
