
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int dummy; } ;
struct ieee80211vap {struct ifnet* iv_ifp; } ;
struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_node {struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct ieee80211vap*,struct mbuf*) ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_node *VAR_1, struct mbuf *VAR_2,
    const struct ieee80211_rx_stats *VAR_3, int VAR_4, int VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_1->ni_vap;
 struct ifnet *VAR_7 = VAR_6->iv_ifp;

 FUNC_2(VAR_7, VAR_0, 1);

 if (FUNC_0(VAR_6))
  FUNC_1(VAR_6, VAR_2);
 FUNC_3(VAR_2);
 return -1;
}
