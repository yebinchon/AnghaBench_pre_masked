
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ic_nrunning; } ;
struct mwl_softc {TYPE_1__ sc_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwl_softc*) ;
 int FUNC_1 (struct mwl_softc*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct mwl_softc*) ;

void
FUNC_4(struct mwl_softc *VAR_1)
{
 int VAR_2 = VAR_0;

 FUNC_0(VAR_1);
 if (VAR_1->sc_ic.ic_nrunning > 0)
  VAR_2 = FUNC_3(VAR_1);
 FUNC_1(VAR_1);

 if (VAR_2 == 0)
  FUNC_2(&VAR_1->sc_ic);
}
