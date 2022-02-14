
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211vap {int iv_flags_vht; int iv_vhtcaps; } ;
struct ieee80211_node {int ni_flags; scalar_t__ ni_vht_chanwidth; struct ieee80211vap* ni_vap; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct ieee80211_node *VAR_20, uint32_t VAR_21)
{
 struct ieee80211vap *VAR_22 = VAR_20->ni_vap;
 uint32_t VAR_23 = 0;

 VAR_23 = 0;
 if (VAR_20->ni_flags & VAR_14 && VAR_22->iv_flags_vht & VAR_13) {
  if ((VAR_20->ni_vht_chanwidth == VAR_16) &&

      (FUNC_0(VAR_22->iv_vhtcaps,
       VAR_15) >= 1) &&
      (VAR_22->iv_flags_vht & VAR_9)) {
   VAR_23 = VAR_3;

   if (VAR_21 == VAR_2) {
    VAR_23 |= VAR_2;
   } else if (VAR_21 == VAR_1) {
    VAR_23 |= VAR_1;
   }
  } else if ((VAR_20->ni_vht_chanwidth == VAR_18) &&

      (FUNC_0(VAR_22->iv_vhtcaps,
       VAR_15) == 2) &&
      (VAR_22->iv_flags_vht & VAR_12)) {
   VAR_23 = VAR_8;

   if (VAR_21 == VAR_2) {
    VAR_23 |= VAR_2;
   } else if (VAR_21 == VAR_1) {
    VAR_23 |= VAR_1;
   }
  } else if ((VAR_20->ni_vht_chanwidth == VAR_17) &&
      (VAR_22->iv_flags_vht & VAR_11)) {
   VAR_23 = VAR_7;

   if (VAR_21 == VAR_2) {
    VAR_23 |= VAR_2;
   } else if (VAR_21 == VAR_1) {
    VAR_23 |= VAR_1;
   }
  } else if (VAR_20->ni_vht_chanwidth == VAR_19) {
   if ((VAR_21 == VAR_2) &&
       (VAR_22->iv_flags_vht & VAR_10)) {
    VAR_23 = VAR_6
        | VAR_2;
   } else if (VAR_21 == VAR_1 &&
       (VAR_22->iv_flags_vht & VAR_10)) {
    VAR_23 = VAR_5
        | VAR_1;
   } else if (VAR_21 == VAR_0) {
    VAR_23 = VAR_4
        | VAR_0;
   }
  } else {
   VAR_23 = VAR_4;
  }
 }
 return (VAR_23);
}
