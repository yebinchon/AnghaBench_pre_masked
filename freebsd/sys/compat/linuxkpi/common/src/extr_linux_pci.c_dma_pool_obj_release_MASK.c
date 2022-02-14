
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_dma_priv {int dummy; } ;
struct linux_dma_obj {int dmamap; int vaddr; } ;
struct dma_pool {int pool_dmat; TYPE_1__* pool_device; } ;
struct TYPE_2__ {struct linux_dma_priv* dma_priv; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct linux_dma_obj*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, void **VAR_2, int VAR_3)
{
 struct dma_pool *VAR_4 = VAR_1;
 struct linux_dma_priv *VAR_5;
 struct linux_dma_obj *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->pool_device->dma_priv;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = VAR_2[VAR_7];
  FUNC_0(VAR_4->pool_dmat, VAR_6->vaddr, VAR_6->dmamap);
  FUNC_1(VAR_0, VAR_6);
 }
}
