
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {int dummy; } ;
struct vmbus_chan_br {int cbr_rxsz; int cbr_txsz; int cbr_paddr; int cbr; } ;
struct hn_tx_ring {int hn_tx_flags; struct vmbus_channel* hn_chan; } ;
struct hn_softc {int hn_rx_ring_inuse; int hn_tx_ring_inuse; int hn_ifp; struct hn_tx_ring* hn_tx_ring; struct hn_rx_ring* hn_rx_ring; } ;
struct TYPE_2__ {int hv_paddr; } ;
struct hn_rx_ring {int hn_rx_flags; TYPE_1__ hn_br_dma; int hn_br; struct vmbus_channel* hn_chan; } ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct vmbus_channel*,int ) ;
 int FUNC_4 (struct vmbus_channel*) ;
 int FUNC_5 (struct vmbus_channel*,struct vmbus_chan_br*,int *,int ,int ,struct hn_rx_ring*) ;
 int FUNC_6 (struct vmbus_channel*) ;

__attribute__((used)) static int
FUNC_7(struct hn_softc *VAR_8, struct vmbus_channel *VAR_9)
{
 struct vmbus_chan_br VAR_10;
 struct hn_rx_ring *VAR_11;
 struct hn_tx_ring *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;

 VAR_13 = FUNC_6(VAR_9);




 FUNC_1(VAR_13 >= 0 && VAR_13 < VAR_8->hn_rx_ring_inuse,
     ("invalid channel index %d, should > 0 && < %d",
      VAR_13, VAR_8->hn_rx_ring_inuse));
 VAR_11 = &VAR_8->hn_rx_ring[VAR_13];
 FUNC_1((VAR_11->hn_rx_flags & VAR_2) == 0,
     ("RX ring %d already attached", VAR_13));
 VAR_11->hn_rx_flags |= VAR_2;
 VAR_11->hn_chan = VAR_9;

 if (VAR_6) {
  FUNC_2(VAR_8->hn_ifp, "link RX ring %d to chan%u\n",
      VAR_13, FUNC_4(VAR_9));
 }

 if (VAR_13 < VAR_8->hn_tx_ring_inuse) {
  VAR_12 = &VAR_8->hn_tx_ring[VAR_13];
  FUNC_1((VAR_12->hn_tx_flags & VAR_5) == 0,
      ("TX ring %d already attached", VAR_13));
  VAR_12->hn_tx_flags |= VAR_5;

  VAR_12->hn_chan = VAR_9;
  if (VAR_6) {
   FUNC_2(VAR_8->hn_ifp, "link TX ring %d to chan%u\n",
       VAR_13, FUNC_4(VAR_9));
  }
 }


 FUNC_3(VAR_9, FUNC_0(VAR_8, VAR_13));




 VAR_10.cbr = VAR_11->hn_br;
 VAR_10.cbr_paddr = VAR_11->hn_br_dma.hv_paddr;
 VAR_10.cbr_txsz = VAR_4;
 VAR_10.cbr_rxsz = VAR_1;
 VAR_14 = FUNC_5(VAR_9, &VAR_10, ((void*)0), 0, VAR_7, VAR_11);
 if (VAR_14) {
  if (VAR_14 == VAR_0) {
   FUNC_2(VAR_8->hn_ifp, "bufring is connected after "
       "chan%u open failure\n", FUNC_4(VAR_9));
   VAR_11->hn_rx_flags |= VAR_3;
  } else {
   FUNC_2(VAR_8->hn_ifp, "open chan%u failed: %d\n",
       FUNC_4(VAR_9), VAR_14);
  }
 }
 return (VAR_14);
}
