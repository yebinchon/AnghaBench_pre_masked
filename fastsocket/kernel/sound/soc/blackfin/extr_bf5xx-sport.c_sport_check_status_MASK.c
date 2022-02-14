
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sport_device {int dma_tx_chan; int dma_rx_chan; TYPE_1__* regs; } ;
struct TYPE_2__ {int stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sport_device *VAR_6,
  unsigned int *VAR_7,
  unsigned int *VAR_8,
  unsigned int *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_7) {
  FUNC_0();
  VAR_10 = VAR_6->regs->stat;
  if (VAR_10 & (VAR_4|VAR_5|VAR_2|VAR_3))
   VAR_6->regs->stat = (VAR_10 & (VAR_4|VAR_5|VAR_2|VAR_3));
  FUNC_0();
  *VAR_7 = VAR_10;
 }

 if (VAR_8) {
  FUNC_0();
  VAR_10 = FUNC_2(VAR_6->dma_rx_chan);
  if (VAR_10 & (VAR_0|VAR_1))
   FUNC_1(VAR_6->dma_rx_chan);
  FUNC_0();
  *VAR_8 = VAR_10;
 }

 if (VAR_9) {
  FUNC_0();
  VAR_10 = FUNC_2(VAR_6->dma_tx_chan);
  if (VAR_10 & (VAR_0|VAR_1))
   FUNC_1(VAR_6->dma_tx_chan);
  FUNC_0();
  *VAR_9 = VAR_10;
 }

 return 0;
}
