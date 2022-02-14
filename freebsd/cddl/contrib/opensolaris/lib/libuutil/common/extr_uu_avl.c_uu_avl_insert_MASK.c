
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ua_tree; int ua_index; int * ua_pool; scalar_t__ ua_debug; } ;
typedef TYPE_1__ uu_avl_t ;
typedef int uu_avl_pool_t ;
typedef scalar_t__ uu_avl_index_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 uintptr_t* FUNC_4 (int *,void*) ;
 uintptr_t FUNC_5 (int *) ;
 int FUNC_6 (int *,void*,int ) ;
 int FUNC_7 (char*,void*,void*,void*,...) ;

void
FUNC_8(uu_avl_t *VAR_0, void *VAR_1, uu_avl_index_t VAR_2)
{
 if (VAR_0->ua_debug) {
  uu_avl_pool_t *VAR_3 = VAR_0->ua_pool;
  uintptr_t *VAR_4 = FUNC_4(VAR_3, VAR_1);

  if (VAR_4[1] != 0)
   FUNC_7("uu_avl_insert(%p, %p, %p): node already "
       "in tree, or corrupt\n",
       (void *)VAR_0, VAR_1, (void *)VAR_2);
  if (VAR_4[0] == 0)
   FUNC_7("uu_avl_insert(%p, %p, %p): node not "
       "initialized\n",
       (void *)VAR_0, VAR_1, (void *)VAR_2);
  if (VAR_4[0] != FUNC_5(VAR_3))
   FUNC_7("uu_avl_insert(%p, %p, %p): node from "
       "other pool, or corrupt\n",
       (void *)VAR_0, VAR_1, (void *)VAR_2);

  if (!FUNC_3(VAR_0, VAR_2))
   FUNC_7("uu_avl_insert(%p, %p, %p): %s\n",
       (void *)VAR_0, VAR_1, (void *)VAR_2,
       FUNC_0(VAR_2)? "outdated index" :
       "invalid index");




  VAR_0->ua_index = FUNC_2(VAR_0->ua_index);
 }
 FUNC_6(&VAR_0->ua_tree, VAR_1, FUNC_1(VAR_2));
}
