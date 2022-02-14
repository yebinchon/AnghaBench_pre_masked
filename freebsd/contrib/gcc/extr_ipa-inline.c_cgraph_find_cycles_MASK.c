
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* aux; struct cgraph_edge* callees; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_edge* next_callee; } ;
typedef int htab_t ;


 int VAR_0 ;
 char* FUNC_0 (struct cgraph_node*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 void** FUNC_2 (int ,struct cgraph_node*,int ) ;

__attribute__((used)) static void
FUNC_3 (struct cgraph_node *VAR_2, htab_t VAR_3)
{
  struct cgraph_edge *VAR_4;

  if (VAR_2->aux)
    {
      void **VAR_5;
      VAR_5 = FUNC_2 (VAR_3, VAR_2, VAR_0);
      if (!*VAR_5)
 {
   if (VAR_1)
     FUNC_1 (VAR_1, "Cycle contains %s\n", FUNC_0 (VAR_2));
   *VAR_5 = VAR_2;
 }
      return;
    }

  VAR_2->aux = VAR_2;
  for (VAR_4 = VAR_2->callees; VAR_4; VAR_4 = VAR_4->next_callee)
    FUNC_3 (VAR_4->callee, VAR_3);
  VAR_2->aux = 0;
}
