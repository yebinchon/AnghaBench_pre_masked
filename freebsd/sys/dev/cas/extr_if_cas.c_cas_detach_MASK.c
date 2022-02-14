
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct cas_softc {int sc_pdmatag; int sc_rdmatag; int sc_tdmatag; int sc_cdmatag; int * sc_cddmamap; int * sc_control_data; TYPE_2__* sc_txsoft; TYPE_1__* sc_rxdsoft; int sc_miibus; int sc_dev; int sc_tq; int sc_tx_task; int sc_intr_task; int sc_rx_ch; int sc_tick_ch; struct ifnet* sc_ifp; } ;
struct TYPE_4__ {int * txs_dmamap; } ;
struct TYPE_3__ {scalar_t__ rxds_paddr; int * rxds_dmamap; int * rxds_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas_softc*,int) ;
 int FUNC_1 (struct cas_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct cas_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(struct cas_softc *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->sc_ifp;
 int VAR_6;

 FUNC_11(VAR_5);
 FUNC_1(VAR_4);
 FUNC_9(VAR_5);
 FUNC_2(VAR_4);
 FUNC_8(&VAR_4->sc_tick_ch);
 FUNC_8(&VAR_4->sc_rx_ch);
 FUNC_13(VAR_4->sc_tq, &VAR_4->sc_intr_task);
 FUNC_13(VAR_4->sc_tq, &VAR_4->sc_tx_task);
 FUNC_12(VAR_5);
 FUNC_14(VAR_4->sc_tq);
 FUNC_10(VAR_4->sc_dev, VAR_4->sc_miibus);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  if (VAR_4->sc_rxdsoft[VAR_6].rxds_dmamap != ((void*)0))
   FUNC_5(VAR_4->sc_rdmatag,
       VAR_4->sc_rxdsoft[VAR_6].rxds_dmamap,
       VAR_0 | VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  if (VAR_4->sc_rxdsoft[VAR_6].rxds_paddr != 0)
   FUNC_6(VAR_4->sc_rdmatag,
       VAR_4->sc_rxdsoft[VAR_6].rxds_dmamap);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  if (VAR_4->sc_rxdsoft[VAR_6].rxds_buf != ((void*)0))
   FUNC_7(VAR_4->sc_rdmatag,
       VAR_4->sc_rxdsoft[VAR_6].rxds_buf,
       VAR_4->sc_rxdsoft[VAR_6].rxds_dmamap);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  if (VAR_4->sc_txsoft[VAR_6].txs_dmamap != ((void*)0))
   FUNC_4(VAR_4->sc_tdmatag,
       VAR_4->sc_txsoft[VAR_6].txs_dmamap);
 FUNC_0(VAR_4, VAR_0 | VAR_1);
 FUNC_6(VAR_4->sc_cdmatag, VAR_4->sc_cddmamap);
 FUNC_7(VAR_4->sc_cdmatag, VAR_4->sc_control_data,
     VAR_4->sc_cddmamap);
 FUNC_3(VAR_4->sc_cdmatag);
 FUNC_3(VAR_4->sc_tdmatag);
 FUNC_3(VAR_4->sc_rdmatag);
 FUNC_3(VAR_4->sc_pdmatag);
}
