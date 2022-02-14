
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upgt_softc {int sc_flags; scalar_t__ sc_tx_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct upgt_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct upgt_softc*) ;
 int FUNC_2 (struct upgt_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct upgt_softc *VAR_2)
{

 FUNC_0(VAR_2);

 if (VAR_2->sc_flags & VAR_1)
  FUNC_2(VAR_2, VAR_0);
 FUNC_1(VAR_2);

 VAR_2->sc_tx_timer = 0;
 VAR_2->sc_flags &= ~VAR_1;
}
