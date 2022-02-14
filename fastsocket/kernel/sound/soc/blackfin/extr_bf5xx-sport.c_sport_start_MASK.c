
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sport_device {TYPE_1__* regs; int dma_tx_chan; int dma_rx_chan; } ;
struct TYPE_2__ {int tcr1; int rcr1; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sport_device *VAR_2)
{
 FUNC_1(VAR_2->dma_rx_chan);
 FUNC_1(VAR_2->dma_tx_chan);
 VAR_2->regs->rcr1 |= VAR_0;
 VAR_2->regs->tcr1 |= VAR_1;
 FUNC_0();

 return 0;
}
