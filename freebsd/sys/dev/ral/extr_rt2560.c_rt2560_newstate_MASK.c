
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2560_vap {int (* ral_newstate ) (struct ieee80211vap*,int,int) ;} ;
struct rt2560_softc {int sc_dev; } ;
struct mbuf {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_state; scalar_t__ iv_opmode; struct ieee80211_node* iv_bss; TYPE_1__* iv_ic; } ;
struct ieee80211_node {int ni_bssid; int ni_rates; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;
struct TYPE_2__ {struct rt2560_softc* ic_softc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rt2560_softc*,int ,int ) ;
 int VAR_7 ;
 struct rt2560_vap* FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (int ,char*) ;
 struct mbuf* FUNC_3 (struct ieee80211_node*) ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (struct rt2560_softc*) ;
 int FUNC_6 (struct rt2560_softc*) ;
 int FUNC_7 (struct rt2560_softc*,int *) ;
 int FUNC_8 (struct rt2560_softc*,int ) ;
 int FUNC_9 (struct rt2560_softc*,struct mbuf*,struct ieee80211_node*) ;
 int FUNC_10 (struct rt2560_softc*,int,int ) ;
 int FUNC_11 (struct rt2560_softc*) ;
 int FUNC_12 (struct ieee80211vap*,int,int) ;

__attribute__((used)) static int
FUNC_13(struct ieee80211vap *VAR_8, enum ieee80211_state VAR_9, int VAR_10)
{
 struct rt2560_vap *VAR_11 = FUNC_1(VAR_8);
 struct rt2560_softc *VAR_12 = VAR_8->iv_ic->ic_softc;
 int VAR_13;

 if (VAR_9 == VAR_5 && VAR_8->iv_state == VAR_6) {

  FUNC_0(VAR_12, VAR_7, 0);


  FUNC_10(VAR_12, 0, 0);
 }

 VAR_13 = VAR_11->ral_newstate(VAR_8, VAR_9, VAR_10);

 if (VAR_13 == 0 && VAR_9 == VAR_6) {
  struct ieee80211_node *VAR_14 = VAR_8->iv_bss;
  struct mbuf *VAR_15;

  if (VAR_8->iv_opmode != VAR_4) {
   FUNC_11(VAR_12);
   FUNC_7(VAR_12, &VAR_14->ni_rates);
   FUNC_8(VAR_12, VAR_14->ni_bssid);
  }

  if (VAR_8->iv_opmode == VAR_1 ||
      VAR_8->iv_opmode == VAR_2 ||
      VAR_8->iv_opmode == VAR_3) {
   VAR_15 = FUNC_3(VAR_14);
   if (VAR_15 == ((void*)0)) {
    FUNC_2(VAR_12->sc_dev,
        "could not allocate beacon\n");
    return VAR_0;
   }
   FUNC_4(VAR_14);
   VAR_13 = FUNC_9(VAR_12, VAR_15, VAR_14);
   if (VAR_13 != 0)
    return VAR_13;
  }


  FUNC_10(VAR_12, 1, 0);

  if (VAR_8->iv_opmode != VAR_4)
   FUNC_6(VAR_12);
  else
   FUNC_5(VAR_12);
 }
 return VAR_13;
}
