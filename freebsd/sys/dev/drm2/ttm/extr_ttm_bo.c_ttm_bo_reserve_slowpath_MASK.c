
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_buffer_object {struct ttm_bo_global* glob; } ;
struct ttm_bo_global {int lru_lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int) ;
 int FUNC_5 (struct ttm_buffer_object*,int,int ) ;

int FUNC_6(struct ttm_buffer_object *VAR_0,
       bool VAR_1, uint32_t VAR_2)
{
 struct ttm_bo_global *VAR_3 = VAR_0->glob;
 int VAR_4, VAR_5;

 FUNC_1(&VAR_3->lru_lock);
 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(!VAR_5)) {
  VAR_4 = FUNC_3(VAR_0);
  FUNC_2(&VAR_3->lru_lock);
  FUNC_4(VAR_0, VAR_4, 1);
 } else
  FUNC_2(&VAR_3->lru_lock);
 return VAR_5;
}
