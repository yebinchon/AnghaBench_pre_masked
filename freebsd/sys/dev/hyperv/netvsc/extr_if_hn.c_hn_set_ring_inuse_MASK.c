
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_rx_ring_cnt; int hn_tx_ring_cnt; int hn_tx_ring_inuse; int hn_rx_ring_inuse; int hn_ifp; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 > 0 && VAR_2 <= VAR_1->hn_rx_ring_cnt,
     ("invalid ring count %d", VAR_2));

 if (VAR_1->hn_tx_ring_cnt > VAR_2)
  VAR_1->hn_tx_ring_inuse = VAR_2;
 else
  VAR_1->hn_tx_ring_inuse = VAR_1->hn_tx_ring_cnt;
 VAR_1->hn_rx_ring_inuse = VAR_2;
 if (VAR_0) {
  FUNC_1(VAR_1->hn_ifp, "%d TX ring, %d RX ring\n",
      VAR_1->hn_tx_ring_inuse, VAR_1->hn_rx_ring_inuse);
 }
}
