
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int per_channel_irq; struct xgbe_channel* channel; } ;
struct xgbe_channel {scalar_t__ rx_ring; scalar_t__ tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct xgbe_channel*,int ) ;
 int FUNC_1 (struct xgbe_channel*,int ,unsigned int) ;
 int FUNC_2 (unsigned int,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_8)
{
 struct xgbe_channel *VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12;

 VAR_9 = VAR_8->channel;
 for (VAR_12 = 0; VAR_12 < VAR_8->channel_count; VAR_12++, VAR_9++) {

  VAR_10 = FUNC_0(VAR_9, VAR_2);
  FUNC_1(VAR_9, VAR_2, VAR_10);


  VAR_11 = 0;






  FUNC_2(VAR_11, VAR_1, VAR_4, 1);
  FUNC_2(VAR_11, VAR_1, VAR_0, 1);
  FUNC_2(VAR_11, VAR_1, VAR_3, 1);

  if (VAR_9->tx_ring) {




   if (!VAR_8->per_channel_irq)
    FUNC_2(VAR_11, VAR_1, VAR_7, 1);
  }
  if (VAR_9->rx_ring) {





   FUNC_2(VAR_11, VAR_1, VAR_5, 1);
   if (!VAR_8->per_channel_irq)
    FUNC_2(VAR_11, VAR_1, VAR_6, 1);
  }

  FUNC_1(VAR_9, VAR_1, VAR_11);
 }
}
