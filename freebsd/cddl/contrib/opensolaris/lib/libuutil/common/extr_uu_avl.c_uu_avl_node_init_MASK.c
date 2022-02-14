
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {uintptr_t uap_objsize; uintptr_t uap_nodeoffset; int uap_name; scalar_t__ uap_debug; } ;
typedef TYPE_1__ uu_avl_pool_t ;
typedef int uu_avl_node_t ;


 uintptr_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,void*,void*,void*,int ,long,long) ;

void
FUNC_2(void *VAR_0, uu_avl_node_t *VAR_1, uu_avl_pool_t *VAR_2)
{
 uintptr_t *VAR_3 = (uintptr_t *)VAR_1;

 if (VAR_2->uap_debug) {
  uintptr_t VAR_4 = (uintptr_t)VAR_1 - (uintptr_t)VAR_0;
  if (VAR_4 + sizeof (*VAR_1) > VAR_2->uap_objsize) {
   FUNC_1("uu_avl_node_init(%p, %p, %p (\"%s\")): "
       "offset %ld doesn't fit in object (size %ld)\n",
       VAR_0, (void *)VAR_1, (void *)VAR_2, VAR_2->uap_name,
       (long)VAR_4, (long)VAR_2->uap_objsize);
  }
  if (VAR_4 != VAR_2->uap_nodeoffset) {
   FUNC_1("uu_avl_node_init(%p, %p, %p (\"%s\")): "
       "offset %ld doesn't match pool's offset (%ld)\n",
       VAR_0, (void *)VAR_1, (void *)VAR_2, VAR_2->uap_name,
       (long)VAR_4, (long)VAR_2->uap_objsize);
  }
 }

 VAR_3[0] = FUNC_0(VAR_2);
 VAR_3[1] = 0;
}
