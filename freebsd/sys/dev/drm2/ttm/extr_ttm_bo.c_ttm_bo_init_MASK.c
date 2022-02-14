
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vm_object {int dummy; } ;
struct ttm_placement {int dummy; } ;
struct ttm_mem_global {int dummy; } ;
struct TYPE_4__ {int io_reserved_vm; scalar_t__ io_reserved_count; } ;
struct TYPE_5__ {unsigned long size; unsigned long num_pages; int placement; TYPE_1__ bus; int page_alignment; int * mm_node; int mem_type; } ;
struct ttm_buffer_object {void (* destroy ) (struct ttm_buffer_object*) ;int type; unsigned long num_pages; int seq_valid; size_t acc_size; TYPE_3__* glob; struct sg_table* sg; struct vm_object* persistent_swap_storage; TYPE_2__ mem; scalar_t__ priv_flags; struct ttm_bo_device* bdev; int io_reserve_lru; int swap; int ddestroy; int lru; int reserved; int cpu_writers; int list_kref; int kref; } ;
struct ttm_bo_device {TYPE_3__* glob; } ;
struct sg_table {int dummy; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;
struct TYPE_6__ {int bo_count; struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct ttm_buffer_object*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int) ;
 void FUNC_6 (struct ttm_buffer_object*) ;
 void FUNC_7 (struct ttm_buffer_object*) ;
 int FUNC_8 (struct ttm_buffer_object*,struct ttm_placement*) ;
 int FUNC_9 (struct ttm_buffer_object*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (struct ttm_buffer_object**) ;
 int FUNC_11 (struct ttm_buffer_object*) ;
 int FUNC_12 (struct ttm_buffer_object*,struct ttm_placement*,int,int) ;
 int FUNC_13 (struct ttm_mem_global*,size_t,int,int) ;
 int FUNC_14 (struct ttm_mem_global*,size_t) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct ttm_bo_device *VAR_10,
  struct ttm_buffer_object *VAR_11,
  unsigned long VAR_12,
  enum ttm_bo_type VAR_13,
  struct ttm_placement *VAR_14,
  uint32_t VAR_15,
  bool VAR_16,
  struct vm_object *VAR_17,
  size_t VAR_18,
  struct sg_table *VAR_19,
  void (*VAR_20) (struct ttm_buffer_object *))
{
 int VAR_21 = 0;
 unsigned long VAR_22;
 struct ttm_mem_global *VAR_23 = VAR_10->glob->mem_glob;

 VAR_21 = FUNC_13(VAR_23, VAR_18, 0, 0);
 if (VAR_21) {
  FUNC_4("[TTM] Out of kernel memory\n");
  if (VAR_20)
   (*VAR_20)(VAR_11);
  else
   FUNC_3(VAR_11, VAR_2);
  return -VAR_1;
 }

 VAR_22 = (VAR_12 + VAR_4 - 1) >> VAR_3;
 if (VAR_22 == 0) {
  FUNC_4("[TTM] Illegal buffer object size\n");
  if (VAR_20)
   (*VAR_20)(VAR_11);
  else
   FUNC_3(VAR_11, VAR_2);
  FUNC_14(VAR_23, VAR_18);
  return -VAR_0;
 }
 VAR_11->destroy = VAR_20;

 FUNC_5(&VAR_11->kref, 1);
 FUNC_5(&VAR_11->list_kref, 1);
 FUNC_2(&VAR_11->cpu_writers, 0);
 FUNC_2(&VAR_11->reserved, 1);
 FUNC_0(&VAR_11->lru);
 FUNC_0(&VAR_11->ddestroy);
 FUNC_0(&VAR_11->swap);
 FUNC_0(&VAR_11->io_reserve_lru);
 VAR_11->bdev = VAR_10;
 VAR_11->glob = VAR_10->glob;
 VAR_11->type = VAR_13;
 VAR_11->num_pages = VAR_22;
 VAR_11->mem.size = VAR_22 << VAR_3;
 VAR_11->mem.mem_type = VAR_7;
 VAR_11->mem.num_pages = VAR_11->num_pages;
 VAR_11->mem.mm_node = ((void*)0);
 VAR_11->mem.page_alignment = VAR_15;
 VAR_11->mem.bus.io_reserved_vm = 0;
 VAR_11->mem.bus.io_reserved_count = 0;
 VAR_11->priv_flags = 0;
 VAR_11->mem.placement = (VAR_6 | VAR_5);
 VAR_11->seq_valid = 0;
 VAR_11->persistent_swap_storage = VAR_17;
 VAR_11->acc_size = VAR_18;
 VAR_11->sg = VAR_19;
 FUNC_1(&VAR_11->glob->bo_count);

 VAR_21 = FUNC_8(VAR_11, VAR_14);
 if (FUNC_15(VAR_21 != 0))
  goto out_err;





 if (VAR_11->type == VAR_8 ||
     VAR_11->type == VAR_9) {
  VAR_21 = FUNC_9(VAR_11);
  if (VAR_21)
   goto out_err;
 }

 VAR_21 = FUNC_12(VAR_11, VAR_14, VAR_16, 0);
 if (VAR_21)
  goto out_err;

 FUNC_11(VAR_11);
 return 0;

out_err:
 FUNC_11(VAR_11);
 FUNC_10(&VAR_11);

 return VAR_21;
}
