
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ finalized; } ;
struct cgraph_node {int reachable; struct cgraph_node* next_needed; int decl; TYPE_1__ local; } ;


 int VAR_0 ;
 struct cgraph_node* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct cgraph_node *VAR_2)
{
  if (!VAR_2->reachable && VAR_2->local.finalized)
    {
      FUNC_1 (VAR_2->decl);
      VAR_2->reachable = 1;
      FUNC_0 (!VAR_0);

      VAR_2->next_needed = VAR_1;
      VAR_1 = VAR_2;
    }
}
