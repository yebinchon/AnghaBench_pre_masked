
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int ic_curmode; struct ieee80211_channel* ic_curchan; } ;
struct rtwn_softc {int ntxchains; int sc_dev; struct ieee80211com sc_ic; } ;
struct r12a_tx_desc {int txdw1; } ;
struct ieee80211vap {int iv_flags; } ;
struct ieee80211_node {int ni_flags; struct ieee80211_channel* ni_chan; struct ieee80211vap* ni_vap; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 struct ieee80211_channel* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_channel*) ;





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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_5(struct rtwn_softc *VAR_13, struct r12a_tx_desc *VAR_14,
    struct ieee80211_node *VAR_15, int VAR_16)
{
 struct ieee80211com *VAR_17 = &VAR_13->sc_ic;
 struct ieee80211vap *VAR_18 = VAR_15->ni_vap;
 struct ieee80211_channel *VAR_19;
 enum ieee80211_phymode VAR_20;
 uint8_t VAR_21;

 VAR_19 = (VAR_15->ni_chan != VAR_0) ?
  VAR_15->ni_chan : VAR_17->ic_curchan;
 VAR_20 = FUNC_4(VAR_19);


 if (VAR_16 || !(VAR_15->ni_flags & VAR_2)) {
  switch (VAR_20) {
  case 132:
  case 131:
  case 130:
   break;
  case 129:
   VAR_20 = 132;
   break;
  case 128:
   VAR_20 = 130;
   break;
  default:
   FUNC_2(VAR_13->sc_dev, "unknown mode(1) %d!\n",
       VAR_17->ic_curmode);
   return;
  }
 }

 switch (VAR_20) {
 case 132:
  VAR_21 = VAR_9;
  break;
 case 131:
  VAR_21 = VAR_3;
  break;
 case 130:
  if (VAR_18->iv_flags & VAR_1)
   VAR_21 = VAR_9;
  else
   VAR_21 = VAR_4;
  break;
 case 129:
  if (VAR_13->ntxchains == 1)
   VAR_21 = VAR_10;
  else
   VAR_21 = VAR_11;
  break;
 case 128:
  if (VAR_13->ntxchains == 1) {
   if (FUNC_0(VAR_19))
    VAR_21 = VAR_6;
   else
    VAR_21 = VAR_5;
  } else {
   if (FUNC_0(VAR_19))
    VAR_21 = VAR_8;
   else
    VAR_21 = VAR_7;
  }
  break;
 default:

  FUNC_2(VAR_13->sc_dev, "unknown mode(2) %d!\n", VAR_20);
  return;
 }

 VAR_14->txdw1 |= FUNC_3(FUNC_1(VAR_12, VAR_21));
}
