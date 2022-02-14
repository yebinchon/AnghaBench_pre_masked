
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vte_txdesc {int tx_flags; } ;
struct TYPE_2__ {int vte_tx_cnt; int vte_tx_ring_map; int vte_tx_ring_tag; } ;
struct vte_softc {int vte_flags; int vte_watchdog_timer; TYPE_1__ vte_cdata; struct ifnet* vte_ifp; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vte_softc*,int ,int ) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct mbuf*) ;
 struct vte_txdesc* FUNC_7 (struct vte_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_8(struct vte_softc *VAR_10)
{
 struct ifnet *VAR_11;
 struct vte_txdesc *VAR_12;
 struct mbuf *VAR_13;
 int VAR_14;

 VAR_11 = VAR_10->vte_ifp;

 if ((VAR_11->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3 || (VAR_10->vte_flags & VAR_5) == 0)
  return;

 for (VAR_14 = 0; !FUNC_3(&VAR_11->if_snd); ) {

  if (VAR_10->vte_cdata.vte_tx_cnt >= VAR_8 - 1) {
   VAR_11->if_drv_flags |= VAR_2;
   break;
  }
  FUNC_2(&VAR_11->if_snd, VAR_13);
  if (VAR_13 == ((void*)0))
   break;





  if ((VAR_12 = FUNC_7(VAR_10, &VAR_13)) == ((void*)0)) {
   if (VAR_13 != ((void*)0))
    FUNC_4(&VAR_11->if_snd, VAR_13);
   break;
  }

  VAR_14++;




  FUNC_1(VAR_11, VAR_13);

  if ((VAR_12->tx_flags & VAR_6) != 0)
   FUNC_6(VAR_13);
 }

 if (VAR_14 > 0) {
  FUNC_5(VAR_10->vte_cdata.vte_tx_ring_tag,
      VAR_10->vte_cdata.vte_tx_ring_map, VAR_0 |
      VAR_1);
  FUNC_0(VAR_10, VAR_7, VAR_4);
  VAR_10->vte_watchdog_timer = VAR_9;
 }
}
