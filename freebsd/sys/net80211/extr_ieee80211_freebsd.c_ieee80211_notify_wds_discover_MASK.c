
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ieee80211vap {struct ifnet* iv_ifp; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int ,int ) ;

void
FUNC_1(struct ieee80211_node *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1->ni_vap;
 struct ifnet *VAR_3 = VAR_2->iv_ifp;

 FUNC_0(VAR_3, VAR_0, VAR_1->ni_macaddr);
}
