
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct lagg_softc {struct lagg_port* sc_primary; struct ifnet* sc_ifp; } ;
struct lagg_port {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct lagg_port*) ;
 scalar_t__ VAR_0 ;
 struct lagg_port* FUNC_1 (struct lagg_softc*,struct lagg_port*) ;
 int FUNC_2 (struct mbuf*) ;

__attribute__((used)) static struct mbuf *
FUNC_3(struct lagg_softc *VAR_1, struct lagg_port *VAR_2, struct mbuf *VAR_3)
{
 struct ifnet *VAR_4 = VAR_1->sc_ifp;
 struct lagg_port *VAR_5;

 if (VAR_2 == VAR_1->sc_primary || VAR_0) {
  VAR_3->m_pkthdr.rcvif = VAR_4;
  return (VAR_3);
 }

 if (!FUNC_0(VAR_1->sc_primary)) {
  VAR_5 = FUNC_1(VAR_1, VAR_1->sc_primary);




  if ((VAR_5 == ((void*)0) || VAR_5 == VAR_2)) {
   VAR_3->m_pkthdr.rcvif = VAR_4;
   return (VAR_3);
  }
 }

 FUNC_2(VAR_3);
 return (((void*)0));
}
