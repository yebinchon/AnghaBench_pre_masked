
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int has_type; int use_type; int lru; } ;
struct ttm_bo_global {int lru_lock; int device_list_mutex; } ;
struct ttm_bo_device {int vm_lock; int addr_space_mm; struct ttm_mem_type_manager* man; int ddestroy; int wq; int device_list; struct ttm_bo_global* glob; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_15 (struct ttm_bo_device*,unsigned int) ;
 scalar_t__ FUNC_16 (struct ttm_bo_device*,int) ;

int FUNC_17(struct ttm_bo_device *VAR_4)
{
 int VAR_5 = 0;
 unsigned VAR_6 = VAR_1;
 struct ttm_mem_type_manager *VAR_7;
 struct ttm_bo_global *VAR_8 = VAR_4->glob;

 while (VAR_6--) {
  VAR_7 = &VAR_4->man[VAR_6];
  if (VAR_7->has_type) {
   VAR_7->use_type = 0;
   if ((VAR_6 != VAR_2) && FUNC_15(VAR_4, VAR_6)) {
    VAR_5 = -VAR_0;
    FUNC_8("[TTM] DRM memory manager type %d is not clean\n",
           VAR_6);
   }
   VAR_7->has_type = 0;
  }
 }

 FUNC_11(&VAR_8->device_list_mutex);
 FUNC_4(&VAR_4->device_list);
 FUNC_12(&VAR_8->device_list_mutex);

 if (FUNC_13(VAR_3, &VAR_4->wq, ((void*)0)))
  FUNC_14(VAR_3, &VAR_4->wq);

 while (FUNC_16(VAR_4, 1))
  ;

 FUNC_6(&VAR_8->lru_lock);
 if (FUNC_5(&VAR_4->ddestroy))
  FUNC_1("Delayed destroy list was clean\n");

 if (FUNC_5(&VAR_4->man[0].lru))
  FUNC_1("Swap list was clean\n");
 FUNC_7(&VAR_8->lru_lock);

 FUNC_0(FUNC_2(&VAR_4->addr_space_mm));
 FUNC_9(&VAR_4->vm_lock);
 FUNC_3(&VAR_4->addr_space_mm);
 FUNC_10(&VAR_4->vm_lock);

 return VAR_5;
}
