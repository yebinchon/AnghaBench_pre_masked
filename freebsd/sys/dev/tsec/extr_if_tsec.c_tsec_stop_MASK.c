
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tsec_softc {size_t tx_idx_tail; size_t tx_idx_head; TYPE_1__* tx_bufmap; int tsec_tx_mtag; scalar_t__ tsec_watchdog; int tsec_callout; struct ifnet* tsec_ifp; } ;
struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {int mbuf; int map; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tsec_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct tsec_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct tsec_softc*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tsec_softc*,int ) ;
 int FUNC_9 (struct tsec_softc*,int ) ;

__attribute__((used)) static void
FUNC_10(struct tsec_softc *VAR_7)
{
 struct ifnet *VAR_8;
 uint32_t VAR_9;

 FUNC_1(VAR_7);

 VAR_8 = VAR_7->tsec_ifp;


 FUNC_6(&VAR_7->tsec_callout);
 VAR_8->if_drv_flags &= ~(VAR_2 | VAR_1);
 VAR_7->tsec_watchdog = 0;


 FUNC_9(VAR_7, 0);
 FUNC_8(VAR_7, 0);


 while (VAR_7->tx_idx_tail != VAR_7->tx_idx_head) {
  FUNC_4(VAR_7->tsec_tx_mtag,
      VAR_7->tx_bufmap[VAR_7->tx_idx_tail].map,
      VAR_0);
  FUNC_5(VAR_7->tsec_tx_mtag,
      VAR_7->tx_bufmap[VAR_7->tx_idx_tail].map);
  FUNC_7(VAR_7->tx_bufmap[VAR_7->tx_idx_tail].mbuf);
  VAR_7->tx_idx_tail = (VAR_7->tx_idx_tail + 1)
      & (VAR_6 - 1);
 }


 VAR_9 = FUNC_2(VAR_7, VAR_5);
 VAR_9 &= ~(VAR_3 | VAR_4);
 FUNC_3(VAR_7, VAR_5, VAR_9);
 FUNC_0(10);
}
