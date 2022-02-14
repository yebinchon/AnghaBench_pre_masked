
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {scalar_t__ channel_count; TYPE_1__* channel; } ;
struct TYPE_2__ {struct TYPE_2__* tx_ring; struct TYPE_2__* rx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_1)
{
 if (!VAR_1->channel)
  return;

 FUNC_0(VAR_1->channel->rx_ring, VAR_0);
 FUNC_0(VAR_1->channel->tx_ring, VAR_0);
 FUNC_0(VAR_1->channel, VAR_0);

 VAR_1->channel = ((void*)0);
 VAR_1->channel_count = 0;
}
