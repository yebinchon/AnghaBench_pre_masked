
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {int radar_required; int dfs_cac_timer_work; struct ieee80211_local* local; int needed_rx_chains; int smps_mode; } ;
struct ieee80211_local {int hw; int iflist_mtx; int rx_chains; scalar_t__ scanning; int roc_list; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,unsigned long) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int ) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_4,
        struct net_device *VAR_5,
        struct cfg80211_chan_def *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_5);
 struct ieee80211_local *VAR_8 = VAR_7->local;
 unsigned long VAR_9;
 int VAR_10;

 if (!FUNC_3(&VAR_8->roc_list) || VAR_8->scanning)
  return -VAR_0;


 VAR_7->smps_mode = VAR_3;
 VAR_7->needed_rx_chains = VAR_8->rx_chains;
 VAR_7->radar_required = 1;

 FUNC_5(&VAR_8->iflist_mtx);
 VAR_10 = FUNC_2(VAR_7, VAR_6,
     VAR_1);
 FUNC_6(&VAR_8->iflist_mtx);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_4(VAR_2);
 FUNC_1(&VAR_7->local->hw,
         &VAR_7->dfs_cac_timer_work, VAR_9);

 return 0;
}
