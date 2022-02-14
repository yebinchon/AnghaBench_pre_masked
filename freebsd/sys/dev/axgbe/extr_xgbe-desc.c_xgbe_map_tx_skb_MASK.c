
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_ring_data {int mbuf_free; struct mbuf* mb; } ;
struct xgbe_packet_data {unsigned int rdesc_count; scalar_t__ length; } ;
struct xgbe_ring {unsigned int cur; int mbuf_map; int mbuf_dmat; struct xgbe_packet_data packet_data; } ;
struct xgbe_map_tx_skb_data {unsigned int cur_index; struct xgbe_packet_data* packet; struct xgbe_ring* ring; } ;
struct xgbe_channel {struct xgbe_ring* tx_ring; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,unsigned int) ;
 int FUNC_2 (int ,int ,struct mbuf*,int ,struct xgbe_map_tx_skb_data*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct xgbe_channel *VAR_2, struct mbuf *VAR_3)
{
 struct xgbe_ring *VAR_4 = VAR_2->tx_ring;
 struct xgbe_map_tx_skb_data VAR_5;
 struct xgbe_ring_data *VAR_6;
 struct xgbe_packet_data *VAR_7;
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 FUNC_0("-->xgbe_map_tx_skb: cur = %d\n", VAR_4->cur);

 VAR_8 = VAR_4->cur;
 VAR_9 = VAR_4->cur;

 VAR_7 = &VAR_4->packet_data;
 VAR_7->rdesc_count = 0;
 VAR_7->length = 0;

 VAR_5.ring = VAR_4;
 VAR_5.packet = VAR_7;
 VAR_5.cur_index = VAR_9;

 VAR_10 = FUNC_2(VAR_4->mbuf_dmat, VAR_4->mbuf_map, VAR_3,
     VAR_1, &VAR_5, VAR_0);
 if (VAR_10 != 0)
  return (-VAR_10);

 VAR_9 = VAR_5.cur_index;





 VAR_6 = FUNC_1(VAR_4, VAR_9 - 1);
 VAR_6->mb = VAR_3;
 VAR_6->mbuf_free = 1;


 VAR_7->rdesc_count = VAR_9 - VAR_8;

 FUNC_0("<--xgbe_map_tx_skb: count=%u\n", VAR_7->rdesc_count);

 return VAR_7->rdesc_count;
}
