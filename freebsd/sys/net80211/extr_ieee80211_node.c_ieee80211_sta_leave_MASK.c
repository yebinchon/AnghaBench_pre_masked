
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int (* ic_node_cleanup ) (struct ieee80211_node*) ;} ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;


 int FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct ieee80211_node*) ;

void
FUNC_2(struct ieee80211_node *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->ni_ic;

 VAR_1->ic_node_cleanup(VAR_0);
 FUNC_0(VAR_0);
}
