
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct ffec_softc {size_t tx_idx_tail; size_t tx_idx_head; scalar_t__ tx_watchdog_count; int txbuf_tag; struct ffec_bufmap* txbuf_map; struct ffec_hwdesc* txdesc_ring; struct ifnet* ifp; int txdesc_map; int txdesc_tag; } ;
struct ffec_hwdesc {int flags_len; } ;
struct ffec_bufmap {int * mbuf; int map; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ffec_softc*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ffec_softc*,size_t,int ,int ) ;
 int FUNC_4 (struct ffec_softc*) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (struct ffec_softc*,size_t) ;

__attribute__((used)) static void
FUNC_7(struct ffec_softc *VAR_5)
{
 struct ifnet *VAR_6;
 struct ffec_hwdesc *VAR_7;
 struct ffec_bufmap *VAR_8;
 boolean_t VAR_9;

 FUNC_0(VAR_5);


 FUNC_1(VAR_5->txdesc_tag, VAR_5->txdesc_map, VAR_2);
 FUNC_1(VAR_5->txdesc_tag, VAR_5->txdesc_map, VAR_0);
 VAR_6 = VAR_5->ifp;
 VAR_9 = 0;
 while (VAR_5->tx_idx_tail != VAR_5->tx_idx_head) {
  VAR_7 = &VAR_5->txdesc_ring[VAR_5->tx_idx_tail];
  if (VAR_7->flags_len & VAR_3)
   break;
  VAR_9 = 1;
  VAR_8 = &VAR_5->txbuf_map[VAR_5->tx_idx_tail];
  FUNC_1(VAR_5->txbuf_tag, VAR_8->map,
      VAR_1);
  FUNC_2(VAR_5->txbuf_tag, VAR_8->map);
  FUNC_5(VAR_8->mbuf);
  VAR_8->mbuf = ((void*)0);
  FUNC_3(VAR_5, VAR_5->tx_idx_tail, 0, 0);
  VAR_5->tx_idx_tail = FUNC_6(VAR_5, VAR_5->tx_idx_tail);
 }





 if (VAR_9) {
  VAR_6->if_drv_flags &= ~VAR_4;
  FUNC_4(VAR_5);
 }


 if (VAR_5->tx_idx_tail == VAR_5->tx_idx_head) {
  VAR_5->tx_watchdog_count = 0;
 }
}
