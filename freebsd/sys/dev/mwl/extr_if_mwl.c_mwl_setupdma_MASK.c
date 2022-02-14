
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dd_desc_paddr; } ;
struct mwl_txq {TYPE_2__ dma; } ;
struct TYPE_8__ {int maxNumWCB; int maxNumTxWcb; int * wcbBase; int rxDescRead; } ;
struct TYPE_7__ {int * wcbBase; int rxDescWrite; int rxDescRead; } ;
struct TYPE_5__ {int dd_desc_paddr; } ;
struct mwl_softc {int sc_dev; TYPE_4__ sc_hwdma; int sc_mh; TYPE_3__ sc_hwspecs; struct mwl_txq* sc_txq; TYPE_1__ sc_rxdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwl_softc*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct mwl_softc *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_3->sc_hwdma.rxDescRead = VAR_3->sc_rxdma.dd_desc_paddr;
 FUNC_0(VAR_3, VAR_3->sc_hwspecs.rxDescRead, VAR_3->sc_hwdma.rxDescRead);
 FUNC_0(VAR_3, VAR_3->sc_hwspecs.rxDescWrite, VAR_3->sc_hwdma.rxDescRead);

 for (VAR_5 = 0; VAR_5 < VAR_1-VAR_0; VAR_5++) {
  struct mwl_txq *VAR_6 = &VAR_3->sc_txq[VAR_5];
  VAR_3->sc_hwdma.wcbBase[VAR_5] = VAR_6->dma.dd_desc_paddr;
  FUNC_0(VAR_3, VAR_3->sc_hwspecs.wcbBase[VAR_5], VAR_3->sc_hwdma.wcbBase[VAR_5]);
 }
 VAR_3->sc_hwdma.maxNumTxWcb = VAR_2;
 VAR_3->sc_hwdma.maxNumWCB = VAR_1-VAR_0;

 VAR_4 = FUNC_2(VAR_3->sc_mh, &VAR_3->sc_hwdma);
 if (VAR_4 != 0) {
  FUNC_1(VAR_3->sc_dev,
      "unable to setup tx/rx dma; hal status %u\n", VAR_4);

 }
 return VAR_4;
}
