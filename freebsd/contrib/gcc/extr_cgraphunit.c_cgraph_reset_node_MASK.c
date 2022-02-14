
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int redefined_extern_inline; int finalized; struct cgraph_node* inlined_to; } ;
struct cgraph_node {int analyzed; scalar_t__ reachable; struct cgraph_node* next_needed; TYPE_1__ global; struct cgraph_node* next; TYPE_1__ local; TYPE_1__ rtl; int output; } ;


 int FUNC_0 (struct cgraph_node*) ;
 struct cgraph_node* VAR_0 ;
 struct cgraph_node* VAR_1 ;
 int FUNC_1 (struct cgraph_node*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_4 (struct cgraph_node *VAR_3)
{






  FUNC_2 (!VAR_3->output);


  FUNC_3 (&VAR_3->local, 0, sizeof (VAR_3->local));
  FUNC_3 (&VAR_3->global, 0, sizeof (VAR_3->global));
  FUNC_3 (&VAR_3->rtl, 0, sizeof (VAR_3->rtl));
  VAR_3->analyzed = 0;
  VAR_3->local.redefined_extern_inline = 1;
  VAR_3->local.finalized = 0;

  if (!VAR_2)
    {
      struct cgraph_node *VAR_4, *VAR_5;

      for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_5)
 {
   VAR_5 = VAR_4->next;
   if (VAR_4->global.inlined_to == VAR_3)
     FUNC_1 (VAR_4);
 }
    }

  FUNC_0 (VAR_3);



  if (VAR_3->reachable && !VAR_2)
    {
      struct cgraph_node *VAR_6;

      for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next_needed)
 if (VAR_6 == VAR_3)
   break;
      if (!VAR_6)
 VAR_3->reachable = 0;
    }
}
