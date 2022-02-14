
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct ieee80211_sub_if_data {int name; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_4__ {int flags; int wiphy; scalar_t__ vif_data_size; } ;
struct ieee80211_local {int iflist_mtx; scalar_t__ monitor_sdata; int monitor_chandef; TYPE_2__ hw; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int *,int ) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__,struct ieee80211_sub_if_data*) ;
 int FUNC_12 (int ,int ,char*,char*) ;
 char* FUNC_13 (int ) ;

int FUNC_14(struct ieee80211_local *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7;
 int VAR_8;

 if (!(VAR_6->hw.flags & VAR_3))
  return 0;

 FUNC_0();

 if (VAR_6->monitor_sdata)
  return 0;

 VAR_7 = FUNC_8(sizeof(*VAR_7) + VAR_6->hw.vif_data_size, VAR_1);
 if (!VAR_7)
  return -VAR_0;


 VAR_7->local = VAR_6;
 VAR_7->vif.type = VAR_5;
 FUNC_12(VAR_7->name, VAR_4, "%s-monitor",
   FUNC_13(VAR_6->hw.wiphy));

 FUNC_5(VAR_7);

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (FUNC_1(VAR_8)) {

  FUNC_7(VAR_7);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_7(VAR_7);
  return VAR_8;
 }

 VAR_8 = FUNC_6(VAR_7, &VAR_6->monitor_chandef,
     VAR_2);
 if (VAR_8) {
  FUNC_3(VAR_6, VAR_7);
  FUNC_7(VAR_7);
  return VAR_8;
 }

 FUNC_9(&VAR_6->iflist_mtx);
 FUNC_11(VAR_6->monitor_sdata, VAR_7);
 FUNC_10(&VAR_6->iflist_mtx);

 return 0;
}
