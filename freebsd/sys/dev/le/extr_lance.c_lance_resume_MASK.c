
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lance_softc {TYPE_1__* sc_ifp; } ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct lance_softc*) ;
 int FUNC_1 (struct lance_softc*) ;
 int FUNC_2 (struct lance_softc*) ;

void
FUNC_3(struct lance_softc *VAR_1)
{

 FUNC_0(VAR_1);
 if (VAR_1->sc_ifp->if_flags & VAR_0)
  FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
