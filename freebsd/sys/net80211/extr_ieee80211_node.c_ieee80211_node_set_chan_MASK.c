
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags_ht; int iv_flags; int * iv_txparms; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_node {int ni_rates; int * ni_txparms; int ni_htrates; struct ieee80211_channel* ni_chan; struct ieee80211vap* ni_vap; struct ieee80211com* ni_ic; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 struct ieee80211_channel* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ieee80211_channel*) ;
 int * FUNC_3 (struct ieee80211com*,struct ieee80211_channel*) ;
 int * FUNC_4 (struct ieee80211com*,struct ieee80211_channel*) ;

void
FUNC_5(struct ieee80211_node *VAR_8,
 struct ieee80211_channel *VAR_9)
{
 struct ieee80211com *VAR_10 = VAR_8->ni_ic;
 struct ieee80211vap *VAR_11 = VAR_8->ni_vap;
 enum ieee80211_phymode VAR_12;

 FUNC_1(VAR_9 != VAR_0, ("no channel"));

 VAR_8->ni_chan = VAR_9;
 VAR_12 = FUNC_2(VAR_9);
 if (FUNC_0(VAR_9)) {




  VAR_8->ni_htrates = *FUNC_3(VAR_10, VAR_9);





  if (VAR_12 == VAR_6 &&
      (VAR_11->iv_flags_ht & VAR_1) == 0)
   VAR_12 = VAR_3;
  else if (VAR_12 == VAR_7 &&
      (VAR_11->iv_flags_ht & VAR_1) == 0)
   VAR_12 = VAR_5;
  if (VAR_12 == VAR_5 &&
      (VAR_11->iv_flags & VAR_2) == 0)
   VAR_12 = VAR_4;
 }
 VAR_8->ni_txparms = &VAR_11->iv_txparms[VAR_12];
 VAR_8->ni_rates = *FUNC_4(VAR_10, VAR_9);
}
