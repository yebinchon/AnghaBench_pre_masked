
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {int type; int dev_name; } ;
struct dma_page {int page_list; int p; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_pool*,struct dma_page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct dma_pool *VAR_1, struct dma_page *VAR_2)
{

 if (!(VAR_1->type & VAR_0) && FUNC_3(&VAR_2->p, 1))
  FUNC_2("%s: Failed to set %d pages to wb!\n",
         VAR_1->dev_name, 1);

 FUNC_1(&VAR_2->page_list);
 FUNC_0(VAR_1, VAR_2);
}
