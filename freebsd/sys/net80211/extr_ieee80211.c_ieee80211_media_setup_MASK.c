
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmedia {int dummy; } ;
struct ieee80211com {int ic_txstream; int ic_htcaps; int ic_modecaps; struct ieee80211_rateset* ic_sup_rates; } ;
struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;
typedef int ifm_stat_cb_t ;
typedef int ifm_change_cb_t ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;
typedef int allrates ;
struct TYPE_2__ {int ht40_rate_400ns; int ht40_rate_800ns; int ht20_rate_400ns; int ht20_rate_800ns; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct ifmedia*,int,int,int,int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_2 (struct ieee80211com*,int,int) ;
 int FUNC_3 (struct ifmedia*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (struct ieee80211_rateset*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211com *VAR_12,
 struct ifmedia *VAR_13, int VAR_14, int VAR_15,
 ifm_change_cb_t VAR_16, ifm_stat_cb_t VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 enum ieee80211_phymode VAR_24;
 const struct ieee80211_rateset *VAR_25;
 struct ieee80211_rateset VAR_26;




 FUNC_3(VAR_13, 0, VAR_16, VAR_17);
 VAR_21 = 0;



 FUNC_6(&VAR_26, 0, sizeof(VAR_26));
 for (VAR_24 = VAR_5; VAR_24 < VAR_3; VAR_24++) {
  if (FUNC_4(VAR_12->ic_modecaps, VAR_24))
   continue;
  FUNC_1(VAR_13, VAR_14, VAR_15, VAR_24, VAR_8);
  if (VAR_24 == VAR_5)
   continue;
  VAR_25 = &VAR_12->ic_sup_rates[VAR_24];
  for (VAR_18 = 0; VAR_18 < VAR_25->rs_nrates; VAR_18++) {
   VAR_20 = VAR_25->rs_rates[VAR_18];
   VAR_22 = FUNC_2(VAR_12, VAR_20, VAR_24);
   if (VAR_22 == 0)
    continue;
   FUNC_1(VAR_13, VAR_14, VAR_15, VAR_24, VAR_22);



   VAR_23 = VAR_20 & VAR_7;
   for (VAR_19 = 0; VAR_19 < VAR_26.rs_nrates; VAR_19++)
    if (VAR_26.rs_rates[VAR_19] == VAR_23)
     break;
   if (VAR_19 == VAR_26.rs_nrates) {

    VAR_26.rs_rates[VAR_19] = VAR_23;
    VAR_26.rs_nrates++;
   }
   VAR_20 = (VAR_20 & VAR_7) / 2;
   if (VAR_20 > VAR_21)
    VAR_21 = VAR_20;
  }
 }
 for (VAR_18 = 0; VAR_18 < VAR_26.rs_nrates; VAR_18++) {
  VAR_22 = FUNC_2(VAR_12, VAR_26.rs_rates[VAR_18],
    VAR_5);
  if (VAR_22 == 0)
   continue;

  FUNC_1(VAR_13, VAR_14, VAR_15,
      VAR_5, FUNC_0(VAR_22));
 }






 for (; VAR_24 <= VAR_4; VAR_24++) {
  if (FUNC_4(VAR_12->ic_modecaps, VAR_24))
   continue;
  FUNC_1(VAR_13, VAR_14, VAR_15, VAR_24, VAR_8);
  FUNC_1(VAR_13, VAR_14, VAR_15, VAR_24, VAR_9);
 }
 if (FUNC_5(VAR_12->ic_modecaps, VAR_3) ||
     FUNC_5(VAR_12->ic_modecaps, VAR_4)) {
  FUNC_1(VAR_13, VAR_14, VAR_15,
      VAR_5, VAR_9);
  VAR_18 = VAR_12->ic_txstream * 8 - 1;
  if ((VAR_12->ic_htcaps & VAR_0) &&
      (VAR_12->ic_htcaps & VAR_2))
   VAR_20 = VAR_11[VAR_18].ht40_rate_400ns;
  else if ((VAR_12->ic_htcaps & VAR_0))
   VAR_20 = VAR_11[VAR_18].ht40_rate_800ns;
  else if ((VAR_12->ic_htcaps & VAR_1))
   VAR_20 = VAR_11[VAR_18].ht20_rate_400ns;
  else
   VAR_20 = VAR_11[VAR_18].ht20_rate_800ns;
  if (VAR_20 > VAR_21)
   VAR_21 = VAR_20;
 }




 for (; VAR_24 <= VAR_6; VAR_24++) {
  if (FUNC_4(VAR_12->ic_modecaps, VAR_24))
   continue;
  FUNC_1(VAR_13, VAR_14, VAR_15, VAR_24, VAR_8);
  FUNC_1(VAR_13, VAR_14, VAR_15, VAR_24, VAR_10);


 }

 return VAR_21;
}
