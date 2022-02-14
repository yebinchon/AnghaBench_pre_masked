
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int cpu_writers; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int fence_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int,int,int ) ;
 int FUNC_5 (struct ttm_buffer_object*) ;
 int FUNC_6 (struct ttm_buffer_object*,int,int,int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ttm_buffer_object *VAR_0, bool VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_0->bdev;
 int VAR_3 = 0;





 VAR_3 = FUNC_4(VAR_0, 1, VAR_1, 0, 0);
 if (FUNC_7(VAR_3 != 0))
  return VAR_3;
 FUNC_2(&VAR_2->fence_lock);
 VAR_3 = FUNC_6(VAR_0, 0, 1, VAR_1);
 FUNC_3(&VAR_2->fence_lock);
 if (FUNC_1(VAR_3 == 0))
  FUNC_0(&VAR_0->cpu_writers);
 FUNC_5(VAR_0);
 return VAR_3;
}
