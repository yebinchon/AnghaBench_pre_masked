
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* uln_prev; } ;
struct TYPE_8__ {TYPE_2__ ul_null_node; scalar_t__ ul_debug; } ;
typedef TYPE_1__ uu_list_t ;
typedef TYPE_2__ uu_list_node_impl_t ;
typedef scalar_t__ uu_list_index_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 void* FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (char*,void*,void*,...) ;

void *
FUNC_5(uu_list_t *VAR_0, uu_list_index_t VAR_1)
{
 uu_list_node_impl_t *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 == ((void*)0))
  VAR_2 = &VAR_0->ul_null_node;

 if (VAR_0->ul_debug) {
  if (!FUNC_2(VAR_0, VAR_1))
   FUNC_4("uu_list_nearest_prev(%p, %p): %s\n",
       (void *)VAR_0, (void *)VAR_1, FUNC_0(VAR_1)?
       "outdated index" : "invalid index");
  if (VAR_2->uln_prev == ((void*)0))
   FUNC_4("uu_list_nearest_prev(%p, %p): out-of-date "
       "index\n", (void *)VAR_0, (void *)VAR_1);
 }

 if ((VAR_2 = VAR_2->uln_prev) == &VAR_0->ul_null_node)
  return (((void*)0));
 else
  return (FUNC_3(VAR_0, VAR_2));
}
