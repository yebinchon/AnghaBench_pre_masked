
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__* supp_rates; scalar_t__ bandwidth; } ;
struct sta_info {scalar_t__ plink_state; int lock; TYPE_4__ sta; int last_rx; } ;
struct ieee802_11_elems {TYPE_3__* ht_operation; int ht_cap_elem; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_6__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_7__ {int ht_param; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_1 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,struct sta_info*) ;
 scalar_t__ FUNC_2 (struct ieee80211_local*,struct ieee802_11_elems*,int,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_3 (struct sta_info*) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_supported_band*,struct sta_info*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_6,
          struct sta_info *VAR_7,
          struct ieee802_11_elems *VAR_8, bool VAR_9)
{
 struct ieee80211_local *VAR_10 = VAR_6->local;
 enum ieee80211_band VAR_11 = FUNC_0(VAR_6);
 struct ieee80211_supported_band *VAR_12;
 u32 VAR_13, VAR_14 = 0, VAR_15 = 0;

 VAR_12 = VAR_10->hw.wiphy->bands[VAR_11];
 VAR_13 = FUNC_2(VAR_10, VAR_8, VAR_11, &VAR_14);

 FUNC_5(&VAR_7->lock);
 VAR_7->last_rx = VAR_5;


 if (VAR_7->plink_state == VAR_4)
  goto out;

 if (VAR_7->sta.supp_rates[VAR_11] != VAR_13)
  VAR_15 |= VAR_2;
 VAR_7->sta.supp_rates[VAR_11] = VAR_13;

 if (FUNC_1(VAR_6, VAR_12,
           VAR_8->ht_cap_elem, VAR_7))
  VAR_15 |= VAR_1;


 if (VAR_8->ht_operation &&
     !(VAR_8->ht_operation->ht_param &
       VAR_0)) {
  if (VAR_7->sta.bandwidth != VAR_3)
   VAR_15 |= VAR_1;
  VAR_7->sta.bandwidth = VAR_3;
 }

 if (VAR_9)
  FUNC_3(VAR_7);
 else
  FUNC_4(VAR_10, VAR_12, VAR_7, VAR_15);
out:
 FUNC_6(&VAR_7->lock);
}
