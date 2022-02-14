
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* uln_prev; } ;
struct TYPE_6__ {TYPE_2__ ul_null_node; } ;
typedef TYPE_1__ uu_list_t ;
typedef TYPE_2__ uu_list_node_impl_t ;


 void* FUNC_0 (TYPE_1__*,TYPE_2__*) ;

void *
FUNC_1(uu_list_t *VAR_0)
{
 uu_list_node_impl_t *VAR_1 = VAR_0->ul_null_node.uln_prev;
 if (VAR_1 == &VAR_0->ul_null_node)
  return (((void*)0));
 return (FUNC_0(VAR_0, VAR_1));
}
