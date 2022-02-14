
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211com {int ic_opmode; int * ic_macaddr; int ic_vaps; } ;
struct otus_softc {struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_bss; int * iv_myaddr; } ;
struct ieee80211_node {int ni_bssid; } ;


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
 int FUNC_0 (int *,int ) ;
 int VAR_10 ;


 int FUNC_1 (struct otus_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_4 (int ) ;
 int FUNC_5 (struct otus_softc*,int *) ;
 int FUNC_6 (struct otus_softc*,int const*) ;
 int FUNC_7 (struct otus_softc*,int ,int) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_8(struct otus_softc *VAR_12)
{
 struct ieee80211com *VAR_13 = &VAR_12->sc_ic;
 struct ieee80211vap *VAR_14;
 uint32_t VAR_15 = VAR_0;
 uint32_t VAR_16 = VAR_6 | VAR_8;
 uint32_t VAR_17 = VAR_9;
 uint32_t VAR_18 = 0x78;
 const uint8_t *VAR_19;
 uint8_t VAR_20[VAR_10];
 struct ieee80211_node *VAR_21;

 FUNC_1(VAR_12);





 FUNC_0(VAR_20, VAR_11);
 VAR_14 = FUNC_2(&VAR_13->ic_vaps);
 VAR_19 = VAR_14 ? VAR_14->iv_myaddr : VAR_13->ic_macaddr;

 switch (VAR_13->ic_opmode) {
 case 128:
  if (VAR_14) {
   VAR_21 = FUNC_4(VAR_14->iv_bss);
   FUNC_0(VAR_20, VAR_21->ni_bssid);
   FUNC_3(VAR_21);
  }
  VAR_15 |= VAR_1;
  VAR_16 |= VAR_7;
  break;
 case 129:






 default:
  VAR_15 |= VAR_1;
  VAR_16 |= VAR_7;
  break;
 }





 FUNC_7(VAR_12, VAR_5, VAR_17);
 FUNC_7(VAR_12, VAR_2, VAR_15);
 FUNC_7(VAR_12, VAR_3, VAR_18);
 FUNC_7(VAR_12, VAR_4, VAR_16);
 FUNC_6(VAR_12, VAR_19);
 FUNC_5(VAR_12, VAR_20);

}
