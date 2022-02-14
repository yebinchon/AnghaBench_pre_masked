
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int dev; struct xgbe_channel* channel; int per_channel_irq; int dev_irq_tag; int dev_irq_res; } ;
struct xgbe_channel {int dma_irq_tag; int dma_irq_res; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_channel *VAR_1;
 unsigned int VAR_2;

 FUNC_0(VAR_0->dev, VAR_0->dev_irq_res, VAR_0->dev_irq_tag);

 if (!VAR_0->per_channel_irq)
  return;

 VAR_1 = VAR_0->channel;
 for (VAR_2 = 0; VAR_2 < VAR_0->channel_count; VAR_2++, VAR_1++)
  FUNC_0(VAR_0->dev, VAR_1->dma_irq_res,
      VAR_1->dma_irq_tag);
}
