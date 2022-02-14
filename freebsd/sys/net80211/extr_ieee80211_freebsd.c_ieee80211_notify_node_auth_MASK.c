
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ieee80211vap {struct ifnet* iv_ifp; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211vap* ni_vap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*,int ,int ) ;

void
FUNC_2(struct ieee80211_node *VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_2->ni_vap;
 struct ifnet *VAR_4 = VAR_3->iv_ifp;

 FUNC_0(VAR_3, VAR_0, VAR_2, "%s", "node auth");

 FUNC_1(VAR_4, VAR_1, VAR_2->ni_macaddr);
}
