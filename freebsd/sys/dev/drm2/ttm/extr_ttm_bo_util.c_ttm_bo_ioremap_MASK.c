
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ base; scalar_t__ addr; } ;
struct ttm_mem_reg {int placement; TYPE_1__ bus; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; } ;
struct ttm_bo_kmap_obj {unsigned long size; void* virtual; int bo_kmap_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (scalar_t__,unsigned long,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct ttm_buffer_object *VAR_6,
     unsigned long VAR_7,
     unsigned long VAR_8,
     struct ttm_bo_kmap_obj *VAR_9)
{
 struct ttm_mem_reg *VAR_10 = &VAR_6->mem;

 if (VAR_6->mem.bus.addr) {
  VAR_9->bo_kmap_type = VAR_5;
  VAR_9->virtual = (void *)(((u8 *)VAR_6->mem.bus.addr) + VAR_7);
 } else {
  VAR_9->bo_kmap_type = VAR_4;
  VAR_9->virtual = FUNC_0(VAR_6->mem.bus.base +
      VAR_6->mem.bus.offset + VAR_7, VAR_8,
      (VAR_10->placement & VAR_1) ?
      VAR_3 : VAR_2);
  VAR_9->size = VAR_8;
 }
 return (!VAR_9->virtual) ? -VAR_0 : 0;
}
