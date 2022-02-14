
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int flags; } ;
struct ttm_mem_reg {size_t mem_type; int * mm_node; } ;
struct ttm_buffer_object {int * ttm; int priv_flags; int * sync_obj; struct ttm_mem_reg mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_driver {int (* sync_obj_unref ) (void**) ;int * (* sync_obj_ref ) (void*) ;} ;
struct ttm_bo_device {int fence_lock; struct ttm_mem_type_manager* man; struct ttm_bo_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (void*) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (void**) ;
 int FUNC_6 (struct ttm_buffer_object*) ;
 int FUNC_7 (struct ttm_buffer_object**) ;
 int FUNC_8 (struct ttm_buffer_object*) ;
 int FUNC_9 (struct ttm_buffer_object*,int,int,int) ;
 int FUNC_10 (struct ttm_buffer_object*,struct ttm_buffer_object**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct ttm_buffer_object *VAR_2,
         void *VAR_3,
         bool VAR_4,
         bool VAR_5,
         struct ttm_mem_reg *VAR_6)
{
 struct ttm_bo_device *VAR_7 = VAR_2->bdev;
 struct ttm_bo_driver *VAR_8 = VAR_7->driver;
 struct ttm_mem_type_manager *VAR_9 = &VAR_7->man[VAR_6->mem_type];
 struct ttm_mem_reg *VAR_10 = &VAR_2->mem;
 int VAR_11;
 struct ttm_buffer_object *VAR_12;
 void *VAR_13 = ((void*)0);

 FUNC_0(&VAR_7->fence_lock);
 if (VAR_2->sync_obj) {
  VAR_13 = VAR_2->sync_obj;
  VAR_2->sync_obj = ((void*)0);
 }
 VAR_2->sync_obj = VAR_8->sync_obj_ref(VAR_3);
 if (VAR_4) {
  VAR_11 = FUNC_9(VAR_2, 0, 0, 0);
  FUNC_1(&VAR_7->fence_lock);
  if (VAR_13)
   VAR_8->sync_obj_unref(&VAR_13);
  if (VAR_11)
   return VAR_11;

  if ((VAR_9->flags & VAR_1) &&
      (VAR_2->ttm != ((void*)0))) {
   FUNC_12(VAR_2->ttm);
   FUNC_11(VAR_2->ttm);
   VAR_2->ttm = ((void*)0);
  }
  FUNC_6(VAR_2);
 } else {
  FUNC_2(VAR_0, &VAR_2->priv_flags);
  FUNC_1(&VAR_7->fence_lock);
  if (VAR_13)
   VAR_8->sync_obj_unref(&VAR_13);

  VAR_11 = FUNC_10(VAR_2, &VAR_12);
  if (VAR_11)
   return VAR_11;







  if (!(VAR_9->flags & VAR_1))
   VAR_12->ttm = ((void*)0);
  else
   VAR_2->ttm = ((void*)0);

  FUNC_8(VAR_12);
  FUNC_7(&VAR_12);
 }

 *VAR_10 = *VAR_6;
 VAR_6->mm_node = ((void*)0);

 return 0;
}
