
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*) ;
 scalar_t__ FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*) ;

void
FUNC_3(struct rtwn_softc *VAR_1)
{

 if ((VAR_1->sc_flags & VAR_0) &&
     FUNC_1(VAR_1))
  FUNC_0(VAR_1);
 else

  FUNC_2(VAR_1);
}
