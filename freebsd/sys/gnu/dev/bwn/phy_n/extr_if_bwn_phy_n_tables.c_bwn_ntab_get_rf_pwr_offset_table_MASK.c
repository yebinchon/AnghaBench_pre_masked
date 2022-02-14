
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {int ic_curchan; } ;
struct bwn_phy {int rev; int rf_rev; } ;
struct bwn_mac {TYPE_1__* mac_sc; struct bwn_phy mac_phy; } ;
typedef int int16_t ;
struct TYPE_2__ {struct ieee80211com sc_ic; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int const* VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;

const int16_t *FUNC_2(struct bwn_mac *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_3->mac_sc->sc_ic;
 struct bwn_phy *VAR_5 = &VAR_3->mac_phy;

 if (FUNC_1(VAR_4->ic_curchan)) {
  switch (VAR_5->rev) {
  case 17:
   if (VAR_5->rf_rev == 14)
    return VAR_0;
   break;
  case 16:
   if (VAR_5->rf_rev == 9)
    return VAR_1;
   break;
  }

  FUNC_0(VAR_3->mac_sc,
         "No 2GHz RF power table available for this device\n");
  return ((void*)0);
 } else {
  switch (VAR_5->rev) {
  case 16:
   if (VAR_5->rf_rev == 9)
    return VAR_2;
   break;
  }

  FUNC_0(VAR_3->mac_sc,
         "No 5GHz RF power table available for this device\n");
  return ((void*)0);
 }
}
