
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {uintptr_t ulp_objsize; uintptr_t ulp_nodeoffset; int ulp_name; scalar_t__ ulp_debug; } ;
typedef TYPE_1__ uu_list_pool_t ;
typedef int uu_list_node_t ;
struct TYPE_6__ {int * uln_prev; int uln_next; } ;
typedef TYPE_2__ uu_list_node_impl_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,void*,void*,void*,int ,long,long) ;

void
FUNC_2(void *VAR_0, uu_list_node_t *VAR_1, uu_list_pool_t *VAR_2)
{
 uu_list_node_impl_t *VAR_3 = (uu_list_node_impl_t *)VAR_1;

 if (VAR_2->ulp_debug) {
  uintptr_t VAR_4 = (uintptr_t)VAR_3 - (uintptr_t)VAR_0;
  if (VAR_4 + sizeof (*VAR_3) > VAR_2->ulp_objsize) {
   FUNC_1("uu_list_node_init(%p, %p, %p (\"%s\")): "
       "offset %ld doesn't fit in object (size %ld)\n",
       VAR_0, (void *)VAR_3, (void *)VAR_2, VAR_2->ulp_name,
       (long)VAR_4, (long)VAR_2->ulp_objsize);
  }
  if (VAR_4 != VAR_2->ulp_nodeoffset) {
   FUNC_1("uu_list_node_init(%p, %p, %p (\"%s\")): "
       "offset %ld doesn't match pool's offset (%ld)\n",
       VAR_0, (void *)VAR_3, (void *)VAR_2, VAR_2->ulp_name,
       (long)VAR_4, (long)VAR_2->ulp_objsize);
  }
 }
 VAR_3->uln_next = FUNC_0(VAR_2);
 VAR_3->uln_prev = ((void*)0);
}
