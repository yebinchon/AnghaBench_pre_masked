
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rx_status {size_t band; int flag; int rate_idx; int vht_nss; scalar_t__ rx_flags; } ;
struct ieee80211_rate {int dummy; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {int in_reconfig; int started; scalar_t__ suspended; scalar_t__ quiescing; TYPE_2__ hw; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 size_t VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,char*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,char*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ieee80211_hw*,struct sk_buff*) ;
 struct ieee80211_local* FUNC_6 (struct ieee80211_hw*) ;
 struct sk_buff* FUNC_7 (struct ieee80211_local*,struct sk_buff*,struct ieee80211_rate*) ;
 int FUNC_8 (struct ieee80211_local*,int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(struct ieee80211_hw *VAR_4, struct sk_buff *VAR_5)
{
 struct ieee80211_local *VAR_6 = FUNC_6(VAR_4);
 struct ieee80211_rate *VAR_7 = ((void*)0);
 struct ieee80211_supported_band *VAR_8;
 struct ieee80211_rx_status *VAR_9 = FUNC_0(VAR_5);

 FUNC_4(FUNC_13() == 0);

 if (FUNC_2(VAR_9->band >= VAR_0))
  goto drop;

 VAR_8 = VAR_6->hw.wiphy->bands[VAR_9->band];
 if (FUNC_2(!VAR_8))
  goto drop;
 if (FUNC_14(VAR_6->quiescing || VAR_6->suspended))
  goto drop;


 if (FUNC_14(VAR_6->in_reconfig))
  goto drop;





 if (FUNC_2(!VAR_6->started))
  goto drop;

 if (FUNC_10(!(VAR_9->flag & VAR_1))) {





  if (VAR_9->flag & VAR_2) {
   if (FUNC_1(VAR_9->rate_idx > 76,
     "Rate marked as an HT rate but passed "
     "status->rate_idx is not "
     "an MCS index [0-76]: %d (0x%02x)\n",
     VAR_9->rate_idx,
     VAR_9->rate_idx))
    goto drop;
  } else if (VAR_9->flag & VAR_3) {
   if (FUNC_3(VAR_9->rate_idx > 9 ||
          !VAR_9->vht_nss ||
          VAR_9->vht_nss > 8,
          "Rate marked as a VHT rate but data is invalid: MCS: %d, NSS: %d\n",
          VAR_9->rate_idx, VAR_9->vht_nss))
    goto drop;
  } else {
   if (FUNC_2(VAR_9->rate_idx >= VAR_8->n_bitrates))
    goto drop;
   VAR_7 = &VAR_8->bitrates[VAR_9->rate_idx];
  }
 }

 VAR_9->rx_flags = 0;






 FUNC_11();







 VAR_5 = FUNC_7(VAR_6, VAR_5, VAR_7);
 if (!VAR_5) {
  FUNC_12();
  return;
 }

 FUNC_8(VAR_6,
   ((struct ieee80211_hdr *)VAR_5->data)->frame_control,
   VAR_5->len);
 FUNC_5(VAR_4, VAR_5);

 FUNC_12();

 return;
 drop:
 FUNC_9(VAR_5);
}
