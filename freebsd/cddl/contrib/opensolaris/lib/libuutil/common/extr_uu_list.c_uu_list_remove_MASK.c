
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* ulw_next_result; scalar_t__ ulw_robust; struct TYPE_12__* ulw_next; } ;
typedef TYPE_2__ uu_list_walk_t ;
struct TYPE_13__ {int ul_pool; int ul_numnodes; TYPE_2__ ul_null_walk; int ul_index; scalar_t__ ul_debug; } ;
typedef TYPE_3__ uu_list_t ;
struct TYPE_14__ {TYPE_1__* uln_prev; TYPE_8__* uln_next; } ;
typedef TYPE_4__ uu_list_node_impl_t ;
struct TYPE_15__ {TYPE_1__* uln_prev; } ;
struct TYPE_11__ {TYPE_8__* uln_next; } ;


 TYPE_4__* FUNC_0 (TYPE_3__*,void*) ;
 int FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (char*,void*,void*) ;

void
FUNC_5(uu_list_t *VAR_0, void *VAR_1)
{
 uu_list_node_impl_t *VAR_2 = FUNC_0(VAR_0, VAR_1);
 uu_list_walk_t *VAR_3;

 if (VAR_0->ul_debug) {
  if (VAR_2->uln_prev == ((void*)0))
   FUNC_4("uu_list_remove(%p, %p): elem not on list\n",
       (void *)VAR_0, VAR_1);



  VAR_0->ul_index = FUNC_1(VAR_0->ul_index);
 }





 for (VAR_3 = VAR_0->ul_null_walk.ulw_next; VAR_3 != &VAR_0->ul_null_walk;
     VAR_3 = VAR_3->ulw_next) {
  if (VAR_3->ulw_robust) {
   if (VAR_2 == VAR_3->ulw_next_result)
    (void) FUNC_3(VAR_3, VAR_0);
  } else if (VAR_3->ulw_next_result != ((void*)0)) {
   FUNC_4("uu_list_remove(%p, %p): active non-robust "
       "walker\n", (void *)VAR_0, VAR_1);
  }
 }

 VAR_2->uln_next->uln_prev = VAR_2->uln_prev;
 VAR_2->uln_prev->uln_next = VAR_2->uln_next;

 VAR_0->ul_numnodes--;

 VAR_2->uln_next = FUNC_2(VAR_0->ul_pool);
 VAR_2->uln_prev = ((void*)0);
}
