
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_2__ {size_t mem_type; } ;
struct ttm_buffer_object {int list_kref; int * vm_node; TYPE_1__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int vm_lock; int addr_space_rb; struct ttm_mem_type_manager* man; } ;


 int FUNC_0 (int ,int *,struct ttm_buffer_object*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ttm_buffer_object*) ;
 int VAR_0 ;
 int FUNC_7 (struct ttm_buffer_object*) ;
 int FUNC_8 (struct ttm_buffer_object*) ;
 int FUNC_9 (struct ttm_mem_type_manager*,int) ;
 int FUNC_10 (struct ttm_mem_type_manager*) ;

__attribute__((used)) static void FUNC_11(struct ttm_buffer_object *VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_1->bdev;
 struct ttm_mem_type_manager *VAR_3 = &VAR_2->man[VAR_1->mem.mem_type];

 FUNC_4(&VAR_2->vm_lock);
 if (FUNC_2(VAR_1->vm_node != ((void*)0))) {
  FUNC_0(VAR_0,
      &VAR_2->addr_space_rb, VAR_1);
  FUNC_1(VAR_1->vm_node);
  VAR_1->vm_node = ((void*)0);
 }
 FUNC_5(&VAR_2->vm_lock);
 FUNC_9(VAR_3, 0);
 FUNC_8(VAR_1);
 FUNC_10(VAR_3);
 FUNC_6(VAR_1);
 if (FUNC_3(&VAR_1->list_kref))
  FUNC_7(VAR_1);
}
