
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int mc_count; int mc_list; int addr_len; int mc; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int flags; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int reconfig_filter; int hw; int filter_lock; int mc_count; int mc_list; int iff_promiscs; int iff_allmultis; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ,...) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_7)
{
 struct ieee80211_sub_if_data *VAR_8 = FUNC_0(VAR_7);
 struct ieee80211_local *VAR_9 = VAR_8->local;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = !!(VAR_7->flags & VAR_2);
 VAR_11 = !!(VAR_7->flags & VAR_3);
 VAR_12 = !!(VAR_8->flags & VAR_0);
 VAR_13 = !!(VAR_8->flags & VAR_1);

 if (VAR_10 != VAR_12) {
  if (VAR_7->flags & VAR_2)
   FUNC_4(&VAR_9->iff_allmultis);
  else
   FUNC_3(&VAR_9->iff_allmultis);
  VAR_8->flags ^= VAR_0;
 }

 if (VAR_11 != VAR_13) {
  if (VAR_7->flags & VAR_3)
   FUNC_4(&VAR_9->iff_promiscs);
  else
   FUNC_3(&VAR_9->iff_promiscs);
  VAR_8->flags ^= VAR_1;
 }






 if (VAR_8->vif.type != VAR_6 &&
     VAR_8->vif.type != VAR_5 &&
     VAR_8->vif.type != VAR_4)



  FUNC_5(VAR_9, VAR_8, VAR_7->mc_count,
           VAR_7->mc_list);


 FUNC_7(&VAR_9->filter_lock);



 FUNC_1(&VAR_9->mc_list, &VAR_9->mc_count,
   &VAR_7->mc_list, &VAR_7->mc_count);

 FUNC_8(&VAR_9->filter_lock);
 FUNC_6(&VAR_9->hw, &VAR_9->reconfig_filter);
}
