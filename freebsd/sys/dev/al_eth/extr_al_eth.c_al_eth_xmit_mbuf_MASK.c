
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct mbuf {int dummy; } ;
struct al_eth_pkt {int num_of_bufs; struct al_buf* bufs; int flags; } ;
struct al_eth_tx_buffer {scalar_t__ tx_descs; int dma_map; struct al_eth_pkt hal_pkt; struct mbuf* m; } ;
struct al_eth_ring {int stall; int ring_id; size_t next_to_use; int dma_q; int dev; int dma_buf_tag; struct al_eth_tx_buffer* tx_buffer_info; } ;
struct al_buf {int len; int addr; } ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct al_eth_ring*,size_t) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct al_eth_ring*,struct al_eth_tx_buffer*,struct al_eth_pkt*,struct mbuf*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,struct al_eth_pkt*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,struct mbuf*,TYPE_1__*,int*,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,char*,int) ;
 struct mbuf* FUNC_10 (struct mbuf*,int ) ;
 int FUNC_11 (struct mbuf*) ;
 int FUNC_12 (char*,int) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct al_eth_ring *VAR_10, struct mbuf *VAR_11)
{
 struct al_eth_tx_buffer *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 uint16_t VAR_16;
 bus_dma_segment_t VAR_17[VAR_1 + 1];
 struct al_eth_pkt *VAR_18;
 struct al_buf *VAR_19;
 boolean_t VAR_20;


 if (FUNC_13(VAR_10->stall) != 0) {
  for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
   if (FUNC_6(VAR_10->dma_q) >=
       (VAR_0 -
       VAR_3)) {
    VAR_10->stall = 0;
    break;
   }
   FUNC_12("stall", 1);
  }
  if (VAR_15 == VAR_9) {
   FUNC_8(VAR_10->dev,
       "timeout waiting for queue %d ready!\n",
       VAR_10->ring_id);
   return;
  } else {
   FUNC_9(VAR_10->dev,
       "queue %d is ready!\n", VAR_10->ring_id);
  }
 }

 VAR_16 = VAR_10->next_to_use;
 VAR_12 = &VAR_10->tx_buffer_info[VAR_16];
 VAR_12->m = VAR_11;
 VAR_18 = &VAR_12->hal_pkt;

 if (VAR_11 == ((void*)0)) {
  FUNC_8(VAR_10->dev, "mbuf is NULL\n");
  return;
 }

 VAR_20 = VAR_8;

retry:
 VAR_13 = FUNC_7(VAR_10->dma_buf_tag, VAR_12->dma_map,
     VAR_11, VAR_17, &VAR_14, VAR_4);
 if (FUNC_1(VAR_13)) {
  struct mbuf *VAR_21;

  if (VAR_13 == VAR_5) {

   if (VAR_20 == VAR_8) {
    VAR_20 = VAR_6;
    VAR_21 = FUNC_10(VAR_11, VAR_7);
    if (VAR_21 == ((void*)0)) {
     FUNC_8(VAR_10->dev,
         "failed to defrag mbuf\n");
     goto exit;
    }
    VAR_11 = VAR_21;
    goto retry;
   } else {
    FUNC_8(VAR_10->dev,
        "failed to map mbuf, error %d\n", VAR_13);
    goto exit;
   }
  } else {
   FUNC_8(VAR_10->dev,
       "failed to map mbuf, error %d\n", VAR_13);
   goto exit;
  }
 }


 VAR_18->flags = VAR_2;
 FUNC_3(VAR_10, VAR_12, VAR_18, VAR_11);

 VAR_19 = VAR_18->bufs;
 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_19->addr = VAR_17[VAR_15].ds_addr;
  VAR_19->len = VAR_17[VAR_15].ds_len;

  VAR_19++;
 }

 VAR_18->num_of_bufs = VAR_14;


 VAR_12->tx_descs = FUNC_5(VAR_10->dma_q, VAR_18);

 if (VAR_12->tx_descs == 0)
  goto exit;





 if (FUNC_13(FUNC_6(VAR_10->dma_q) <
     (VAR_1 + 2))) {
  VAR_10->stall = 1;
  FUNC_9(VAR_10->dev, "stall, stopping queue %d...\n",
      VAR_10->ring_id);
  FUNC_2();
 }

 VAR_10->next_to_use = FUNC_0(VAR_10, VAR_16);


 FUNC_4(VAR_10->dma_q, VAR_12->tx_descs);
 return;

exit:
 FUNC_11(VAR_11);
}
