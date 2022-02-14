
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct cgraph_varpool_node {int force_output; } ;
struct TYPE_2__ {int finalized; int vtable_method; } ;
struct cgraph_node {TYPE_1__ local; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cgraph_node*) ;
 struct cgraph_node* FUNC_3 (int ) ;
 int FUNC_4 (struct cgraph_varpool_node*) ;
 struct cgraph_varpool_node* FUNC_5 (int ) ;

void
FUNC_6 (tree VAR_3)
{
  if (FUNC_1 (VAR_3) == VAR_0)
    {




      struct cgraph_node *VAR_4 = FUNC_3 (VAR_3);
      if (!FUNC_0 (VAR_3)
   && (!VAR_4->local.vtable_method || !VAR_2
       || !VAR_4->local.finalized))
 FUNC_2 (VAR_4);
    }
  else if (FUNC_1 (VAR_3) == VAR_1)
    {
      struct cgraph_varpool_node *VAR_5 = FUNC_5 (VAR_3);
      FUNC_4 (VAR_5);


      VAR_5->force_output = 1;
    }


}
