
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211com {int * ic_sup_rates; } ;
struct ieee80211_rate_table {int dummy; } ;
struct bwi_softc {struct ieee80211com sc_ic; } ;
struct bwi_retry_lim {int lgretry_fb; int lgretry; int shretry_fb; int shretry; } ;
struct bwi_phy {size_t phy_mode; } ;
struct bwi_mac {struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;
typedef int lim ;


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
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (struct bwi_mac*,int ,int ,int) ;
 int FUNC_1 (struct bwi_mac*,struct ieee80211_rate_table const*,int *) ;
 int FUNC_2 (struct bwi_mac*,struct bwi_retry_lim*) ;
 int FUNC_3 (struct bwi_retry_lim*,int) ;
 int FUNC_4 (struct ieee80211com*,int,int ) ;
 struct ieee80211_rate_table* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bwi_mac *VAR_16)
{
 struct bwi_softc *VAR_17 = VAR_16->mac_sc;
 struct bwi_phy *VAR_18 = &VAR_16->mac_phy;
 struct ieee80211com *VAR_19 = &VAR_17->sc_ic;
 const struct ieee80211_rate_table *VAR_20;
 struct bwi_retry_lim VAR_21;
 uint16_t VAR_22;




 FUNC_3(&VAR_21, sizeof(VAR_21));
 VAR_21.shretry = VAR_7;
 VAR_21.shretry_fb = VAR_8;
 VAR_21.lgretry = VAR_5;
 VAR_21.lgretry_fb = VAR_6;
 FUNC_2(VAR_16, &VAR_21);





 FUNC_0(VAR_16, VAR_3, VAR_4, 1);






 if (VAR_18->phy_mode == VAR_14) {
  VAR_20 = FUNC_5(
      FUNC_4(VAR_19, 2412, VAR_9));
  FUNC_1(VAR_16, VAR_20,
      &VAR_19->ic_sup_rates[VAR_14]);
 } else {
  VAR_20 = FUNC_5(
      FUNC_4(VAR_19, 2412, VAR_10));
  FUNC_1(VAR_16, VAR_20,
      &VAR_19->ic_sup_rates[VAR_15]);
 }




 if (VAR_18->phy_mode == VAR_14)
  VAR_22 = VAR_12;
 else
  VAR_22 = VAR_13;
 FUNC_0(VAR_16, VAR_0, VAR_2, VAR_22);




 FUNC_0(VAR_16, VAR_0, VAR_1,
       VAR_11);
}
