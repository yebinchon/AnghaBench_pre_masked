
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_vap {int (* newstate ) (struct ieee80211vap*,int,int) ;int ratectl_ch; } ;
struct ural_softc {int sc_dev; int sc_bssid; } ;
struct mbuf {int dummy; } ;
struct ieee80211vap {size_t iv_state; struct ieee80211_txparam* iv_txparms; int iv_opmode; struct ieee80211_node* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curchan; int ic_bsschan; struct ural_softc* ic_softc; } ;
struct ieee80211_txparam {int ucastrate; } ;
struct ieee80211_node {int ni_bssid; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211com*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (struct ural_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct ural_softc*) ;
 struct ural_vap* FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (int ,char*) ;
 struct mbuf* FUNC_8 (struct ieee80211_node*) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_11 (struct ieee80211_node*) ;
 int * VAR_7 ;
 int FUNC_12 (struct ieee80211vap*,int,int) ;
 int FUNC_13 (struct ural_softc*) ;
 int FUNC_14 (struct ural_softc*) ;
 int FUNC_15 (struct ural_softc*,struct ieee80211_node*) ;
 int FUNC_16 (struct ural_softc*,int ) ;
 int FUNC_17 (struct ural_softc*,int ) ;
 int FUNC_18 (struct ural_softc*) ;
 int FUNC_19 (struct ural_softc*,struct mbuf*,struct ieee80211_node*) ;
 int FUNC_20 (struct ural_softc*) ;
 int FUNC_21 (struct ural_softc*,int ,int) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int
FUNC_23(struct ieee80211vap *VAR_8, enum ieee80211_state VAR_9, int VAR_10)
{
 struct ural_vap *VAR_11 = FUNC_6(VAR_8);
 struct ieee80211com *VAR_12 = VAR_8->iv_ic;
 struct ural_softc *VAR_13 = VAR_12->ic_softc;
 const struct ieee80211_txparam *VAR_14;
 struct ieee80211_node *VAR_15;
 struct mbuf *VAR_16;

 FUNC_0("%s -> %s\n",
  VAR_7[VAR_8->iv_state],
  VAR_7[VAR_9]);

 FUNC_3(VAR_12);
 FUNC_4(VAR_13);
 FUNC_22(&VAR_11->ratectl_ch);

 switch (VAR_9) {
 case 129:
  if (VAR_8->iv_state == 128) {

   FUNC_21(VAR_13, VAR_6, 0);


   FUNC_21(VAR_13, VAR_5, 0);
  }
  break;

 case 128:
  VAR_15 = FUNC_11(VAR_8->iv_bss);

  if (VAR_8->iv_opmode != VAR_4) {
   if (VAR_12->ic_bsschan == VAR_0)
    goto fail;

   FUNC_20(VAR_13);
   FUNC_18(VAR_13);
   FUNC_16(VAR_13, VAR_12->ic_bsschan);
   FUNC_1(VAR_13->sc_bssid, VAR_15->ni_bssid);
   FUNC_17(VAR_13, VAR_13->sc_bssid);
  }

  if (VAR_8->iv_opmode == VAR_2 ||
      VAR_8->iv_opmode == VAR_3) {
   VAR_16 = FUNC_8(VAR_15);
   if (VAR_16 == ((void*)0)) {
    FUNC_7(VAR_13->sc_dev,
        "could not allocate beacon\n");
    goto fail;
   }
   FUNC_11(VAR_15);
   if (FUNC_19(VAR_13, VAR_16, VAR_15) != 0) {
    FUNC_7(VAR_13->sc_dev,
        "could not send beacon\n");
    goto fail;
   }
  }


  FUNC_21(VAR_13, VAR_5, 1);

  if (VAR_8->iv_opmode != VAR_4)
   FUNC_14(VAR_13);
  else
   FUNC_13(VAR_13);



  VAR_14 = &VAR_8->iv_txparms[FUNC_9(VAR_12->ic_curchan)];
  if (VAR_14->ucastrate == VAR_1)
   FUNC_15(VAR_13, VAR_15);
  FUNC_10(VAR_15);
  break;

 default:
  break;
 }
 FUNC_5(VAR_13);
 FUNC_2(VAR_12);
 return (VAR_11->newstate(VAR_8, VAR_9, VAR_10));

fail:
 FUNC_5(VAR_13);
 FUNC_2(VAR_12);
 FUNC_10(VAR_15);
 return (-1);
}
