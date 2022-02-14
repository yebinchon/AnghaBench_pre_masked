
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sport_device {TYPE_1__* curr_rx_desc; int dma_rx_chan; TYPE_1__* dma_rx_desc; TYPE_1__* dummy_rx_desc; } ;
struct TYPE_2__ {int start_addr; struct TYPE_2__* next_desc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static inline int FUNC_6(struct sport_device *VAR_4, int VAR_5)
{
 if (VAR_5) {
  VAR_4->dummy_rx_desc->next_desc_addr = VAR_4->dummy_rx_desc;
  VAR_4->curr_rx_desc = VAR_4->dummy_rx_desc;
 } else
  VAR_4->curr_rx_desc = VAR_4->dma_rx_desc;

 FUNC_3(VAR_4->dma_rx_chan, VAR_4->curr_rx_desc);
 FUNC_4(VAR_4->dma_rx_chan, 0);
 FUNC_5(VAR_4->dma_rx_chan, 0);
 FUNC_1(VAR_4->dma_rx_chan, (VAR_0 | VAR_1 | VAR_2 | VAR_3));

 FUNC_2(VAR_4->dma_rx_chan, VAR_4->curr_rx_desc->start_addr);
 FUNC_0();

 return 0;
}
