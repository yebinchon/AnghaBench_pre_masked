
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node {int ni_vlan; int ni_txpower; int ni_authmode; } ;



__attribute__((used)) static __inline void
FUNC_0(struct ieee80211_node *VAR_0, const struct ieee80211_node *VAR_1)
{

 VAR_0->ni_authmode = VAR_1->ni_authmode;
 VAR_0->ni_txpower = VAR_1->ni_txpower;
 VAR_0->ni_vlan = VAR_1->ni_vlan;


}
