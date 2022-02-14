
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ua_pool; int ua_tree; } ;
typedef TYPE_1__ uu_avl_t ;
typedef int uu_avl_pool_t ;


 uintptr_t* FUNC_0 (int *,void*) ;
 uintptr_t FUNC_1 (int *) ;
 void* FUNC_2 (int *,void**) ;

void *
FUNC_3(uu_avl_t *VAR_0, void **VAR_1)
{
 void *VAR_2 = FUNC_2(&VAR_0->ua_tree, VAR_1);

 if (VAR_2 != ((void*)0)) {
  uu_avl_pool_t *VAR_3 = VAR_0->ua_pool;
  uintptr_t *VAR_4 = FUNC_0(VAR_3, VAR_2);

  VAR_4[0] = FUNC_1(VAR_3);
  VAR_4[1] = 0;
 }
 return (VAR_2);
}
