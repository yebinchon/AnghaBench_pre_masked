
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_flags; int hn_rx_ring_cnt; scalar_t__ hn_rx_ring_inuse; struct hn_rx_ring* hn_rx_ring; int hn_dev; int * hn_rxbuf; int hn_rxbuf_dma; } ;
struct hn_rx_ring {int hn_rx_flags; struct hn_rx_ring* hn_pktbuf; int hn_lro; int * hn_br; int hn_br_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hn_rx_ring*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct hn_softc *VAR_3)
{
 int VAR_4;

 if (VAR_3->hn_rxbuf != ((void*)0)) {
  if ((VAR_3->hn_flags & VAR_0) == 0)
   FUNC_2(&VAR_3->hn_rxbuf_dma, VAR_3->hn_rxbuf);
  else
   FUNC_0(VAR_3->hn_dev, "RXBUF is referenced\n");
  VAR_3->hn_rxbuf = ((void*)0);
 }

 if (VAR_3->hn_rx_ring_cnt == 0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->hn_rx_ring_cnt; ++VAR_4) {
  struct hn_rx_ring *VAR_5 = &VAR_3->hn_rx_ring[VAR_4];

  if (VAR_5->hn_br == ((void*)0))
   continue;
  if ((VAR_5->hn_rx_flags & VAR_1) == 0) {
   FUNC_2(&VAR_5->hn_br_dma, VAR_5->hn_br);
  } else {
   FUNC_0(VAR_3->hn_dev,
       "%dth channel bufring is referenced", VAR_4);
  }
  VAR_5->hn_br = ((void*)0);




  FUNC_1(VAR_5->hn_pktbuf, VAR_2);
 }
 FUNC_1(VAR_3->hn_rx_ring, VAR_2);
 VAR_3->hn_rx_ring = ((void*)0);

 VAR_3->hn_rx_ring_cnt = 0;
 VAR_3->hn_rx_ring_inuse = 0;
}
