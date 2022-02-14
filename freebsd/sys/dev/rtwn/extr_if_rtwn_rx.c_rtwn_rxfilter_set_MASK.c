
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int sc_flags; int rcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtwn_softc*,int ,int ) ;

void
FUNC_1(struct rtwn_softc *VAR_2)
{
 if (!(VAR_2->sc_flags & VAR_1))
  FUNC_0(VAR_2, VAR_0, VAR_2->rcr);
}
