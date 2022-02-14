
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct lagg_softc {struct ifnet* sc_ifp; } ;
struct lagg_port {int dummy; } ;
struct ifnet {int dummy; } ;



__attribute__((used)) static struct mbuf *
FUNC_0(struct lagg_softc *VAR_0, struct lagg_port *VAR_1, struct mbuf *VAR_2)
{
 struct ifnet *VAR_3 = VAR_0->sc_ifp;


 VAR_2->m_pkthdr.rcvif = VAR_3;

 return (VAR_2);
}
