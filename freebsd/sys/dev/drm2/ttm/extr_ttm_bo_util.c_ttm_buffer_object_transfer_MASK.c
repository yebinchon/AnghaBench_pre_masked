
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {scalar_t__ acc_size; int * destroy; int kref; int list_kref; int * sync_obj; int cpu_writers; int * vm_node; int io_reserve_lru; int swap; int lru; int ddestroy; struct ttm_bo_device* bdev; } ;
struct ttm_bo_driver {int * (* sync_obj_ref ) (int *) ;} ;
struct ttm_bo_device {int fence_lock; struct ttm_bo_driver* driver; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct ttm_buffer_object* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(struct ttm_buffer_object *VAR_3,
    struct ttm_buffer_object **VAR_4)
{
 struct ttm_buffer_object *VAR_5;
 struct ttm_bo_device *VAR_6 = VAR_3->bdev;
 struct ttm_bo_driver *VAR_7 = VAR_6->driver;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0, VAR_1);
 *VAR_5 = *VAR_3;






 FUNC_0(&VAR_5->ddestroy);
 FUNC_0(&VAR_5->lru);
 FUNC_0(&VAR_5->swap);
 FUNC_0(&VAR_5->io_reserve_lru);
 VAR_5->vm_node = ((void*)0);
 FUNC_1(&VAR_5->cpu_writers, 0);

 FUNC_3(&VAR_6->fence_lock);
 if (VAR_3->sync_obj)
  VAR_5->sync_obj = VAR_7->sync_obj_ref(VAR_3->sync_obj);
 else
  VAR_5->sync_obj = ((void*)0);
 FUNC_4(&VAR_6->fence_lock);
 FUNC_5(&VAR_5->list_kref, 1);
 FUNC_5(&VAR_5->kref, 1);
 VAR_5->destroy = &VAR_2;
 VAR_5->acc_size = 0;

 *VAR_4 = VAR_5;
 return 0;
}
