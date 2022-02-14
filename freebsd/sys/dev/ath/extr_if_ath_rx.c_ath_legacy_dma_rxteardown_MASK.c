
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dd_desc_len; } ;
struct ath_softc {int sc_rxbuf; TYPE_1__ sc_rxdma; } ;


 int FUNC_0 (struct ath_softc*,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_1(struct ath_softc *VAR_0)
{

 if (VAR_0->sc_rxdma.dd_desc_len != 0)
  FUNC_0(VAR_0, &VAR_0->sc_rxdma, &VAR_0->sc_rxbuf);
 return (0);
}
