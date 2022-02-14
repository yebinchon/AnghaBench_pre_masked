
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int ddestroy; int list_kref; int reserved; scalar_t__ sync_obj; struct ttm_bo_global* glob; struct ttm_bo_device* bdev; } ;
struct ttm_bo_global {int lru_lock; } ;
struct ttm_bo_driver {int (* sync_obj_unref ) (void**) ;int (* sync_obj_flush ) (void*) ;void* (* sync_obj_ref ) (scalar_t__) ;} ;
struct ttm_bo_device {int wq; int ddestroy; int fence_lock; struct ttm_bo_driver* driver; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void**) ;
 int FUNC_8 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_9 (struct ttm_buffer_object*) ;
 int FUNC_10 (struct ttm_buffer_object*) ;
 int FUNC_11 (struct ttm_buffer_object*,int,int) ;
 int FUNC_12 (struct ttm_buffer_object*,int,int,int,int ) ;
 int FUNC_13 (struct ttm_buffer_object*,int,int,int) ;
 int FUNC_14 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_15(struct ttm_buffer_object *VAR_2)
{
 struct ttm_bo_device *VAR_3 = VAR_2->bdev;
 struct ttm_bo_global *VAR_4 = VAR_2->glob;
 struct ttm_bo_driver *VAR_5 = VAR_3->driver;
 void *VAR_6 = ((void*)0);
 int VAR_7;
 int VAR_8;

 FUNC_2(&VAR_4->lru_lock);
 VAR_8 = FUNC_12(VAR_2, 0, 1, 0, 0);

 FUNC_2(&VAR_3->fence_lock);
 (void) FUNC_13(VAR_2, 0, 0, 1);
 if (!VAR_8 && !VAR_2->sync_obj) {
  FUNC_3(&VAR_3->fence_lock);
  VAR_7 = FUNC_10(VAR_2);

  FUNC_3(&VAR_4->lru_lock);
  FUNC_9(VAR_2);

  FUNC_11(VAR_2, VAR_7, 1);

  return;
 }
 if (VAR_2->sync_obj)
  VAR_6 = VAR_5->sync_obj_ref(VAR_2->sync_obj);
 FUNC_3(&VAR_3->fence_lock);

 if (!VAR_8) {
  FUNC_0(&VAR_2->reserved, 0);
  FUNC_14(VAR_2);
 }

 FUNC_4(&VAR_2->list_kref);
 FUNC_1(&VAR_2->ddestroy, &VAR_3->ddestroy);
 FUNC_3(&VAR_4->lru_lock);

 if (VAR_6) {
  VAR_5->sync_obj_flush(VAR_6);
  VAR_5->sync_obj_unref(&VAR_6);
 }
 FUNC_8(VAR_1, &VAR_3->wq,
     ((VAR_0 / 100) < 1) ? 1 : VAR_0 / 100);
}
