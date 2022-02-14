
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {scalar_t__ sc_tx_timer; int watchdog_ch; int stat_ch; int sc_flags; } ;


 int FUNC_0 (struct uath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uath_softc*) ;
 int FUNC_3 (struct uath_softc*,int ,int *,int ,int ) ;
 int FUNC_4 (struct uath_softc*) ;
 int FUNC_5 (struct uath_softc*,int ) ;

__attribute__((used)) static void
FUNC_6(struct uath_softc *VAR_2)
{

 FUNC_0(VAR_2);

 VAR_2->sc_flags &= ~VAR_0;

 FUNC_1(&VAR_2->stat_ch);
 FUNC_1(&VAR_2->watchdog_ch);
 VAR_2->sc_tx_timer = 0;

 FUNC_2(VAR_2);

 (void)FUNC_4(VAR_2);

 FUNC_5(VAR_2, 0);

 FUNC_3(VAR_2, VAR_1, ((void*)0), 0, 0);
}
