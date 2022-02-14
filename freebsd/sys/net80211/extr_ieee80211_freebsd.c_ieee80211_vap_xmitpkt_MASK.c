
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int (* if_transmit ) (struct ifnet*,struct mbuf*) ;} ;
struct ieee80211vap {int iv_ic; struct ifnet* iv_ifp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;

int
FUNC_2(struct ieee80211vap *VAR_0, struct mbuf *VAR_1)
{
 struct ifnet *VAR_2 = VAR_0->iv_ifp;





 FUNC_0(VAR_0->iv_ic);

 return (VAR_2->if_transmit(VAR_2, VAR_1));

}
