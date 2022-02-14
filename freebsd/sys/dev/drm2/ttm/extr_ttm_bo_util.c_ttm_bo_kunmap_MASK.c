
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_4__ {size_t mem_type; } ;
struct ttm_buffer_object {TYPE_2__ mem; TYPE_1__* bdev; } ;
struct ttm_bo_kmap_obj {int bo_kmap_type; int num_pages; int * sf; int * page; int * virtual; struct ttm_buffer_object* bo; int size; } ;
struct TYPE_3__ {struct ttm_mem_type_manager* man; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;




 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (struct ttm_mem_type_manager*,int) ;
 int FUNC_7 (struct ttm_mem_type_manager*) ;

void FUNC_8(struct ttm_bo_kmap_obj *VAR_1)
{
 struct ttm_buffer_object *VAR_2 = VAR_1->bo;
 struct ttm_mem_type_manager *VAR_3 =
  &VAR_2->bdev->man[VAR_2->mem.mem_type];

 if (!VAR_1->virtual)
  return;
 switch (VAR_1->bo_kmap_type) {
 case 131:
  FUNC_3((vm_offset_t)VAR_1->virtual, VAR_1->size);
  break;
 case 128:
  FUNC_2((vm_offset_t)(VAR_1->virtual), VAR_1->num_pages);
  FUNC_1((vm_offset_t)VAR_1->virtual,
      VAR_1->num_pages * VAR_0);
  break;
 case 130:
  FUNC_4(VAR_1->sf);
  break;
 case 129:
  break;
 default:
  FUNC_0(0);
 }
 (void) FUNC_6(VAR_3, 0);
 FUNC_5(VAR_1->bo->bdev, &VAR_1->bo->mem);
 FUNC_7(VAR_3);
 VAR_1->virtual = ((void*)0);
 VAR_1->page = ((void*)0);
 VAR_1->sf = ((void*)0);
}
