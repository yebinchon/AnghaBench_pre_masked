
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_4__ {int is_iomem; } ;
struct TYPE_6__ {size_t mem_type; TYPE_1__ bus; } ;
struct ttm_buffer_object {unsigned long num_pages; TYPE_3__ mem; TYPE_2__* bdev; int swap; } ;
struct ttm_bo_kmap_obj {struct ttm_buffer_object* bo; int * virtual; } ;
struct TYPE_5__ {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_buffer_object*,unsigned long,unsigned long,struct ttm_bo_kmap_obj*) ;
 int FUNC_4 (struct ttm_buffer_object*,unsigned long,unsigned long,struct ttm_bo_kmap_obj*) ;
 int FUNC_5 (struct ttm_mem_type_manager*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (struct ttm_mem_type_manager*) ;

int FUNC_8(struct ttm_buffer_object *VAR_4,
  unsigned long VAR_5, unsigned long VAR_6,
  struct ttm_bo_kmap_obj *VAR_7)
{
 struct ttm_mem_type_manager *VAR_8 =
  &VAR_4->bdev->man[VAR_4->mem.mem_type];
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 FUNC_1(FUNC_2(&VAR_4->swap));
 VAR_7->virtual = ((void*)0);
 VAR_7->bo = VAR_4;
 if (VAR_6 > VAR_4->num_pages)
  return -VAR_1;
 if (VAR_5 > VAR_4->num_pages)
  return -VAR_1;




 (void) FUNC_5(VAR_8, 0);
 VAR_11 = FUNC_6(VAR_4->bdev, &VAR_4->mem);
 FUNC_7(VAR_8);
 if (VAR_11)
  return VAR_11;
 if (!VAR_4->mem.bus.is_iomem) {
  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 } else {
  VAR_9 = VAR_5 << VAR_3;
  VAR_10 = VAR_6 << VAR_3;
  return FUNC_3(VAR_4, VAR_9, VAR_10, VAR_7);
 }
}
