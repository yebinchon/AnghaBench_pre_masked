
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_dma_priv {int dmat; int ptree; } ;
struct linux_dma_obj {int dmamap; } ;
struct device {struct linux_dma_priv* dma_priv; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct linux_dma_priv*) ;
 int FUNC_1 (struct linux_dma_priv*) ;
 struct linux_dma_obj* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,struct linux_dma_obj*) ;

void
FUNC_8(struct device *VAR_1, dma_addr_t VAR_2, size_t VAR_3)
{
 struct linux_dma_priv *VAR_4;
 struct linux_dma_obj *VAR_5;

 VAR_4 = VAR_1->dma_priv;

 if (FUNC_6(&VAR_4->ptree))
  return;

 FUNC_0(VAR_4);
 VAR_5 = FUNC_2(&VAR_4->ptree, VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_4);
  return;
 }
 FUNC_3(&VAR_4->ptree, VAR_2);
 FUNC_5(VAR_4->dmat, VAR_5->dmamap);
 FUNC_4(VAR_4->dmat, VAR_5->dmamap);
 FUNC_1(VAR_4);

 FUNC_7(VAR_0, VAR_5);
}
