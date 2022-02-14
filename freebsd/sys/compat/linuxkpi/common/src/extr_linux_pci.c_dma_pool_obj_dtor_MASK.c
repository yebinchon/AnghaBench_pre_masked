
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_dma_obj {int dmamap; } ;
struct dma_pool {int pool_dmat; } ;


 int FUNC_0 (struct dma_pool*) ;
 int FUNC_1 (struct dma_pool*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1, void *VAR_2)
{
 struct linux_dma_obj *VAR_3 = VAR_0;
 struct dma_pool *VAR_4 = VAR_2;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4->pool_dmat, VAR_3->dmamap);
 FUNC_1(VAR_4);
}
