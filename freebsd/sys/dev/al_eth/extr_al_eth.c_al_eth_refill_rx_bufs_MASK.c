
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct al_eth_rx_buffer {int al_buf; } ;
struct al_eth_ring {size_t next_to_use; int dma_q; struct al_eth_rx_buffer* rx_buffer_info; } ;
struct al_eth_adapter {int dev; struct al_eth_ring* rx_ring; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct al_eth_ring*,size_t) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct al_eth_adapter*,struct al_eth_ring*,struct al_eth_rx_buffer*) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned int,...) ;

__attribute__((used)) static int
FUNC_8(struct al_eth_adapter *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 struct al_eth_ring *VAR_4 = &VAR_1->rx_ring[VAR_2];
 uint16_t VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_4->next_to_use;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  int VAR_7;
  struct al_eth_rx_buffer *VAR_8 =
      &VAR_4->rx_buffer_info[VAR_5];

  if (FUNC_1(FUNC_3(VAR_1,
      VAR_4, VAR_8) < 0)) {
   FUNC_7(VAR_1->dev,
       "failed to alloc buffer for rx queue %d\n", VAR_2);
   break;
  }

  VAR_7 = FUNC_5(VAR_4->dma_q,
      &VAR_8->al_buf, VAR_0, ((void*)0));
  if (FUNC_1(VAR_7)) {
   FUNC_7(VAR_1->dev,
       "failed to add buffer for rx queue %d\n", VAR_2);
   break;
  }

  VAR_5 = FUNC_0(VAR_4, VAR_5);
 }

 if (FUNC_1(VAR_6 < VAR_3))
  FUNC_7(VAR_1->dev,
      "refilled rx queue %d with %d pages only - available %d\n",
      VAR_2, VAR_6, FUNC_6(VAR_4->dma_q));

 if (FUNC_2(VAR_6))
  FUNC_4(VAR_4->dma_q, VAR_6);

 VAR_4->next_to_use = VAR_5;

 return (VAR_6);
}
