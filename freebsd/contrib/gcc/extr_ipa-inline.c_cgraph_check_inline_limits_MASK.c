
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int insns; struct cgraph_node* inlined_to; } ;
struct TYPE_3__ {int self_insns; } ;
struct cgraph_node {TYPE_2__ global; TYPE_1__ local; struct cgraph_edge* callees; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_edge* next_callee; } ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct cgraph_node*,struct cgraph_node*) ;

__attribute__((used)) static bool
FUNC_3 (struct cgraph_node *VAR_2, struct cgraph_node *VAR_3,
       const char **VAR_4, bool VAR_5)
{
  int VAR_6 = 0;
  struct cgraph_edge *VAR_7;
  int VAR_8;
  int VAR_9;

  if (VAR_5)
    VAR_6 = 1;
  else
    for (VAR_7 = VAR_2->callees; VAR_7; VAR_7 = VAR_7->next_callee)
      if (VAR_7->callee == VAR_3)
 VAR_6++;

  if (VAR_2->global.inlined_to)
    VAR_2 = VAR_2->global.inlined_to;



  if (VAR_2->local.self_insns > VAR_3->local.self_insns)
    VAR_9 = VAR_2->local.self_insns;
  else
    VAR_9 = VAR_3->local.self_insns;

  VAR_9 += VAR_9 * FUNC_1 (VAR_0) / 100;



  VAR_8 = FUNC_2 (VAR_6, VAR_2, VAR_3);
  if (VAR_8 >= VAR_2->global.insns
      && VAR_8 > FUNC_1 (VAR_1)
      && VAR_8 > VAR_9)
    {
      if (VAR_4)
        *VAR_4 = FUNC_0("--param large-function-growth limit reached");
      return 0;
    }
  return 1;
}
