
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int dummy; } ;
struct TYPE_2__ {int size; scalar_t__ offset; scalar_t__ base; void* addr; int is_iomem; } ;
struct ttm_mem_reg {size_t mem_type; int placement; TYPE_1__ bus; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct ttm_bo_device*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_mem_type_manager*,int) ;
 int FUNC_3 (struct ttm_bo_device*,struct ttm_mem_reg*) ;
 int FUNC_4 (struct ttm_mem_type_manager*) ;

__attribute__((used)) static
int FUNC_5(struct ttm_bo_device *VAR_4, struct ttm_mem_reg *VAR_5,
   void **VAR_6)
{
 struct ttm_mem_type_manager *VAR_7 = &VAR_4->man[VAR_5->mem_type];
 int VAR_8;
 void *VAR_9;

 *VAR_6 = ((void*)0);
 (void) FUNC_2(VAR_7, 0);
 VAR_8 = FUNC_3(VAR_4, VAR_5);
 FUNC_4(VAR_7);
 if (VAR_8 || !VAR_5->bus.is_iomem)
  return VAR_8;

 if (VAR_5->bus.addr) {
  VAR_9 = VAR_5->bus.addr;
 } else {
  VAR_9 = FUNC_0(VAR_5->bus.base + VAR_5->bus.offset,
      VAR_5->bus.size, (VAR_5->placement & VAR_1) ?
      VAR_3 : VAR_2);
  if (!VAR_9) {
   (void) FUNC_2(VAR_7, 0);
   FUNC_1(VAR_4, VAR_5);
   FUNC_4(VAR_7);
   return -VAR_0;
  }
 }
 *VAR_6 = VAR_9;
 return 0;
}
