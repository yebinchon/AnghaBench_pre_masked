
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct ffec_softc {int tx_idx_tail; int tx_idx_head; struct ffec_hwdesc* rxdesc_ring; int txbuf_tag; struct ffec_bufmap* txbuf_map; struct ffec_hwdesc* txdesc_ring; int ffec_callout; scalar_t__ tx_watchdog_count; struct ifnet* ifp; } ;
struct ffec_hwdesc {scalar_t__ buf_paddr; } ;
struct ffec_bufmap {int * mbuf; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ffec_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ffec_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct ffec_softc*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ffec_softc*,int,scalar_t__) ;
 int FUNC_6 (struct ffec_softc*,int,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ffec_softc*,int) ;

__attribute__((used)) static void
FUNC_9(struct ffec_softc *VAR_7)
{
 struct ifnet *VAR_8;
 struct ffec_hwdesc *VAR_9;
 struct ffec_bufmap *VAR_10;
 int VAR_11;

 FUNC_0(VAR_7);

 VAR_8 = VAR_7->ifp;
 VAR_8->if_drv_flags &= ~(VAR_5 | VAR_4);
 VAR_7->tx_watchdog_count = 0;





 FUNC_2(VAR_7, VAR_1, FUNC_1(VAR_7, VAR_1) & ~VAR_0);
 FUNC_2(VAR_7, VAR_2, 0x00000000);
 FUNC_2(VAR_7, VAR_3, 0xffffffff);
 FUNC_4(&VAR_7->ffec_callout);
 VAR_11 = VAR_7->tx_idx_tail;
 while (VAR_11 != VAR_7->tx_idx_head) {
  VAR_9 = &VAR_7->txdesc_ring[VAR_11];
  VAR_10 = &VAR_7->txbuf_map[VAR_11];
  if (VAR_9->buf_paddr != 0) {
   FUNC_3(VAR_7->txbuf_tag, VAR_10->map);
   FUNC_7(VAR_10->mbuf);
   VAR_10->mbuf = ((void*)0);
   FUNC_6(VAR_7, VAR_11, 0, 0);
  }
  VAR_11 = FUNC_8(VAR_7, VAR_11);
 }







 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
  VAR_9 = &VAR_7->rxdesc_ring[VAR_11];
  FUNC_5(VAR_7, VAR_11, VAR_9->buf_paddr);
 }
}
