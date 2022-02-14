
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ulw_dir; TYPE_3__* ulw_next_result; } ;
typedef TYPE_1__ uu_list_walk_t ;
struct TYPE_9__ {struct TYPE_9__* uln_prev; struct TYPE_9__* uln_next; } ;
struct TYPE_8__ {TYPE_3__ ul_null_node; } ;
typedef TYPE_2__ uu_list_t ;
typedef TYPE_3__ uu_list_node_impl_t ;



__attribute__((used)) static uu_list_node_impl_t *
FUNC_0(uu_list_walk_t *VAR_0, uu_list_t *VAR_1)
{
 uu_list_node_impl_t *VAR_2 = VAR_0->ulw_next_result;
 uu_list_node_impl_t *VAR_3;

 if (VAR_2 == &VAR_1->ul_null_node)
  return (((void*)0));

 VAR_3 = (VAR_0->ulw_dir > 0)? VAR_2->uln_next : VAR_2->uln_prev;

 VAR_0->ulw_next_result = VAR_3;
 return (VAR_2);
}
