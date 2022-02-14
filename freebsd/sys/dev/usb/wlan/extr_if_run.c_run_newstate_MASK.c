
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct run_vap {int rvp_id; int (* newstate ) (struct ieee80211vap*,int,int) ;int * beacon_mbuf; } ;
struct run_softc {int ratectl_run; int runbmap; int ap_running; int adhoc_running; int sta_running; int ratectl_ch; int sc_bssid; int running; } ;
struct ieee80211vap {int iv_state; struct ieee80211_txparam* iv_txparms; int iv_bss; int iv_opmode; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curchan; int ic_bsschan; int ic_opmode; struct run_softc* ic_softc; } ;
struct ieee80211_txparam {int ucastrate; } ;
struct ieee80211_node {int ni_bssid; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211com*) ;



 int VAR_2 ;



 int FUNC_3 (struct ieee80211com*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct run_softc*,int ,char*,...) ;
 int FUNC_5 (struct run_softc*) ;
 int VAR_8 ;
 int FUNC_6 (struct run_softc*) ;
 struct run_vap* FUNC_7 (struct ieee80211vap*) ;
 int VAR_9 ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_10 (int ) ;
 int * VAR_10 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct run_softc*) ;
 int FUNC_13 (struct run_softc*) ;
 int FUNC_14 (struct run_softc*) ;
 int FUNC_15 (struct run_softc*) ;
 int VAR_11 ;
 int FUNC_16 (struct run_softc*,int ,int*,int) ;
 int FUNC_17 (struct run_softc*) ;
 int FUNC_18 (struct run_softc*,int ) ;
 int FUNC_19 (struct run_softc*,int) ;
 int FUNC_20 (struct run_softc*) ;
 int FUNC_21 (struct ieee80211vap*) ;
 int FUNC_22 (struct ieee80211com*) ;
 int FUNC_23 (struct ieee80211vap*,int,int) ;
 int FUNC_24 (int *,int ,int ,struct run_softc*) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int
FUNC_26(struct ieee80211vap *VAR_12, enum ieee80211_state VAR_13, int VAR_14)
{
 const struct ieee80211_txparam *VAR_15;
 struct ieee80211com *VAR_16 = VAR_12->iv_ic;
 struct run_softc *VAR_17 = VAR_16->ic_softc;
 struct run_vap *VAR_18 = FUNC_7(VAR_12);
 enum ieee80211_state VAR_19;
 uint32_t VAR_20[3];
 uint8_t VAR_21;
 uint8_t VAR_22 = 0;
 uint8_t VAR_23 = 1 << VAR_18->rvp_id;

 VAR_19 = VAR_12->iv_state;
 FUNC_4(VAR_17, VAR_7, "%s -> %s\n",
  VAR_10[VAR_19],
  VAR_10[VAR_13]);

 FUNC_3(VAR_16);
 FUNC_5(VAR_17);

 VAR_21 = VAR_17->ratectl_run;
 VAR_17->ratectl_run = VAR_8;
 FUNC_25(&VAR_17->ratectl_ch);

 if (VAR_19 == 128) {

  FUNC_19(VAR_17, VAR_5);
 }

 switch (VAR_13) {
 case 129:
  VAR_22 = 1;

  if (VAR_19 != 128)
   break;

  VAR_21 &= ~VAR_23;
  VAR_17->runbmap &= ~VAR_23;


  if (--VAR_17->running == 0)
   FUNC_12(VAR_17);
  break;

 case 128:
  if (!(VAR_17->runbmap & VAR_23)) {
   if(VAR_17->running++)
    VAR_22 = 1;
   VAR_17->runbmap |= VAR_23;
  }

  FUNC_11(VAR_18->beacon_mbuf);
  VAR_18->beacon_mbuf = ((void*)0);

  switch (VAR_12->iv_opmode) {
  case 133:
  case 131:
   VAR_17->ap_running |= VAR_23;
   VAR_16->ic_opmode = VAR_12->iv_opmode;
   FUNC_21(VAR_12);
   break;
  case 132:
   VAR_17->adhoc_running |= VAR_23;
   if (!VAR_17->ap_running)
    VAR_16->ic_opmode = VAR_12->iv_opmode;
   FUNC_21(VAR_12);
   break;
  case 130:
   VAR_17->sta_running |= VAR_23;
   if (!VAR_17->ap_running && !VAR_17->adhoc_running)
    VAR_16->ic_opmode = VAR_12->iv_opmode;


   FUNC_16(VAR_17, VAR_6,
       (uint8_t *)VAR_20, sizeof VAR_20);

   break;
  default:
   VAR_16->ic_opmode = VAR_12->iv_opmode;
   break;
  }

  if (VAR_12->iv_opmode != VAR_2) {
   struct ieee80211_node *VAR_24;

   if (VAR_16->ic_bsschan == VAR_0) {
    FUNC_6(VAR_17);
    FUNC_2(VAR_16);
    return (-1);
   }
   FUNC_22(VAR_16);
   FUNC_13(VAR_17);
   FUNC_20(VAR_17);
   FUNC_17(VAR_17);
   VAR_24 = FUNC_10(VAR_12->iv_bss);
   FUNC_0(VAR_17->sc_bssid, VAR_24->ni_bssid);
   FUNC_18(VAR_17, VAR_17->sc_bssid);
   FUNC_9(VAR_24);
   FUNC_15(VAR_17);


   VAR_15 = &VAR_12->iv_txparms[FUNC_8(VAR_16->ic_curchan)];
   if (VAR_15->ucastrate == VAR_1)
    VAR_21 |= VAR_23;
  } else
   FUNC_14(VAR_17);


  FUNC_19(VAR_17, VAR_5 |
      (FUNC_1(VAR_16->ic_curchan) ?
       VAR_3 : VAR_4));

  break;
 default:
  FUNC_4(VAR_17, VAR_7, "undefined state\n");
  break;
 }


 if ((VAR_17->ratectl_run = VAR_21) && VAR_22)
  FUNC_24(&VAR_17->ratectl_ch, VAR_9, VAR_11, VAR_17);

 FUNC_6(VAR_17);
 FUNC_2(VAR_16);

 return(VAR_18->newstate(VAR_12, VAR_13, VAR_14));
}
