
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_edge* callees; struct cgraph_node* next; } ;
struct cgraph_edge {int callee; struct cgraph_edge* next_callee; } ;


 struct cgraph_node* VAR_0 ;
 int FUNC_0 (struct cgraph_edge*) ;
 int FUNC_1 (struct cgraph_edge*) ;
 scalar_t__ FUNC_2 (struct cgraph_edge*) ;
 int FUNC_3 (struct cgraph_edge*,int ) ;
 int FUNC_4 (struct cgraph_node*) ;
 int FUNC_5 (struct cgraph_node*) ;
 int FUNC_6 (struct cgraph_node*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct cgraph_node*) ;
 int FUNC_10 (struct cgraph_node*) ;

__attribute__((used)) static void
FUNC_11 (void)
{
  struct cgraph_node *VAR_1;
  struct cgraph_edge *VAR_2;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {
      FUNC_6 (VAR_1);
      FUNC_5 (VAR_1);
      FUNC_10 (VAR_1);
      FUNC_4 (VAR_1);
      FUNC_9 (VAR_1);
    }
  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {

      for (VAR_2 = VAR_1->callees; VAR_2; VAR_2 = VAR_2->next_callee)
 {
   FUNC_0 (VAR_2);
   if (FUNC_2 (VAR_2)
       != FUNC_7 (VAR_2->callee))
     {


       FUNC_3 (VAR_2, 0);
       FUNC_8 (VAR_2->callee, 0);
     }
   else
     FUNC_1 (VAR_2);
 }
    }
}
