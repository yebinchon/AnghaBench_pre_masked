
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_ht40_sta_assoc; int ic_ht_sta_assoc; } ;
struct ieee80211_node {int ni_flags; int ni_chw; struct ieee80211com* ni_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211com*) ;

void
FUNC_2(struct ieee80211_node *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->ni_ic;

 FUNC_0(VAR_2);

 if (VAR_1->ni_flags & VAR_0) {
  VAR_2->ic_ht_sta_assoc++;
  if (VAR_1->ni_chw == 40)
   VAR_2->ic_ht40_sta_assoc++;
 }
 FUNC_1(VAR_2);
}
