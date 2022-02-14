
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_varpool_node {int needed; int decl; scalar_t__ finalized; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cgraph_varpool_node*) ;

void
FUNC_2 (struct cgraph_varpool_node *VAR_0)
{
  if (!VAR_0->needed && VAR_0->finalized
      && !FUNC_0 (VAR_0->decl))
    FUNC_1 (VAR_0);
  VAR_0->needed = 1;
}
