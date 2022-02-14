
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hdr_len; scalar_t__ len; } ;
struct xgbe_ring_data {int mbuf_free; TYPE_2__ rx; struct mbuf* mb; } ;
struct xgbe_packet_data {scalar_t__ errors; int attributes; } ;
struct xgbe_ring {int cur; struct xgbe_packet_data packet_data; } ;
struct xgbe_hw_if {scalar_t__ (* dev_read ) (struct xgbe_channel*) ;} ;
struct xgbe_prv_data {struct ifnet* netdev; struct xgbe_hw_if hw_if; } ;
struct xgbe_channel {struct xgbe_ring* rx_ring; struct xgbe_prv_data* pdata; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct mbuf {scalar_t__ m_len; TYPE_3__* m_next; TYPE_1__ m_pkthdr; } ;
struct ifnet {int (* if_input ) (struct ifnet*,struct mbuf*) ;} ;
struct TYPE_6__ {scalar_t__ m_len; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xgbe_ring_data* FUNC_1 (struct xgbe_ring*,int) ;
 int VAR_4 ;
 unsigned int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct mbuf*,struct ifnet*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (struct xgbe_channel*) ;
 int FUNC_7 (struct ifnet*,struct mbuf*) ;
 int FUNC_8 (struct xgbe_ring*) ;
 int FUNC_9 (struct xgbe_channel*) ;

__attribute__((used)) static int FUNC_10(struct xgbe_channel *VAR_5, int VAR_6)
{
 struct xgbe_prv_data *VAR_7 = VAR_5->pdata;
 struct xgbe_hw_if *VAR_8 = &VAR_7->hw_if;
 struct xgbe_ring *VAR_9 = VAR_5->rx_ring;
 struct xgbe_ring_data *VAR_10;
 struct xgbe_packet_data *VAR_11;
 struct ifnet *VAR_12 = VAR_7->netdev;
 struct mbuf *VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_0("-->xgbe_rx_poll: budget=%d\n", VAR_6);


 if (!VAR_9)
  return 0;

 VAR_14 = 0;
 VAR_15 = 0;

 VAR_10 = FUNC_1(VAR_9, VAR_9->cur);
 VAR_11 = &VAR_9->packet_data;
 while (VAR_17 < VAR_6) {
  FUNC_0("  cur = %d\n", VAR_9->cur);

read_again:
  VAR_10 = FUNC_1(VAR_9, VAR_9->cur);

  if (FUNC_8(VAR_9) > (VAR_4 >> 3))
   FUNC_9(VAR_5);

  if (VAR_8->dev_read(VAR_5))
   break;

  VAR_13 = VAR_10->mb;

  VAR_16++;
  VAR_9->cur++;

  VAR_14 = FUNC_2(VAR_11->attributes,
         VAR_3,
         VAR_2);
  VAR_15 = FUNC_2(VAR_11->attributes,
           VAR_3,
           VAR_0);


  if (VAR_14 || VAR_15) {
   goto read_again;
  }

  if (VAR_11->errors) {
   VAR_10->mbuf_free = 1;
   goto next_packet;
  }
  VAR_10->mb = ((void*)0);

  VAR_13->m_pkthdr.len = VAR_10->rx.hdr_len + VAR_10->rx.len;
  if (VAR_10->rx.hdr_len != 0) {
   VAR_13->m_len = VAR_10->rx.hdr_len;
   VAR_13->m_next->m_len = VAR_10->rx.len;
  } else {
   VAR_13->m_len = VAR_10->rx.len;
   FUNC_5(VAR_13->m_next);
   VAR_13->m_next = ((void*)0);
  }
  FUNC_4(VAR_13, VAR_12);
  FUNC_3(VAR_12, VAR_1, 1);

  VAR_12->if_input(VAR_12, VAR_13);

next_packet:
  VAR_17++;
 }

 FUNC_0("<--xgbe_rx_poll: packet_count = %d\n", VAR_17);

 return VAR_17;
}
