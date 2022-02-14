
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ul_numnodes; int ul_index; int ul_pool; scalar_t__ ul_debug; } ;
typedef TYPE_1__ uu_list_t ;
struct TYPE_11__ {struct TYPE_11__* uln_next; struct TYPE_11__* uln_prev; } ;
typedef TYPE_2__ uu_list_node_impl_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (char*,void*,void*,void*) ;

__attribute__((used)) static void
FUNC_4(uu_list_t *VAR_0, uu_list_node_impl_t *VAR_1, uu_list_node_impl_t *VAR_2,
    uu_list_node_impl_t *VAR_3)
{
 if (VAR_0->ul_debug) {
  if (VAR_3->uln_prev != VAR_2 || VAR_2->uln_next != VAR_3)
   FUNC_3("insert(%p): internal error: %p and %p not "
       "neighbors\n", (void *)VAR_0, (void *)VAR_3,
       (void *)VAR_2);

  if (VAR_1->uln_next != FUNC_2(VAR_0->ul_pool) ||
      VAR_1->uln_prev != ((void*)0)) {
   FUNC_3("insert(%p): elem %p node %p corrupt, "
       "not initialized, or already in a list.\n",
       (void *)VAR_0, FUNC_1(VAR_0, VAR_1), (void *)VAR_1);
  }



  VAR_0->ul_index = FUNC_0(VAR_0->ul_index);
 }
 VAR_1->uln_next = VAR_3;
 VAR_1->uln_prev = VAR_2;
 VAR_3->uln_prev = VAR_1;
 VAR_2->uln_next = VAR_1;

 VAR_0->ul_numnodes++;
}
