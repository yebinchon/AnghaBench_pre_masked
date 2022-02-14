
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_edge* callers; } ;
struct cgraph_edge {scalar_t__ inline_failed; struct cgraph_node* caller; struct cgraph_edge* next_caller; struct cgraph_node* callee; } ;


 int FUNC_0 (struct cgraph_edge*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static struct cgraph_edge *
FUNC_2 (struct cgraph_edge *VAR_0)
{
  struct cgraph_node *VAR_1 = VAR_0->caller;
  struct cgraph_node *VAR_2 = VAR_0->callee;
  struct cgraph_edge *VAR_3, *VAR_4;
  int VAR_5 = 0;



  for (VAR_3 = VAR_2->callers; VAR_3; VAR_3 = VAR_4)
    {
      VAR_4 = VAR_3->next_caller;
      if (VAR_3->caller == VAR_1 && VAR_3->inline_failed)
 {
          FUNC_0 (VAR_3, 1);
   if (VAR_3 == VAR_0)
     VAR_0 = VAR_4;
   VAR_5++;
 }
    }
  FUNC_1 (VAR_5);
  return VAR_0;
}
