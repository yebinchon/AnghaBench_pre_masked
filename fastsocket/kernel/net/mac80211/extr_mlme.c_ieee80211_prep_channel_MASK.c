
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct TYPE_11__ {scalar_t__ vht_supported; } ;
struct TYPE_10__ {scalar_t__ ht_supported; } ;
struct ieee80211_supported_band {TYPE_5__ vht_cap; TYPE_4__ ht_cap; } ;
struct ieee80211_if_managed {int flags; } ;
struct TYPE_7__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int smps_mode; int needed_rx_chains; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_9__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {int rx_chains; TYPE_3__ hw; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct cfg80211_chan_def {scalar_t__ width; } ;
struct cfg80211_bss {TYPE_6__* channel; } ;
struct TYPE_12__ {size_t band; } ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct cfg80211_chan_def*) ;
 int* FUNC_1 (struct cfg80211_bss*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,TYPE_6__*,struct ieee80211_ht_operation const*,struct ieee80211_vht_operation const*,struct cfg80211_chan_def*,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct cfg80211_bss*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_sub_if_data *VAR_12,
      struct cfg80211_bss *VAR_13)
{
 struct ieee80211_local *VAR_14 = VAR_12->local;
 struct ieee80211_if_managed *VAR_15 = &VAR_12->u.mgd;
 const struct ieee80211_ht_operation *VAR_16 = ((void*)0);
 const struct ieee80211_vht_operation *VAR_17 = ((void*)0);
 struct ieee80211_supported_band *VAR_18;
 struct cfg80211_chan_def VAR_19;
 int VAR_20;

 VAR_18 = VAR_14->hw.wiphy->bands[VAR_13->channel->band];

 VAR_15->flags &= ~(VAR_3 |
     VAR_4 |
     VAR_2);

 FUNC_6();

 if (!(VAR_15->flags & VAR_5) &&
     VAR_18->ht_cap.ht_supported) {
  const u8 *VAR_21, *VAR_22;

  VAR_21 = FUNC_1(VAR_13, VAR_9);
  if (VAR_21 && VAR_21[1] >= sizeof(*VAR_16))
   VAR_16 = (void *)(VAR_21 + 2);

  VAR_22 = FUNC_1(VAR_13, VAR_8);
  if (!VAR_22 || VAR_22[1] < sizeof(struct ieee80211_ht_cap)) {
   VAR_15->flags |= VAR_5;
   VAR_16 = ((void*)0);
  }
 }

 if (!(VAR_15->flags & VAR_6) &&
     VAR_18->vht_cap.vht_supported) {
  const u8 *VAR_23, *VAR_24;

  VAR_23 = FUNC_1(VAR_13,
         VAR_11);
  if (VAR_23 && VAR_23[1] >= sizeof(*VAR_17))
   VAR_17 = (void *)(VAR_23 + 2);
  if (VAR_17 && !VAR_16) {
   VAR_17 = ((void*)0);
   FUNC_8(VAR_12,
       "AP advertised VHT without HT, disabling both\n");
   VAR_15->flags |= VAR_5;
   VAR_15->flags |= VAR_6;
  }

  VAR_24 = FUNC_1(VAR_13, VAR_10);
  if (!VAR_24 || VAR_24[1] < sizeof(struct ieee80211_vht_cap)) {
   VAR_15->flags |= VAR_6;
   VAR_17 = ((void*)0);
  }
 }

 VAR_15->flags |= FUNC_2(VAR_12, VAR_18,
           VAR_13->channel,
           VAR_16, VAR_17,
           &VAR_19, 0);

 VAR_12->needed_rx_chains = FUNC_5(FUNC_3(VAR_12, VAR_13),
          VAR_14->rx_chains);

 FUNC_7();


 VAR_12->smps_mode = VAR_1;






 VAR_20 = FUNC_4(VAR_12, &VAR_19,
     VAR_0);
 while (VAR_20 && VAR_19.width != VAR_7) {
  VAR_15->flags |= FUNC_0(&VAR_19);
  VAR_20 = FUNC_4(VAR_12, &VAR_19,
      VAR_0);
 }
 return VAR_20;
}
