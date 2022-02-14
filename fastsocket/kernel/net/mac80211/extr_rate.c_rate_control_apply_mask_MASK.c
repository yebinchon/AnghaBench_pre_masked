
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
struct ieee80211_tx_rate {scalar_t__ idx; } ;
struct ieee80211_tx_info {size_t band; } ;
struct ieee80211_supported_band {int n_bitrates; } ;
struct TYPE_8__ {int width; } ;
struct TYPE_9__ {TYPE_3__ chandef; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; } ;
struct ieee80211_sub_if_data {int* rc_rateidx_mask; int* rc_has_mcs_mask; TYPE_5__ vif; int * rc_rateidx_mcs_mask; } ;
struct TYPE_6__ {int * rx_mask; } ;
struct TYPE_7__ {TYPE_1__ mcs; } ;
struct ieee80211_sta {int* supp_rates; TYPE_2__ ht_cap; } ;
typedef int mcs_mask ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct ieee80211_tx_rate*,struct ieee80211_supported_band*,int,int,int *) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_1,
        struct ieee80211_sta *VAR_2,
        struct ieee80211_supported_band *VAR_3,
        struct ieee80211_tx_info *VAR_4,
        struct ieee80211_tx_rate *VAR_5,
        int VAR_6)
{
 enum nl80211_chan_width VAR_7;
 u8 VAR_8[VAR_0];
 bool VAR_9;
 u32 VAR_10;
 int VAR_11;






 VAR_10 = VAR_1->rc_rateidx_mask[VAR_4->band];
 VAR_9 = VAR_1->rc_has_mcs_mask[VAR_4->band];
 if (VAR_10 == (1 << VAR_3->n_bitrates) - 1 && !VAR_9)
  return;

 if (VAR_9)
  FUNC_0(VAR_8, VAR_1->rc_rateidx_mcs_mask[VAR_4->band],
         sizeof(VAR_8));
 else
  FUNC_1(VAR_8, 0xff, sizeof(VAR_8));

 if (VAR_2) {

  VAR_10 &= VAR_2->supp_rates[VAR_4->band];
  for (VAR_11 = 0; VAR_11 < sizeof(VAR_8); VAR_11++)
   VAR_8[VAR_11] &= VAR_2->ht_cap.mcs.rx_mask[VAR_11];
 }






 VAR_7 = VAR_1->vif.bss_conf.chandef.width;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {

  if (VAR_5[VAR_11].idx < 0)
   break;

  FUNC_2(&VAR_5[VAR_11], VAR_3, VAR_7, VAR_10,
        VAR_8);
 }
}
