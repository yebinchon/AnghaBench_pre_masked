
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pages; void* pages; } ;
struct ttm_dma_tt {TYPE_1__ ttm; void* dma_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ttm_dma_tt *VAR_3)
{
 VAR_3->ttm.pages = FUNC_0(VAR_3->ttm.num_pages * sizeof(void *),
     VAR_0, VAR_1 | VAR_2);
 VAR_3->dma_address = FUNC_0(VAR_3->ttm.num_pages *
     sizeof(*VAR_3->dma_address), VAR_0, VAR_1);
}
