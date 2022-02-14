
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2661_vap {int (* ral_newstate ) (struct ieee80211vap*,int,int) ;} ;
struct rt2661_softc {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; scalar_t__ iv_opmode; struct ieee80211_node* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct rt2661_softc* ic_softc; } ;
struct ieee80211_node {int ni_bssid; int ni_rates; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rt2661_softc*,int ) ;
 int FUNC_1 (struct rt2661_softc*,int ,int) ;
 int VAR_6 ;
 struct rt2661_vap* FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct rt2661_softc*) ;
 int FUNC_4 (struct rt2661_softc*) ;
 int FUNC_5 (struct rt2661_softc*) ;
 int FUNC_6 (struct rt2661_softc*,struct ieee80211vap*) ;
 int FUNC_7 (struct rt2661_softc*,int *) ;
 int FUNC_8 (struct rt2661_softc*,int ) ;
 int FUNC_9 (struct rt2661_softc*) ;
 int FUNC_10 (struct ieee80211vap*,int,int) ;

__attribute__((used)) static int
FUNC_11(struct ieee80211vap *VAR_7, enum ieee80211_state VAR_8, int VAR_9)
{
 struct rt2661_vap *VAR_10 = FUNC_2(VAR_7);
 struct ieee80211com *VAR_11 = VAR_7->iv_ic;
 struct rt2661_softc *VAR_12 = VAR_11->ic_softc;
 int VAR_13;

 if (VAR_8 == VAR_4 && VAR_7->iv_state == VAR_5) {
  uint32_t VAR_14;


  VAR_14 = FUNC_0(VAR_12, VAR_6);
  FUNC_1(VAR_12, VAR_6, VAR_14 & ~0x00ffffff);
 }

 VAR_13 = VAR_10->ral_newstate(VAR_7, VAR_8, VAR_9);

 if (VAR_13 == 0 && VAR_8 == VAR_5) {
  struct ieee80211_node *VAR_15 = VAR_7->iv_bss;

  if (VAR_7->iv_opmode != VAR_3) {
   FUNC_3(VAR_12);
   FUNC_9(VAR_12);
   FUNC_7(VAR_12, &VAR_15->ni_rates);
   FUNC_8(VAR_12, VAR_15->ni_bssid);
  }

  if (VAR_7->iv_opmode == VAR_0 ||
      VAR_7->iv_opmode == VAR_1 ||
      VAR_7->iv_opmode == VAR_2) {
   VAR_13 = FUNC_6(VAR_12, VAR_7);
   if (VAR_13 != 0)
    return VAR_13;
  }
  if (VAR_7->iv_opmode != VAR_3)
   FUNC_5(VAR_12);
  else
   FUNC_4(VAR_12);
 }
 return VAR_13;
}
