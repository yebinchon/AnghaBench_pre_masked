
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {scalar_t__ iv_opmode; int iv_flags; scalar_t__ iv_des_nssid; int iv_des_bssid; int iv_des_ssid; } ;
struct ieee80211com {int ic_chan_active; } ;
struct ieee80211_node {int ni_capinfo; int ni_bssid; int ni_rates; int ni_chan; struct ieee80211com* ni_ic; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ieee80211com*,int ) ;
 int FUNC_2 (struct ieee80211_node*,int *,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ieee80211_node*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211vap *VAR_10, struct ieee80211_node *VAR_11)
{
 struct ieee80211com *VAR_12 = VAR_11->ni_ic;
        uint8_t VAR_13;

 if (FUNC_3(VAR_12->ic_chan_active, FUNC_1(VAR_12, VAR_11->ni_chan)))
  return 0;
 if (VAR_10->iv_opmode == VAR_8) {
  if ((VAR_11->ni_capinfo & VAR_1) == 0)
   return 0;
 } else {
  if ((VAR_11->ni_capinfo & VAR_0) == 0)
   return 0;
 }
 if (VAR_10->iv_flags & VAR_7) {
  if ((VAR_11->ni_capinfo & VAR_2) == 0)
   return 0;
 } else {

  if (VAR_11->ni_capinfo & VAR_2)
   return 0;
 }
 VAR_13 = FUNC_2(VAR_11, &VAR_11->ni_rates,
     VAR_6 | VAR_5 | VAR_4);
 if (VAR_13 & VAR_9)
  return 0;
 if (VAR_10->iv_des_nssid != 0 &&
     !FUNC_4(VAR_11, VAR_10->iv_des_nssid, VAR_10->iv_des_ssid))
  return 0;
 if ((VAR_10->iv_flags & VAR_3) &&
     !FUNC_0(VAR_10->iv_des_bssid, VAR_11->ni_bssid))
  return 0;
 return 1;
}
