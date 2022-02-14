
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* next; } ;
typedef int FILE ;


 struct cgraph_node* VAR_0 ;
 int FUNC_0 (int *,struct cgraph_node*) ;
 int FUNC_1 (int *,char*) ;

void
FUNC_2 (FILE *VAR_1)
{
  struct cgraph_node *VAR_2;

  FUNC_1 (VAR_1, "callgraph:\n\n");
  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    FUNC_0 (VAR_1, VAR_2);
}
