
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int (* ic_node_cleanup ) (struct ieee80211_node*) ;} ;
struct ieee80211_node {int ni_psq; int ni_ies; struct ieee80211com* ni_ic; } ;


 int FUNC_0 (struct ieee80211_node*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_node*) ;
 int FUNC_4 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_node *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->ni_ic;

 FUNC_3(VAR_1);
 VAR_2->ic_node_cleanup(VAR_1);
 FUNC_1(&VAR_1->ni_ies);
 FUNC_2(&VAR_1->ni_psq);
 FUNC_0(VAR_1, VAR_0);
}
