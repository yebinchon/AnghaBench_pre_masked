
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee802_11_elems {int supp_rates_len; int ext_supp_rates_len; int* supp_rates; int* ext_supp_rates; } ;
struct ieee80211_supported_band {size_t n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int bitrate; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

u32 FUNC_2(struct ieee80211_local *VAR_1,
       struct ieee802_11_elems *VAR_2,
       enum ieee80211_band VAR_3, u32 *VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 struct ieee80211_rate *VAR_6;
 size_t VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10;
 VAR_5 = VAR_1->hw.wiphy->bands[VAR_3];

 if (FUNC_1(!VAR_5))
  return 1;

 VAR_6 = VAR_5->bitrates;
 VAR_7 = VAR_5->n_bitrates;
 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2->supp_rates_len +
       VAR_2->ext_supp_rates_len; VAR_9++) {
  u8 VAR_11 = 0;
  int VAR_12;
  bool VAR_13;
  if (VAR_9 < VAR_2->supp_rates_len)
   VAR_11 = VAR_2->supp_rates[VAR_9];
  else if (VAR_2->ext_supp_rates)
   VAR_11 = VAR_2->ext_supp_rates
    [VAR_9 - VAR_2->supp_rates_len];
  VAR_12 = 5 * (VAR_11 & 0x7f);
  VAR_13 = !!(VAR_11 & 0x80);

  if (VAR_13 && (VAR_11 & 0x7f) == VAR_0)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
   if (VAR_6[VAR_10].bitrate == VAR_12) {
    VAR_8 |= FUNC_0(VAR_10);
    if (VAR_4 && VAR_13)
     *VAR_4 |= FUNC_0(VAR_10);
   }
  }
 }
 return VAR_8;
}
