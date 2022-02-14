
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct dwc_softc {size_t tx_idx_tail; size_t tx_idx_head; scalar_t__ tx_watchdog_count; int txbuf_tag; struct dwc_bufmap* txbuf_map; struct dwc_hwdesc* txdesc_ring; struct ifnet* ifp; } ;
struct dwc_hwdesc {int tdes0; } ;
struct dwc_bufmap {int * mbuf; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dwc_softc*,size_t,int ,int ) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (struct dwc_softc*,size_t) ;

__attribute__((used)) static void
FUNC_7(struct dwc_softc *VAR_4)
{
 struct dwc_bufmap *VAR_5;
 struct dwc_hwdesc *VAR_6;
 struct ifnet *VAR_7;

 FUNC_0(VAR_4);

 VAR_7 = VAR_4->ifp;
 while (VAR_4->tx_idx_tail != VAR_4->tx_idx_head) {
  VAR_6 = &VAR_4->txdesc_ring[VAR_4->tx_idx_tail];
  if ((VAR_6->tdes0 & VAR_1) != 0)
   break;
  VAR_5 = &VAR_4->txbuf_map[VAR_4->tx_idx_tail];
  FUNC_1(VAR_4->txbuf_tag, VAR_5->map,
      VAR_0);
  FUNC_2(VAR_4->txbuf_tag, VAR_5->map);
  FUNC_5(VAR_5->mbuf);
  VAR_5->mbuf = ((void*)0);
  FUNC_3(VAR_4, VAR_4->tx_idx_tail, 0, 0);
  VAR_4->tx_idx_tail = FUNC_6(VAR_4, VAR_4->tx_idx_tail);
  VAR_7->if_drv_flags &= ~VAR_3;
  FUNC_4(VAR_7, VAR_2, 1);
 }


 if (VAR_4->tx_idx_tail == VAR_4->tx_idx_head) {
  VAR_4->tx_watchdog_count = 0;
 }
}
