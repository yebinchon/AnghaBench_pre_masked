
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int ast_ant_defswitch; } ;
struct ath_softc {scalar_t__ sc_rxotherant; int sc_defant; TYPE_1__ sc_stats; struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;


 int FUNC_0 (struct ath_hal*,int ) ;

void
FUNC_1(struct ath_softc *VAR_0, u_int VAR_1)
{
 struct ath_hal *VAR_2 = VAR_0->sc_ah;


 FUNC_0(VAR_2, VAR_1);
 if (VAR_0->sc_defant != VAR_1)
  VAR_0->sc_stats.ast_ant_defswitch++;
 VAR_0->sc_defant = VAR_1;
 VAR_0->sc_rxotherant = 0;
}
