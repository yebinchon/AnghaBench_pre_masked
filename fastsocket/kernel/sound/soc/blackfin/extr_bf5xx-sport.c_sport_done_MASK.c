
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int rx_desc_bytes; int tx_desc_bytes; int err_irq; int dma_tx_chan; int dma_rx_chan; struct sport_device* dummy_buf; struct sport_device* dummy_tx_desc; struct sport_device* dummy_rx_desc; struct sport_device* dma_tx_desc; struct sport_device* dma_rx_desc; } ;
struct dmasg {int dummy; } ;


 int FUNC_0 (int *,int,struct sport_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sport_device*) ;
 int FUNC_3 (struct sport_device*) ;
 int FUNC_4 (struct sport_device*) ;
 int FUNC_5 (struct sport_device*) ;

void FUNC_6(struct sport_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_5(VAR_0);
 if (VAR_0->dma_rx_desc)
  FUNC_0(((void*)0), VAR_0->rx_desc_bytes,
   VAR_0->dma_rx_desc, 0);
 if (VAR_0->dma_tx_desc)
  FUNC_0(((void*)0), VAR_0->tx_desc_bytes,
   VAR_0->dma_tx_desc, 0);






 FUNC_0(((void*)0), 2*sizeof(struct dmasg),
  VAR_0->dummy_rx_desc, 0);
 FUNC_0(((void*)0), 2*sizeof(struct dmasg),
  VAR_0->dummy_tx_desc, 0);
 FUNC_3(VAR_0->dummy_buf);

 FUNC_1(VAR_0->dma_rx_chan);
 FUNC_1(VAR_0->dma_tx_chan);
 FUNC_2(VAR_0->err_irq, VAR_0);

 FUNC_3(VAR_0);
  VAR_0 = ((void*)0);
}
