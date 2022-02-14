
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mtx; struct ieee80211_mgd_assoc_data* assoc_data; } ;
struct TYPE_6__ {TYPE_3__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; struct ieee80211_local* local; } ;
struct ieee80211_mgd_assoc_data {scalar_t__ tries; int timeout_started; scalar_t__ timeout; TYPE_4__* bss; } ;
struct TYPE_5__ {int flags; int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct TYPE_8__ {int bssid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*,int ,...) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_sub_if_data *VAR_6)
{
 struct ieee80211_mgd_assoc_data *VAR_7 = VAR_6->u.mgd.assoc_data;
 struct ieee80211_local *VAR_8 = VAR_6->local;

 FUNC_2(&VAR_6->u.mgd.mtx);

 VAR_7->tries++;
 if (VAR_7->tries > VAR_1) {
  FUNC_5(VAR_6, "association with %pM timed out\n",
      VAR_7->bss->bssid);





  FUNC_0(VAR_8->hw.wiphy, VAR_7->bss);

  return -VAR_0;
 }

 FUNC_5(VAR_6, "associate with %pM (try %d/%d)\n",
     VAR_7->bss->bssid, VAR_7->tries,
     VAR_1);
 FUNC_1(VAR_6);

 if (!(VAR_8->hw.flags & VAR_4)) {
  VAR_7->timeout = VAR_5 + VAR_2;
  VAR_7->timeout_started = 1;
  FUNC_4(&VAR_6->u.mgd, VAR_7->timeout);
 } else {
  VAR_7->timeout =
   FUNC_3(VAR_5 +
      VAR_3);
  VAR_7->timeout_started = 1;
  FUNC_4(&VAR_6->u.mgd, VAR_7->timeout);
 }

 return 0;
}
