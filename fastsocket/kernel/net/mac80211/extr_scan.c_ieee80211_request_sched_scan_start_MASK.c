
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_sched_scan_ies {int * ie; int * len; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {int scan_ies_len; int mtx; int sched_scan_sdata; TYPE_3__ hw; TYPE_1__* ops; } ;
struct cfg80211_sched_scan_request {int ie_len; int ie; } ;
struct TYPE_5__ {int * bands; } ;
struct TYPE_4__ {int sched_scan_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_sched_scan_request*,struct ieee80211_sched_scan_ies*) ;
 int FUNC_1 (struct ieee80211_local*,int ,int,int ,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct ieee80211_sub_if_data*) ;

int FUNC_8(struct ieee80211_sub_if_data *VAR_6,
           struct cfg80211_sched_scan_request *VAR_7)
{
 struct ieee80211_local *VAR_8 = VAR_6->local;
 struct ieee80211_sched_scan_ies VAR_9 = {};
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = 2 + VAR_4 +
    VAR_8->scan_ies_len + VAR_7->ie_len;

 FUNC_4(&VAR_8->mtx);

 if (FUNC_6(VAR_8->sched_scan_sdata)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 if (!VAR_8->ops->sched_scan_start) {
  VAR_10 = -VAR_2;
  goto out;
 }

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (!VAR_8->hw.wiphy->bands[VAR_11])
   continue;

  VAR_9.ie[VAR_11] = FUNC_3(VAR_12, VAR_3);
  if (!VAR_9.ie[VAR_11]) {
   VAR_10 = -VAR_1;
   goto out_free;
  }

  VAR_9.len[VAR_11] =
   FUNC_1(VAR_8, VAR_9.ie[VAR_11],
       VAR_12, VAR_7->ie, VAR_7->ie_len,
       VAR_11, (u32) -1, 0);
 }

 VAR_10 = FUNC_0(VAR_8, VAR_6, VAR_7, &VAR_9);
 if (VAR_10 == 0)
  FUNC_7(VAR_8->sched_scan_sdata, VAR_6);

out_free:
 while (VAR_11 > 0)
  FUNC_2(VAR_9.ie[--VAR_11]);
out:
 FUNC_5(&VAR_8->mtx);
 return VAR_10;
}
