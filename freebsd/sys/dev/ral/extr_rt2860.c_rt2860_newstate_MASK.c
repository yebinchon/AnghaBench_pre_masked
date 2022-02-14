
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt2860_vap {int (* ral_newstate ) (struct ieee80211vap*,int,int) ;} ;
struct rt2860_softc {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; scalar_t__ iv_opmode; struct ieee80211_node* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {scalar_t__ ic_opmode; struct rt2860_softc* ic_softc; } ;
struct ieee80211_node {int ni_chan; int ni_bssid; int ni_rates; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int FUNC_2 (struct rt2860_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct rt2860_vap* FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct rt2860_softc*) ;
 int FUNC_5 (struct rt2860_softc*) ;
 int FUNC_6 (struct rt2860_softc*,int *) ;
 int FUNC_7 (struct rt2860_softc*,int ) ;
 int FUNC_8 (struct rt2860_softc*,int) ;
 int FUNC_9 (struct rt2860_softc*,int) ;
 int FUNC_10 (struct rt2860_softc*) ;
 int FUNC_11 (struct rt2860_softc*,struct ieee80211vap*) ;
 int FUNC_12 (struct ieee80211vap*,int,int) ;

__attribute__((used)) static int
FUNC_13(struct ieee80211vap *VAR_13, enum ieee80211_state VAR_14, int VAR_15)
{
 struct rt2860_vap *VAR_16 = FUNC_3(VAR_13);
 struct ieee80211com *VAR_17 = VAR_13->iv_ic;
 struct rt2860_softc *VAR_18 = VAR_17->ic_softc;
 uint32_t VAR_19;
 int VAR_20;

 if (VAR_13->iv_state == VAR_5) {

  FUNC_9(VAR_18, VAR_10);
 }

 if (VAR_14 == VAR_4 && VAR_13->iv_state == VAR_5) {

  VAR_19 = FUNC_1(VAR_18, VAR_6);
  FUNC_2(VAR_18, VAR_6,
      VAR_19 & ~(VAR_7 | VAR_12 |
      VAR_11));
 }

 FUNC_8(VAR_18, 0);

 VAR_20 = VAR_16->ral_newstate(VAR_13, VAR_14, VAR_15);
 if (VAR_20 != 0)
  return (VAR_20);

 if (VAR_14 == VAR_5) {
  struct ieee80211_node *VAR_21 = VAR_13->iv_bss;

  if (VAR_17->ic_opmode != VAR_3) {
   FUNC_4(VAR_18);
   FUNC_10(VAR_18);
   FUNC_6(VAR_18, &VAR_21->ni_rates);
   FUNC_7(VAR_18, VAR_21->ni_bssid);
  }

  if (VAR_13->iv_opmode == VAR_0 ||
      VAR_13->iv_opmode == VAR_1 ||
      VAR_13->iv_opmode == VAR_2) {
   VAR_20 = FUNC_11(VAR_18, VAR_13);
   if (VAR_20 != 0)
    return VAR_20;
  }

  if (VAR_17->ic_opmode != VAR_3) {
   FUNC_5(VAR_18);
   FUNC_8(VAR_18, 500);
  }


  FUNC_9(VAR_18, VAR_10 |
      (FUNC_0(VAR_21->ni_chan) ?
       VAR_8 : VAR_9));
 }
 return VAR_20;
}
