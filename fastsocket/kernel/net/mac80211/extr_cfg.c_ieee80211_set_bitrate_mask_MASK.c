
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct net_device {int ieee80211_ptr; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {int** rc_rateidx_mcs_mask; int* rc_has_mcs_mask; int * rc_rateidx_mask; } ;
struct TYPE_3__ {int flags; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct cfg80211_bitrate_mask {TYPE_2__* control; } ;
struct TYPE_4__ {int mcs; int legacy; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_bitrate_mask const*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (int*,int ,int) ;
 struct ieee80211_local* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_4,
          struct net_device *VAR_5,
          const u8 *VAR_6,
          const struct cfg80211_bitrate_mask *VAR_7)
{
 struct ieee80211_sub_if_data *VAR_8 = FUNC_0(VAR_5);
 struct ieee80211_local *VAR_9 = FUNC_4(VAR_5->ieee80211_ptr);
 int VAR_10, VAR_11;

 if (!FUNC_2(VAR_8))
  return -VAR_0;

 if (VAR_9->hw.flags & VAR_2) {
  VAR_11 = FUNC_1(VAR_9, VAR_8, VAR_7);
  if (VAR_11)
   return VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct ieee80211_supported_band *VAR_12 = VAR_4->bands[VAR_10];
  int VAR_13;

  VAR_8->rc_rateidx_mask[VAR_10] = VAR_7->control[VAR_10].legacy;
  FUNC_3(VAR_8->rc_rateidx_mcs_mask[VAR_10], VAR_7->control[VAR_10].mcs,
         sizeof(VAR_7->control[VAR_10].mcs));

  VAR_8->rc_has_mcs_mask[VAR_10] = 0;
  if (!VAR_12)
   continue;

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
   if (~VAR_8->rc_rateidx_mcs_mask[VAR_10][VAR_13]) {
    VAR_8->rc_has_mcs_mask[VAR_10] = 1;
    break;
   }
 }

 return 0;
}
