
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ inlinable; } ;
struct cgraph_node {TYPE_1__ local; struct cgraph_edge* callees; } ;
struct cgraph_edge {struct cgraph_node* callee; scalar_t__ inline_failed; struct cgraph_edge* next_callee; } ;
typedef int htab_t ;


 int FUNC_0 (struct cgraph_edge*,int) ;
 char* FUNC_1 (struct cgraph_node*) ;
 int FUNC_2 (struct cgraph_node*,struct cgraph_node*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__,char*,char*) ;
 int FUNC_4 (int ,struct cgraph_node*) ;

__attribute__((used)) static void
FUNC_5 (struct cgraph_node *VAR_1, htab_t VAR_2)
{
  struct cgraph_edge *VAR_3;

  for (VAR_3 = VAR_1->callees; VAR_3; VAR_3 = VAR_3->next_callee)
    {


      if (VAR_3->inline_failed
   && VAR_3->callee->local.inlinable
   && !FUNC_2 (VAR_1, VAR_3->callee,
          &VAR_3->inline_failed)
   && !FUNC_4 (VAR_2, VAR_3->callee))
 {
   if (VAR_0)
         FUNC_3 (VAR_0, " inlining %s", FUNC_1 (VAR_3->callee));
          FUNC_0 (VAR_3, 1);
   FUNC_5 (VAR_3->callee, VAR_2);
 }
      else if (VAR_0)
 FUNC_3 (VAR_0, " !inlining %s", FUNC_1 (VAR_3->callee));
    }
}
