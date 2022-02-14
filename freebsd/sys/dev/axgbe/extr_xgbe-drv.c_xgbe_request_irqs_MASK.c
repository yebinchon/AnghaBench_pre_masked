
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int dev_irq_tag; int dev_irq_res; int dev; int dma_irq_tag; int dma_irq_res; struct xgbe_prv_data* channel; int per_channel_irq; } ;
struct xgbe_channel {unsigned int channel_count; int dev_irq_tag; int dev_irq_res; int dev; int dma_irq_tag; int dma_irq_res; struct xgbe_channel* channel; int per_channel_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *,int ,struct xgbe_prv_data*,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_channel *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4->dev, VAR_4->dev_irq_res,
     VAR_0 | VAR_1, ((void*)0), VAR_3, VAR_4,
     &VAR_4->dev_irq_tag);
 if (VAR_7) {
  return VAR_7;
 }

 if (!VAR_4->per_channel_irq)
  return 0;

 VAR_5 = VAR_4->channel;
 for (VAR_6 = 0; VAR_6 < VAR_4->channel_count; VAR_6++, VAR_5++) {
  VAR_7 = FUNC_0(VAR_4->dev, VAR_5->dma_irq_res,
      VAR_0 | VAR_1, ((void*)0), VAR_2, VAR_5,
      &VAR_5->dma_irq_tag);
  if (VAR_7 != 0) {
   goto err_irq;
  }
 }

 return 0;

err_irq:

 for (VAR_6--, VAR_5--; VAR_6 < VAR_4->channel_count; VAR_6--, VAR_5--)
  FUNC_1(VAR_4->dev, VAR_5->dma_irq_res,
      VAR_5->dma_irq_tag);

 FUNC_1(VAR_4->dev, VAR_4->dev_irq_res, VAR_4->dev_irq_tag);

 return -VAR_7;
}
