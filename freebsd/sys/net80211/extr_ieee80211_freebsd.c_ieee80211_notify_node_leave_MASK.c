
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_vnet; } ;
struct ieee80211vap {struct ieee80211_node* iv_bss; struct ifnet* iv_ifp; } ;
struct ieee80211_node {int ni_macaddr; struct ieee80211vap* ni_vap; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ieee80211vap*,int ,struct ieee80211_node*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct ifnet*,int ,int ) ;
 int FUNC_5 (struct ifnet*,int ,int *,int ) ;

void
FUNC_6(struct ieee80211_node *VAR_4)
{
 struct ieee80211vap *VAR_5 = VAR_4->ni_vap;
 struct ifnet *VAR_6 = VAR_5->iv_ifp;

 FUNC_1(VAR_6->if_vnet);
 FUNC_2(VAR_5, VAR_0, VAR_4, "%snode leave",
     (VAR_4 == VAR_5->iv_bss) ? "bss " : "");

 if (VAR_4 == VAR_5->iv_bss) {
  FUNC_5(VAR_6, VAR_2, ((void*)0), 0);
  FUNC_3(VAR_6, VAR_1);
 } else {

  FUNC_4(VAR_6, VAR_3, VAR_4->ni_macaddr);
 }
 FUNC_0();
}
