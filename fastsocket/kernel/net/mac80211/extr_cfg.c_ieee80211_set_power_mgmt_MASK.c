
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int ieee80211_ptr; } ;
struct TYPE_6__ {int powersave; int mtx; int req_smps; } ;
struct TYPE_7__ {TYPE_2__ mgd; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;
struct TYPE_8__ {int flags; } ;
struct ieee80211_local {int dynamic_ps_forced_timeout; TYPE_4__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (struct ieee80211_local*,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ieee80211_local* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_6, struct net_device *VAR_7,
        bool VAR_8, int VAR_9)
{
 struct ieee80211_sub_if_data *VAR_10 = FUNC_0(VAR_7);
 struct ieee80211_local *VAR_11 = FUNC_7(VAR_7->ieee80211_ptr);

 if (VAR_10->vif.type != VAR_5 &&
     VAR_10->vif.type != VAR_4)
  return -VAR_0;

 if (!(VAR_11->hw.flags & VAR_3))
  return -VAR_0;

 if (VAR_8 == VAR_10->u.mgd.powersave &&
     VAR_9 == VAR_11->dynamic_ps_forced_timeout)
  return 0;

 VAR_10->u.mgd.powersave = VAR_8;
 VAR_11->dynamic_ps_forced_timeout = VAR_9;


 FUNC_5(&VAR_10->u.mgd.mtx);
 FUNC_1(VAR_10, VAR_10->u.mgd.req_smps);
 FUNC_6(&VAR_10->u.mgd.mtx);

 if (VAR_11->hw.flags & VAR_2)
  FUNC_2(VAR_11, VAR_1);

 FUNC_3(VAR_11, -1);
 FUNC_4(VAR_10);

 return 0;
}
