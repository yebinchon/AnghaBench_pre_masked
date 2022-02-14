
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct lagg_softc {scalar_t__ sc_proto; struct ifnet* sc_ifp; } ;
struct lagg_port {scalar_t__ lp_detaching; struct lagg_softc* lp_softc; } ;
struct ifnet {int if_drv_flags; int if_flags; struct lagg_port* if_lagg; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct mbuf* FUNC_3 (struct lagg_softc*,struct lagg_port*,struct mbuf*) ;
 int FUNC_4 (struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_5(struct ifnet *VAR_3, struct mbuf *VAR_4)
{
 struct lagg_port *VAR_5 = VAR_3->if_lagg;
 struct lagg_softc *VAR_6 = VAR_5->lp_softc;
 struct ifnet *VAR_7 = VAR_6->sc_ifp;

 FUNC_1();
 if ((VAR_7->if_drv_flags & VAR_0) == 0 ||
     VAR_5->lp_detaching != 0 ||
     VAR_6->sc_proto == VAR_2) {
  FUNC_2();
  FUNC_4(VAR_4);
  return (((void*)0));
 }

 FUNC_0(VAR_7, VAR_4);

 VAR_4 = FUNC_3(VAR_6, VAR_5, VAR_4);
 if (VAR_4 != ((void*)0) && (VAR_7->if_flags & VAR_1) != 0) {
  FUNC_4(VAR_4);
  VAR_4 = ((void*)0);
 }

 FUNC_2();
 return (VAR_4);
}
