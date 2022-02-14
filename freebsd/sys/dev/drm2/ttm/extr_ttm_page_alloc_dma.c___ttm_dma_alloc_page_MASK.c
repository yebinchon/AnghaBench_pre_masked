
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {int gfp_flags; int size; int dev; } ;
struct dma_page {scalar_t__ vaddr; int p; int dma; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct dma_page*) ;
 struct dma_page* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct dma_page *FUNC_4(struct dma_pool *VAR_1)
{
 struct dma_page *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct dma_page), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->vaddr = FUNC_0(VAR_1->dev, VAR_1->size,
        &VAR_2->dma,
        VAR_1->gfp_flags);
 if (VAR_2->vaddr)
  VAR_2->p = FUNC_3(VAR_2->vaddr);
 else {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
