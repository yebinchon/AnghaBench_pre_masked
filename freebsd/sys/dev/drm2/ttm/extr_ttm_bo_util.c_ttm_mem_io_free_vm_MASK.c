
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_reserved_vm; } ;
struct ttm_mem_reg {TYPE_1__ bus; } ;
struct ttm_buffer_object {int bdev; int io_reserve_lru; struct ttm_mem_reg mem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ttm_mem_reg*) ;

void FUNC_2(struct ttm_buffer_object *VAR_0)
{
 struct ttm_mem_reg *VAR_1 = &VAR_0->mem;

 if (VAR_1->bus.io_reserved_vm) {
  VAR_1->bus.io_reserved_vm = 0;
  FUNC_0(&VAR_0->io_reserve_lru);
  FUNC_1(VAR_0->bdev, VAR_1);
 }
}
