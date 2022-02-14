
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct ffec_softc {int txcount; int tx_watchdog_count; int txdesc_map; int txdesc_tag; int tx_idx_head; struct ifnet* ifp; int link_is_up; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ffec_softc*) ;
 int VAR_4 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *,struct mbuf*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ffec_softc*,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct ffec_softc*,int ,struct mbuf**) ;
 int FUNC_7 (struct ffec_softc*,int ) ;

__attribute__((used)) static void
FUNC_8(struct ffec_softc *VAR_7)
{
 struct ifnet *VAR_8;
 struct mbuf *VAR_9;
 int VAR_10;

 FUNC_1(VAR_7);

 if (!VAR_7->link_is_up)
  return;

 VAR_8 = VAR_7->ifp;

 if (VAR_8->if_drv_flags & VAR_4)
  return;

 VAR_10 = 0;

 for (;;) {
  if (VAR_7->txcount == (VAR_5-1)) {
   VAR_8->if_drv_flags |= VAR_4;
   break;
  }
  FUNC_2(&VAR_8->if_snd, VAR_9);
  if (VAR_9 == ((void*)0))
   break;
  if (FUNC_6(VAR_7, VAR_7->tx_idx_head, &VAR_9) != 0) {
   FUNC_3(&VAR_8->if_snd, VAR_9);
   break;
  }
  FUNC_0(VAR_8, VAR_9);
  VAR_7->tx_idx_head = FUNC_7(VAR_7, VAR_7->tx_idx_head);
  ++VAR_10;
 }

 if (VAR_10 != 0) {
  FUNC_5(VAR_7->txdesc_tag, VAR_7->txdesc_map, VAR_1);
  FUNC_4(VAR_7, VAR_2, VAR_3);
  FUNC_5(VAR_7->txdesc_tag, VAR_7->txdesc_map, VAR_0);
  VAR_7->tx_watchdog_count = VAR_6;
 }
}
