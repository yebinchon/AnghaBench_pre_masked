
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int * pages; } ;
struct ttm_dma_tt {int * dma_address; struct ttm_tt ttm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct ttm_dma_tt *VAR_1)
{
 struct ttm_tt *VAR_2 = &VAR_1->ttm;

 FUNC_0(VAR_2->pages, VAR_0);
 VAR_2->pages = ((void*)0);
 FUNC_0(VAR_1->dma_address, VAR_0);
 VAR_1->dma_address = ((void*)0);
}
