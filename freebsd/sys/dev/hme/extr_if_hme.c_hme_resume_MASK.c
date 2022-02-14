
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
struct hme_softc {struct ifnet* sc_ifp; } ;


 int FUNC_0 (struct hme_softc*) ;
 int FUNC_1 (struct hme_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct hme_softc*) ;

void
FUNC_3(struct hme_softc *VAR_1)
{
 struct ifnet *VAR_2 = VAR_1->sc_ifp;

 FUNC_0(VAR_1);
 if ((VAR_2->if_flags & VAR_0) != 0)
  FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
