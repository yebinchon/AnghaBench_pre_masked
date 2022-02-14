
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sport_device {int dummy_count; TYPE_1__* dummy_rx_desc; TYPE_1__* curr_rx_desc; int dma_rx_chan; } ;
struct dmasg {int x_count; TYPE_1__* next_desc_addr; scalar_t__ y_count; } ;
struct TYPE_2__ {struct TYPE_2__* next_desc_addr; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 struct dmasg* FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static inline int FUNC_5(struct sport_device *VAR_0)
{
 struct dmasg *VAR_1, VAR_2;
 unsigned long VAR_3;

 FUNC_0(VAR_0->dummy_rx_desc == ((void*)0));
 FUNC_0(VAR_0->curr_rx_desc == VAR_0->dummy_rx_desc);


 VAR_0->dummy_rx_desc->next_desc_addr = VAR_0->dummy_rx_desc + 1;

 FUNC_4(VAR_3);
 VAR_1 = FUNC_2(VAR_0->dma_rx_chan);

 VAR_2 = *VAR_1;
 VAR_1->x_count = VAR_0->dummy_count / 2;
 VAR_1->y_count = 0;
 VAR_1->next_desc_addr = VAR_0->dummy_rx_desc;
 FUNC_3(VAR_3);

 while ((FUNC_1(VAR_0->dma_rx_chan) -
   sizeof(struct dmasg)) != VAR_0->dummy_rx_desc)
  continue;
 VAR_0->curr_rx_desc = VAR_0->dummy_rx_desc;

 *VAR_1 = VAR_2;

 return 0;
}
