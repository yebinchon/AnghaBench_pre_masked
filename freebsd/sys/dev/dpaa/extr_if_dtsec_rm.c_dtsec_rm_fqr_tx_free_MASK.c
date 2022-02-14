
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {scalar_t__ sc_tx_conf_fqr; scalar_t__ sc_tx_fqr; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct dtsec_softc *VAR_0)
{

 if (VAR_0->sc_tx_fqr)
  FUNC_0(VAR_0->sc_tx_fqr);

 if (VAR_0->sc_tx_conf_fqr)
  FUNC_0(VAR_0->sc_tx_conf_fqr);
}
