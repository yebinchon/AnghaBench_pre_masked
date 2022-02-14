
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int ic_curmode; struct ieee80211_channel* ic_curchan; } ;
struct rtwn_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct r92c_tx_desc {int txdw1; } ;
struct ieee80211vap {int iv_flags; int iv_flags_ht; } ;
struct ieee80211_node {int ni_flags; struct ieee80211_channel* ni_chan; struct ieee80211vap* ni_vap; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 struct ieee80211_channel* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_4(struct rtwn_softc *VAR_10, struct r92c_tx_desc *VAR_11,
    struct ieee80211_node *VAR_12, int VAR_13)
{
 struct ieee80211com *VAR_14 = &VAR_10->sc_ic;
 struct ieee80211vap *VAR_15 = VAR_12->ni_vap;
 struct ieee80211_channel *VAR_16;
 enum ieee80211_phymode VAR_17;
 uint8_t VAR_18;

 VAR_16 = (VAR_12->ni_chan != VAR_0) ?
  VAR_12->ni_chan : VAR_14->ic_curchan;
 VAR_17 = FUNC_3(VAR_16);


 if (VAR_13 || !(VAR_12->ni_flags & VAR_3)) {
  switch (VAR_17) {
  case 130:
  case 129:
   break;
  case 128:
   VAR_17 = 129;
   break;
  default:
   FUNC_1(VAR_10->sc_dev, "unknown mode(1) %d!\n",
       VAR_14->ic_curmode);
   return;
  }
 }

 switch (VAR_17) {
 case 130:
  VAR_18 = VAR_4;
  break;
 case 129:
  if (VAR_15->iv_flags & VAR_2)
   VAR_18 = VAR_7;
  else
   VAR_18 = VAR_5;
  break;
 case 128:
  if (VAR_15->iv_flags_ht & VAR_1)
   VAR_18 = VAR_8;
  else
   VAR_18 = VAR_6;
  break;
 default:
  FUNC_1(VAR_10->sc_dev, "unknown mode(2) %d!\n", VAR_17);
  return;
 }

 VAR_11->txdw1 |= FUNC_2(FUNC_0(VAR_9, VAR_18));
}
