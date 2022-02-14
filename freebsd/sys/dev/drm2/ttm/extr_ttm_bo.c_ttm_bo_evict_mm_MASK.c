
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int has_type; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct ttm_bo_device*,unsigned int,int) ;

int FUNC_2(struct ttm_bo_device *VAR_2, unsigned VAR_3)
{
 struct ttm_mem_type_manager *VAR_4 = &VAR_2->man[VAR_3];

 if (VAR_3 == 0 || VAR_3 >= VAR_1) {
  FUNC_0("[TTM] Illegal memory manager memory type %u\n", VAR_3);
  return -VAR_0;
 }

 if (!VAR_4->has_type) {
  FUNC_0("[TTM] Memory type %u has not been initialized\n", VAR_3);
  return 0;
 }

 return FUNC_1(VAR_2, VAR_3, 1);
}
