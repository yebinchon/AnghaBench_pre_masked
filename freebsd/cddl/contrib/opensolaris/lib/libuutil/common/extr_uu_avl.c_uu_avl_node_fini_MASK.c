
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uap_name; scalar_t__ uap_debug; } ;
typedef TYPE_1__ uu_avl_pool_t ;
typedef int uu_avl_node_t ;


 uintptr_t VAR_0 ;
 uintptr_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,void*,void*,void*,int ) ;

void
FUNC_2(void *VAR_1, uu_avl_node_t *VAR_2, uu_avl_pool_t *VAR_3)
{
 uintptr_t *VAR_4 = (uintptr_t *)VAR_2;

 if (VAR_3->uap_debug) {
  if (VAR_4[0] == VAR_0 && VAR_4[1] == VAR_0) {
   FUNC_1("uu_avl_node_fini(%p, %p, %p (\"%s\")): "
       "node already finied\n",
       VAR_1, (void *)VAR_2, (void *)VAR_3, VAR_3->uap_name);
  }
  if (VAR_4[0] != FUNC_0(VAR_3) || VAR_4[1] != 0) {
   FUNC_1("uu_avl_node_fini(%p, %p, %p (\"%s\")): "
       "node corrupt, in tree, or in different pool\n",
       VAR_1, (void *)VAR_2, (void *)VAR_3, VAR_3->uap_name);
  }
 }

 VAR_4[0] = VAR_0;
 VAR_4[1] = VAR_0;
 VAR_4[2] = VAR_0;
}
