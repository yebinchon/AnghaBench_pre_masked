
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_varpool_node {struct cgraph_varpool_node* next_needed; } ;
typedef int FILE ;


 struct cgraph_varpool_node* VAR_0 ;
 int FUNC_0 (int *,struct cgraph_varpool_node*) ;
 int FUNC_1 (int *,char*) ;

void
FUNC_2 (FILE *VAR_1)
{
  struct cgraph_varpool_node *VAR_2;

  FUNC_1 (VAR_1, "variable pool:\n\n");
  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next_needed)
    FUNC_0 (VAR_1, VAR_2);
}
