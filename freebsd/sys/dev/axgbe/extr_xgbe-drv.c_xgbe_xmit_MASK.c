
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_packet_data {int rdesc_count; } ;
struct xgbe_ring {struct xgbe_packet_data packet_data; } ;
struct TYPE_2__ {int link; } ;
struct xgbe_desc_if {int (* map_tx_skb ) (struct xgbe_channel*,struct mbuf*) ;} ;
struct xgbe_hw_if {int (* dev_xmit ) (struct xgbe_channel*) ;} ;
struct xgbe_prv_data {struct xgbe_channel* channel; TYPE_1__ phy; int dev_state; struct xgbe_desc_if desc_if; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {struct xgbe_ring* tx_ring; } ;
struct mbuf {int * m_nextpkt; } ;
struct ifnet {struct xgbe_prv_data* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct xgbe_packet_data*,int ,int) ;
 int FUNC_6 (struct xgbe_channel*,struct mbuf*) ;
 int FUNC_7 (struct xgbe_channel*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct xgbe_channel*,struct xgbe_ring*,int ) ;
 int FUNC_10 (struct xgbe_prv_data*,struct xgbe_ring*,struct mbuf*,struct xgbe_packet_data*) ;

int FUNC_11(struct ifnet *VAR_2, struct mbuf *VAR_3)
{
 struct xgbe_prv_data *VAR_4 = VAR_2->if_softc;
 struct xgbe_hw_if *VAR_5 = &VAR_4->hw_if;
 struct xgbe_desc_if *VAR_6 = &VAR_4->desc_if;
 struct xgbe_channel *VAR_7;
 struct xgbe_ring *VAR_8;
 struct xgbe_packet_data *VAR_9;
 int VAR_10;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3->m_nextpkt == ((void*)0));

 if (FUNC_2(FUNC_8(VAR_1, &VAR_4->dev_state) ||
     !VAR_4->phy.link)) {
  FUNC_4(VAR_3);
  return (VAR_0);
 }

 VAR_7 = VAR_4->channel;
 VAR_8 = VAR_7->tx_ring;
 VAR_9 = &VAR_8->packet_data;


 FUNC_5(VAR_9, 0, sizeof(*VAR_9));
 FUNC_10(VAR_4, VAR_8, VAR_3, VAR_9);


 VAR_10 = FUNC_9(VAR_7, VAR_8, VAR_9->rdesc_count);
 if (VAR_10)
  goto tx_netdev_return;

 if (!VAR_6->map_tx_skb(VAR_7, VAR_3)) {
  goto tx_netdev_return;
 }


 VAR_5->dev_xmit(VAR_7);

 return 0;

tx_netdev_return:
 FUNC_3(VAR_3);

 return 0;
}
