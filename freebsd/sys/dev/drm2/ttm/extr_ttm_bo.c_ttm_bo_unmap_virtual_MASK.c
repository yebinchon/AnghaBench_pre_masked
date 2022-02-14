
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_2__ {size_t mem_type; } ;
struct ttm_buffer_object {TYPE_1__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;


 int FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (struct ttm_mem_type_manager*,int) ;
 int FUNC_2 (struct ttm_mem_type_manager*) ;

void FUNC_3(struct ttm_buffer_object *VAR_0)
{
 struct ttm_bo_device *VAR_1 = VAR_0->bdev;
 struct ttm_mem_type_manager *VAR_2 = &VAR_1->man[VAR_0->mem.mem_type];

 FUNC_1(VAR_2, 0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_2);
}
