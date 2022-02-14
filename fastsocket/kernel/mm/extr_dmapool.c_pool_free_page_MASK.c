
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {int allocation; int dev; } ;
struct dma_page {int page_list; int vaddr; int dma; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct dma_page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dma_pool *VAR_1, struct dma_page *VAR_2)
{
 dma_addr_t VAR_3 = VAR_2->dma;




 FUNC_0(VAR_1->dev, VAR_1->allocation, VAR_2->vaddr, VAR_3);
 FUNC_2(&VAR_2->page_list);
 FUNC_1(VAR_2);
}
