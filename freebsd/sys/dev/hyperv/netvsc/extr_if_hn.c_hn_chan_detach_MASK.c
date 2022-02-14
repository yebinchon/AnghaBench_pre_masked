
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hn_tx_ring {int hn_tx_flags; } ;
struct hn_softc {int hn_rx_ring_inuse; int hn_tx_ring_inuse; int hn_ifp; struct hn_tx_ring* hn_tx_ring; struct hn_rx_ring* hn_rx_ring; } ;
struct hn_rx_ring {int hn_rx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (struct vmbus_channel*) ;
 int FUNC_3 (struct vmbus_channel*) ;
 int FUNC_4 (struct vmbus_channel*) ;

__attribute__((used)) static void
FUNC_5(struct hn_softc *VAR_4, struct vmbus_channel *VAR_5)
{
 struct hn_rx_ring *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_4(VAR_5);




 FUNC_0(VAR_7 >= 0 && VAR_7 < VAR_4->hn_rx_ring_inuse,
     ("invalid channel index %d, should > 0 && < %d",
      VAR_7, VAR_4->hn_rx_ring_inuse));
 VAR_6 = &VAR_4->hn_rx_ring[VAR_7];
 FUNC_0((VAR_6->hn_rx_flags & VAR_1),
     ("RX ring %d is not attached", VAR_7));
 VAR_6->hn_rx_flags &= ~VAR_1;

 if (VAR_7 < VAR_4->hn_tx_ring_inuse) {
  struct hn_tx_ring *VAR_9 = &VAR_4->hn_tx_ring[VAR_7];

  FUNC_0((VAR_9->hn_tx_flags & VAR_3),
      ("TX ring %d is not attached attached", VAR_7));
  VAR_9->hn_tx_flags &= ~VAR_3;
 }







 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8 == VAR_0) {
  FUNC_1(VAR_4->hn_ifp, "chan%u bufring is connected "
      "after being closed\n", FUNC_3(VAR_5));
  VAR_6->hn_rx_flags |= VAR_2;
 } else if (VAR_8) {
  FUNC_1(VAR_4->hn_ifp, "chan%u close failed: %d\n",
      FUNC_3(VAR_5), VAR_8);
 }
}
