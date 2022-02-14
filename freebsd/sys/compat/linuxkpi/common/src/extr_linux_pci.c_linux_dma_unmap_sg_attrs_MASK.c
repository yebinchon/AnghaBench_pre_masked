
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dma_map; } ;
struct linux_dma_priv {int dmat; } ;
struct dma_attrs {int dummy; } ;
struct device {struct linux_dma_priv* dma_priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct linux_dma_priv*) ;
 int FUNC_1 (struct linux_dma_priv*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct device *VAR_0, struct scatterlist *VAR_1,
    int VAR_2, enum dma_data_direction VAR_3, struct dma_attrs *VAR_4)
{
 struct linux_dma_priv *VAR_5;

 VAR_5 = VAR_0->dma_priv;

 FUNC_0(VAR_5);
 FUNC_3(VAR_5->dmat, VAR_1->dma_map);
 FUNC_2(VAR_5->dmat, VAR_1->dma_map);
 FUNC_1(VAR_5);
}
