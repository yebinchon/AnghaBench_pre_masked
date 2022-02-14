
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dd_desc_len; } ;
struct ath_softc {int sc_txbuf_mgmt; TYPE_1__ sc_txdma_mgmt; int sc_txbuf; TYPE_1__ sc_txdma; int sc_bbuf; TYPE_1__ sc_bdma; } ;


 int FUNC_0 (struct ath_softc*,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_0)
{

 if (VAR_0->sc_bdma.dd_desc_len != 0)
  FUNC_0(VAR_0, &VAR_0->sc_bdma, &VAR_0->sc_bbuf);
 if (VAR_0->sc_txdma.dd_desc_len != 0)
  FUNC_0(VAR_0, &VAR_0->sc_txdma, &VAR_0->sc_txbuf);
 if (VAR_0->sc_txdma_mgmt.dd_desc_len != 0)
  FUNC_0(VAR_0, &VAR_0->sc_txdma_mgmt,
      &VAR_0->sc_txbuf_mgmt);
}
