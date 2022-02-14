
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_5__* bitrates; } ;
struct TYPE_6__ {int basic_rates; } ;
struct TYPE_7__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; struct ieee80211_local* local; } ;
struct TYPE_9__ {TYPE_3__* wiphy; } ;
struct ieee80211_local {TYPE_4__ hw; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_10__ {int bitrate; } ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct ieee80211_sub_if_data *VAR_2,
       struct sk_buff *VAR_3, bool VAR_4,
       enum ieee80211_band VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_2->local;
 struct ieee80211_supported_band *VAR_7;
 int VAR_8;
 u8 VAR_9, VAR_10, *VAR_11;
 u32 VAR_12 = VAR_2->vif.bss_conf.basic_rates;

 VAR_7 = VAR_6->hw.wiphy->bands[VAR_5];
 VAR_10 = VAR_7->n_bitrates;
 if (VAR_10 > 8)
  VAR_10 = 8;

 if (FUNC_2(VAR_3) < VAR_10 + 2)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_3, VAR_10 + 2);
 *VAR_11++ = VAR_1;
 *VAR_11++ = VAR_10;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  u8 VAR_13 = 0;
  if (VAR_4 && VAR_12 & FUNC_0(VAR_9))
   VAR_13 = 0x80;
  VAR_8 = VAR_7->bitrates[VAR_9].bitrate;
  *VAR_11++ = VAR_13 | (u8) (VAR_8 / 5);
 }

 return 0;
}
