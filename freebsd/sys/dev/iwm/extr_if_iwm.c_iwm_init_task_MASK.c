
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ic_nrunning; } ;
struct iwm_softc {int sc_flags; TYPE_1__ sc_ic; int sc_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (struct iwm_softc*) ;
 int FUNC_4 (int*,int *,int ,char*,int ) ;
 int FUNC_5 (int*) ;

void
FUNC_6(void *VAR_1)
{
 struct iwm_softc *VAR_2 = VAR_1;

 FUNC_0(VAR_2);
 while (VAR_2->sc_flags & VAR_0)
  FUNC_4(&VAR_2->sc_flags, &VAR_2->sc_mtx, 0, "iwmpwr", 0);
 VAR_2->sc_flags |= VAR_0;
 FUNC_3(VAR_2);
 if (VAR_2->sc_ic.ic_nrunning > 0)
  FUNC_2(VAR_2);
 VAR_2->sc_flags &= ~VAR_0;
 FUNC_5(&VAR_2->sc_flags);
 FUNC_1(VAR_2);
}
