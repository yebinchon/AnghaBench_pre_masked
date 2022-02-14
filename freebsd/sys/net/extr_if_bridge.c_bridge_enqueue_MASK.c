
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int ether_vtag; } ;
struct mbuf {short m_flags; TYPE_1__ m_pkthdr; struct mbuf* m_nextpkt; } ;
struct ifnet {int if_capenable; int (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;
struct bridge_softc {struct ifnet* sc_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mbuf*) ;
 short VAR_5 ;
 int VAR_6 ;
 struct mbuf* FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(struct bridge_softc *VAR_7, struct ifnet *VAR_8, struct mbuf *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 short VAR_12;
 struct mbuf *VAR_13;


 for (; VAR_9; VAR_9 = VAR_13) {
  VAR_13 = VAR_9->m_nextpkt;
  VAR_9->m_nextpkt = ((void*)0);
  VAR_10 = VAR_9->m_pkthdr.len;
  VAR_12 = VAR_9->m_flags;





  if ((VAR_9->m_flags & VAR_6) &&
      (VAR_8->if_capenable & VAR_0) == 0) {
   VAR_9 = FUNC_1(VAR_9, VAR_9->m_pkthdr.ether_vtag);
   if (VAR_9 == ((void*)0)) {
    FUNC_3(VAR_8,
        "unable to prepend VLAN header\n");
    FUNC_2(VAR_8, VAR_2, 1);
    continue;
   }
   VAR_9->m_flags &= ~VAR_6;
  }

  FUNC_0(VAR_9);
  if ((VAR_11 = VAR_8->if_transmit(VAR_8, VAR_9))) {
   FUNC_4(VAR_13);
   FUNC_2(VAR_7->sc_ifp, VAR_2, 1);
   break;
  }

  FUNC_2(VAR_7->sc_ifp, VAR_4, 1);
  FUNC_2(VAR_7->sc_ifp, VAR_1, VAR_10);
  if (VAR_12 & VAR_5)
   FUNC_2(VAR_7->sc_ifp, VAR_3, 1);
 }

 return (VAR_11);
}
