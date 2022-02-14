
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {int page_list; int allocation; int dev; } ;
struct dma_page {scalar_t__ offset; scalar_t__ in_use; int page_list; scalar_t__ vaddr; int dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct dma_page*) ;
 struct dma_page* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct dma_pool*,struct dma_page*) ;

__attribute__((used)) static struct dma_page *FUNC_6(struct dma_pool *VAR_1, gfp_t VAR_2)
{
 struct dma_page *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->vaddr = FUNC_0(VAR_1->dev, VAR_1->allocation,
      &VAR_3->dma, VAR_2);
 if (VAR_3->vaddr) {



  FUNC_5(VAR_1, VAR_3);
  FUNC_3(&VAR_3->page_list, &VAR_1->page_list);
  VAR_3->in_use = 0;
  VAR_3->offset = 0;
 } else {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }
 return VAR_3;
}
