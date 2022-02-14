
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct dwc_softc {int txcount; int tx_watchdog_count; int tx_idx_head; struct ifnet* ifp; int link_is_up; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (struct dwc_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *,struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct dwc_softc*,int ,int) ;
 scalar_t__ FUNC_5 (struct dwc_softc*,int ,struct mbuf**) ;
 int FUNC_6 (struct dwc_softc*,int ) ;

__attribute__((used)) static void
FUNC_7(struct dwc_softc *VAR_4)
{
 struct ifnet *VAR_5;
 struct mbuf *VAR_6;
 int VAR_7;

 FUNC_1(VAR_4);

 if (!VAR_4->link_is_up)
  return;

 VAR_5 = VAR_4->ifp;

 if (VAR_5->if_drv_flags & VAR_0) {
  return;
 }

 VAR_7 = 0;

 for (;;) {
  if (VAR_4->txcount == (VAR_2-1)) {
   VAR_5->if_drv_flags |= VAR_0;
   break;
  }

  FUNC_2(&VAR_5->if_snd, VAR_6);
  if (VAR_6 == ((void*)0))
   break;
  if (FUNC_5(VAR_4, VAR_4->tx_idx_head, &VAR_6) != 0) {
   FUNC_3(&VAR_5->if_snd, VAR_6);
   break;
  }
  FUNC_0(VAR_5, VAR_6);
  VAR_4->tx_idx_head = FUNC_6(VAR_4, VAR_4->tx_idx_head);
  ++VAR_7;
 }

 if (VAR_7 != 0) {
  FUNC_4(VAR_4, VAR_1, 0x1);
  VAR_4->tx_watchdog_count = VAR_3;
 }
}
