
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_placement {int dummy; } ;
struct TYPE_4__ {int io_reserved_vm; scalar_t__ io_reserved_count; } ;
struct ttm_mem_reg {int num_pages; int size; scalar_t__ mm_node; TYPE_2__ bus; int page_alignment; } ;
struct TYPE_3__ {int page_alignment; } ;
struct ttm_buffer_object {int num_pages; TYPE_1__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int fence_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_mem_reg*,int,int,int) ;
 int FUNC_4 (struct ttm_buffer_object*) ;
 int FUNC_5 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_6 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,int,int) ;
 int FUNC_7 (struct ttm_buffer_object*,int,int,int) ;

__attribute__((used)) static
int FUNC_8(struct ttm_buffer_object *VAR_1,
   struct ttm_placement *VAR_2,
   bool VAR_3,
   bool VAR_4)
{
 int VAR_5 = 0;
 struct ttm_mem_reg VAR_6;
 struct ttm_bo_device *VAR_7 = VAR_1->bdev;

 FUNC_0(FUNC_4(VAR_1));






 FUNC_1(&VAR_7->fence_lock);
 VAR_5 = FUNC_7(VAR_1, 0, VAR_3, VAR_4);
 FUNC_2(&VAR_7->fence_lock);
 if (VAR_5)
  return VAR_5;
 VAR_6.num_pages = VAR_1->num_pages;
 VAR_6.size = VAR_6.num_pages << VAR_0;
 VAR_6.page_alignment = VAR_1->mem.page_alignment;
 VAR_6.bus.io_reserved_vm = 0;
 VAR_6.bus.io_reserved_count = 0;



 VAR_5 = FUNC_6(VAR_1, VAR_2, &VAR_6,
          VAR_3, VAR_4);
 if (VAR_5)
  goto out_unlock;
 VAR_5 = FUNC_3(VAR_1, &VAR_6, 0,
         VAR_3, VAR_4);
out_unlock:
 if (VAR_5 && VAR_6.mm_node)
  FUNC_5(VAR_1, &VAR_6);
 return VAR_5;
}
