
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_flags; scalar_t__ sc_tx_timer; int sc_generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;

__attribute__((used)) static void
FUNC_2(struct iwm_softc *VAR_3)
{

 VAR_3->sc_flags &= ~VAR_0;
 VAR_3->sc_flags |= VAR_2;
 VAR_3->sc_generation++;
 FUNC_0(VAR_3);
 VAR_3->sc_tx_timer = 0;
 FUNC_1(VAR_3);
 VAR_3->sc_flags &= ~VAR_1;
}
