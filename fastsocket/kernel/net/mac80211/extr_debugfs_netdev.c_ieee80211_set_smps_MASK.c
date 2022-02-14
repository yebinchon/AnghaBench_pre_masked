
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mtx; } ;
struct TYPE_7__ {TYPE_2__ mgd; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_8__ {int flags; } ;
struct ieee80211_local {TYPE_4__ hw; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_sub_if_data *VAR_8,
         enum ieee80211_smps_mode VAR_9)
{
 struct ieee80211_local *VAR_10 = VAR_8->local;
 int VAR_11;

 if (!(VAR_10->hw.flags & VAR_3) &&
     VAR_9 == VAR_6)
  return -VAR_0;


 if (!(VAR_10->hw.flags & VAR_2) &&
     (VAR_9 == VAR_5 ||
      VAR_9 == VAR_4))
  return -VAR_0;


 if (VAR_8->vif.type != VAR_7)
  return -VAR_1;

 FUNC_1(&VAR_8->u.mgd.mtx);
 VAR_11 = FUNC_0(VAR_8, VAR_9);
 FUNC_2(&VAR_8->u.mgd.mtx);

 return VAR_11;
}
