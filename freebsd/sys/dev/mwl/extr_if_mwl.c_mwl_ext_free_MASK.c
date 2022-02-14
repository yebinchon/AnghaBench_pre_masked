
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_softc {scalar_t__ sc_nrxfree; int sc_imask; int sc_mh; scalar_t__ sc_rxblocked; } ;
struct TYPE_2__ {int ext_buf; struct mwl_softc* ext_arg1; } ;
struct mbuf {TYPE_1__ m_ext; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mwl_softc*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_1)
{
 struct mwl_softc *VAR_2 = VAR_1->m_ext.ext_arg1;


 FUNC_1(VAR_2, VAR_1->m_ext.ext_buf);





 if (VAR_2->sc_rxblocked && VAR_2->sc_nrxfree > VAR_0) {
  VAR_2->sc_rxblocked = 0;
  FUNC_0(VAR_2->sc_mh, VAR_2->sc_imask);
 }
}
