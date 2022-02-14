
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_placement {scalar_t__ num_busy_placement; scalar_t__ num_placement; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct TYPE_3__ {int io_reserved_vm; scalar_t__ io_reserved_count; } ;
struct ttm_mem_reg {TYPE_1__ bus; int * mm_node; } ;
struct ttm_buffer_object {int evicted; struct ttm_mem_reg mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {TYPE_2__* driver; int fence_lock; } ;
struct TYPE_4__ {int (* evict_flags ) (struct ttm_buffer_object*,struct ttm_placement*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct ttm_buffer_object*,struct ttm_placement*) ;
 int FUNC_5 (struct ttm_buffer_object*,struct ttm_mem_reg*,int,int,int) ;
 int FUNC_6 (struct ttm_buffer_object*) ;
 int FUNC_7 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_8 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,int,int) ;
 int FUNC_9 (struct ttm_buffer_object*,struct ttm_placement*) ;
 int FUNC_10 (struct ttm_buffer_object*,int,int,int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ttm_buffer_object *VAR_1, bool VAR_2,
   bool VAR_3)
{
 struct ttm_bo_device *VAR_4 = VAR_1->bdev;
 struct ttm_mem_reg VAR_5;
 struct ttm_placement VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_4->fence_lock);
 VAR_7 = FUNC_10(VAR_1, 0, VAR_2, VAR_3);
 FUNC_2(&VAR_4->fence_lock);

 if (FUNC_11(VAR_7 != 0)) {
  if (VAR_7 != -VAR_0) {
   FUNC_3("[TTM] Failed to expire sync object before buffer eviction\n");
  }
  goto out;
 }

 FUNC_0(FUNC_6(VAR_1));

 VAR_5 = VAR_1->mem;
 VAR_5.mm_node = ((void*)0);
 VAR_5.bus.io_reserved_vm = 0;
 VAR_5.bus.io_reserved_count = 0;

 VAR_6.fpfn = 0;
 VAR_6.lpfn = 0;
 VAR_6.num_placement = 0;
 VAR_6.num_busy_placement = 0;
 VAR_4->driver->evict_flags(VAR_1, &VAR_6);
 VAR_7 = FUNC_8(VAR_1, &VAR_6, &VAR_5, VAR_2,
    VAR_3);
 if (VAR_7) {
  if (VAR_7 != -VAR_0) {
   FUNC_3("[TTM] Failed to find memory space for buffer 0x%p eviction\n",
          VAR_1);
   FUNC_9(VAR_1, &VAR_6);
  }
  goto out;
 }

 VAR_7 = FUNC_5(VAR_1, &VAR_5, 1, VAR_2,
         VAR_3);
 if (VAR_7) {
  if (VAR_7 != -VAR_0)
   FUNC_3("[TTM] Buffer eviction failed\n");
  FUNC_7(VAR_1, &VAR_5);
  goto out;
 }
 VAR_1->evicted = 1;
out:
 return VAR_7;
}
