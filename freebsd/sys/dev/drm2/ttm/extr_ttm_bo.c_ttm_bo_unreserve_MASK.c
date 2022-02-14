
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {struct ttm_bo_global* glob; } ;
struct ttm_bo_global {int lru_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ttm_buffer_object*) ;

void FUNC_3(struct ttm_buffer_object *VAR_0)
{
 struct ttm_bo_global *VAR_1 = VAR_0->glob;

 FUNC_0(&VAR_1->lru_lock);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->lru_lock);
}
