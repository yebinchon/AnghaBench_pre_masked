
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int * call_site_hash; struct cgraph_edge* callees; } ;
struct cgraph_edge {struct cgraph_edge* next_callee; } ;


 int FUNC_0 (struct cgraph_edge*) ;
 int FUNC_1 (int *) ;

void
FUNC_2 (struct cgraph_node *VAR_0)
{
  struct cgraph_edge *VAR_1;




  for (VAR_1 = VAR_0->callees; VAR_1; VAR_1 = VAR_1->next_callee)
    FUNC_0 (VAR_1);
  VAR_0->callees = ((void*)0);
  if (VAR_0->call_site_hash)
    {
      FUNC_1 (VAR_0->call_site_hash);
      VAR_0->call_site_hash = ((void*)0);
    }
}
