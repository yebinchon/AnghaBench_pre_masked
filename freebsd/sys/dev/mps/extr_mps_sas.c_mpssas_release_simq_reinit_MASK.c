
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpssas_softc {int flags; int sc; int sim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(struct mpssas_softc *VAR_2)
{
 if (VAR_2->flags & VAR_0) {
  VAR_2->flags &= ~VAR_0;
  FUNC_1(VAR_2->sim, 1);
  FUNC_0(VAR_2->sc, VAR_1, "Unfreezing SIM queue\n");
 }
}
