
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sport_device {int dma_rx_chan; int dma_tx_chan; int dummy_tx_desc; int dummy_rx_desc; int dma_tx_desc; int dma_rx_desc; int curr_tx_desc; int curr_rx_desc; TYPE_1__* regs; } ;
struct TYPE_2__ {int stat; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int,int,...) ;

int FUNC_2(struct sport_device *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2,
   "sts: 0x%04x\n"
   "rx dma %d sts: 0x%04x tx dma %d sts: 0x%04x\n",
   VAR_0->regs->stat,
   VAR_0->dma_rx_chan,
   FUNC_0(VAR_0->dma_rx_chan),
   VAR_0->dma_tx_chan,
   FUNC_0(VAR_0->dma_tx_chan));
 VAR_1 += VAR_3;
 VAR_2 -= VAR_3;

 VAR_3 += FUNC_1(VAR_1, VAR_2,
   "curr_rx_desc:0x%p, curr_tx_desc:0x%p\n"
   "dma_rx_desc:0x%p, dma_tx_desc:0x%p\n"
   "dummy_rx_desc:0x%p, dummy_tx_desc:0x%p\n",
   VAR_0->curr_rx_desc, VAR_0->curr_tx_desc,
   VAR_0->dma_rx_desc, VAR_0->dma_tx_desc,
   VAR_0->dummy_rx_desc, VAR_0->dummy_tx_desc);

 return VAR_3;
}
