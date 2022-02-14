
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttm_mem_global {int dummy; } ;
struct TYPE_5__ {unsigned int max_size; int alloc_size; int small; } ;
struct TYPE_6__ {int kobj_ref; TYPE_1__ options; int uc_pool_dma32; int wc_pool_dma32; int uc_pool; int wc_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* FUNC_0 (int,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(struct ttm_mem_global *VAR_7, unsigned VAR_8)
{

 if (VAR_6 != ((void*)0))
  FUNC_1("[TTM] manager != NULL\n");
 FUNC_1("[TTM] Initializing pool allocator\n");

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);

 FUNC_3(&VAR_6->wc_pool, 0, "wc");
 FUNC_3(&VAR_6->uc_pool, 0, "uc");
 FUNC_3(&VAR_6->wc_pool_dma32,
     VAR_5, "wc dma");
 FUNC_3(&VAR_6->uc_pool_dma32,
     VAR_5, "uc dma");

 VAR_6->options.max_size = VAR_8;
 VAR_6->options.small = VAR_4;
 VAR_6->options.alloc_size = VAR_3;

 FUNC_2(&VAR_6->kobj_ref, 1);
 FUNC_4(VAR_6);

 return 0;
}
