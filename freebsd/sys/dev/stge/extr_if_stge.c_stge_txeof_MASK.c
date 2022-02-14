
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct stge_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_6__ {int stge_tx_cons; scalar_t__ stge_tx_cnt; int stge_tx_ring_map; int stge_tx_ring_tag; int stge_txbusyq; int stge_txfreeq; int stge_tx_tag; } ;
struct TYPE_5__ {TYPE_1__* stge_tx_ring; } ;
struct stge_softc {TYPE_3__ sc_cdata; scalar_t__ sc_watchdog_timer; TYPE_2__ sc_rdata; struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_4__ {int tfd_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct stge_txdesc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct stge_txdesc*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct stge_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(struct stge_softc *VAR_8)
{
 struct ifnet *VAR_9;
 struct stge_txdesc *VAR_10;
 uint64_t VAR_11;
 int VAR_12;

 FUNC_3(VAR_8);

 VAR_9 = VAR_8->sc_ifp;

 VAR_10 = FUNC_0(&VAR_8->sc_cdata.stge_txbusyq);
 if (VAR_10 == ((void*)0))
  return;
 FUNC_4(VAR_8->sc_cdata.stge_tx_ring_tag,
     VAR_8->sc_cdata.stge_tx_ring_map, VAR_0);





 for (VAR_12 = VAR_8->sc_cdata.stge_tx_cons;;
     VAR_12 = (VAR_12 + 1) % VAR_5) {
  if (VAR_8->sc_cdata.stge_tx_cnt <= 0)
   break;
  VAR_11 = FUNC_6(VAR_8->sc_rdata.stge_tx_ring[VAR_12].tfd_control);
  if ((VAR_11 & VAR_6) == 0)
   break;
  VAR_8->sc_cdata.stge_tx_cnt--;
  VAR_9->if_drv_flags &= ~VAR_4;

  FUNC_4(VAR_8->sc_cdata.stge_tx_tag, VAR_10->tx_dmamap,
      VAR_1);
  FUNC_5(VAR_8->sc_cdata.stge_tx_tag, VAR_10->tx_dmamap);


  FUNC_7(VAR_10->tx_m);
  VAR_10->tx_m = ((void*)0);
  FUNC_2(&VAR_8->sc_cdata.stge_txbusyq, VAR_7);
  FUNC_1(&VAR_8->sc_cdata.stge_txfreeq, VAR_10, VAR_7);
  VAR_10 = FUNC_0(&VAR_8->sc_cdata.stge_txbusyq);
 }
 VAR_8->sc_cdata.stge_tx_cons = VAR_12;
 if (VAR_8->sc_cdata.stge_tx_cnt == 0)
  VAR_8->sc_watchdog_timer = 0;

        FUNC_4(VAR_8->sc_cdata.stge_tx_ring_tag,
     VAR_8->sc_cdata.stge_tx_ring_map,
     VAR_2 | VAR_3);
}
