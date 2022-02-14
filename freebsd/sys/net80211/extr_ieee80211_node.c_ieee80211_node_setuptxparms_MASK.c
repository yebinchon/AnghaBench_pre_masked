
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int * iv_txparms; } ;
struct ieee80211_node {int ni_flags; int * ni_txparms; int ni_chan; struct ieee80211vap* ni_vap; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void
FUNC_6(struct ieee80211_node *VAR_13)
{
 struct ieee80211vap *VAR_14 = VAR_13->ni_vap;
 enum ieee80211_phymode VAR_15;

 if (VAR_13->ni_flags & VAR_12) {
  if (FUNC_1(VAR_13->ni_chan))
   VAR_15 = VAR_9;
  else
   VAR_15 = VAR_8;
 } else if (VAR_13->ni_flags & VAR_11) {
  if (FUNC_1(VAR_13->ni_chan))
   VAR_15 = VAR_3;
  else
   VAR_15 = VAR_4;
 } else {
  if (FUNC_5(VAR_13->ni_chan))
   VAR_15 = VAR_7;
  else if (FUNC_3(VAR_13->ni_chan))
   VAR_15 = VAR_5;
  else if (FUNC_4(VAR_13->ni_chan))
   VAR_15 = VAR_6;

  else if (FUNC_2(VAR_13->ni_chan))
   VAR_15 = VAR_0;
  else if (FUNC_0(VAR_13->ni_chan) ||
      (VAR_13->ni_flags & VAR_10))
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_1;
 }
 VAR_13->ni_txparms = &VAR_14->iv_txparms[VAR_15];
}
