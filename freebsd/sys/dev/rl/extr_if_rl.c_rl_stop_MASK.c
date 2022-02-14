
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ** rl_tx_chain; int * rl_tx_dmamap; int rl_tx_tag; } ;
struct rl_softc {TYPE_1__ rl_cdata; int rl_dev; int rl_flags; int rl_stat_callout; scalar_t__ rl_watchdog_timer; struct ifnet* rl_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rl_softc*,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int FUNC_2 (struct rl_softc*,int ,int) ;
 int FUNC_3 (struct rl_softc*,scalar_t__,int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct rl_softc*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct rl_softc *VAR_11)
{
 int VAR_12;
 struct ifnet *VAR_13 = VAR_11->rl_ifp;

 FUNC_5(VAR_11);

 VAR_11->rl_watchdog_timer = 0;
 FUNC_8(&VAR_11->rl_stat_callout);
 VAR_13->if_drv_flags &= ~(VAR_2 | VAR_1);
 VAR_11->rl_flags &= ~VAR_6;

 FUNC_1(VAR_11, VAR_5, 0x00);
 FUNC_2(VAR_11, VAR_7, 0x0000);
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  FUNC_4(10);
  if ((FUNC_0(VAR_11, VAR_5) &
      (VAR_3 | VAR_4)) == 0)
   break;
 }
 if (VAR_12 == VAR_8)
  FUNC_9(VAR_11->rl_dev, "Unable to stop Tx/Rx MAC\n");




 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if (VAR_11->rl_cdata.rl_tx_chain[VAR_12] != ((void*)0)) {
   FUNC_6(VAR_11->rl_cdata.rl_tx_tag,
       VAR_11->rl_cdata.rl_tx_dmamap[VAR_12],
       VAR_0);
   FUNC_7(VAR_11->rl_cdata.rl_tx_tag,
       VAR_11->rl_cdata.rl_tx_dmamap[VAR_12]);
   FUNC_10(VAR_11->rl_cdata.rl_tx_chain[VAR_12]);
   VAR_11->rl_cdata.rl_tx_chain[VAR_12] = ((void*)0);
   FUNC_3(VAR_11, VAR_9 + (VAR_12 * sizeof(uint32_t)),
       0x0000000);
  }
 }
}
