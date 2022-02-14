
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status_acked; int status_received; int status_fc; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {int work; TYPE_2__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; } ;
typedef int __le16 ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_0,
      __le16 VAR_1, bool VAR_2)
{
 struct ieee80211_local *VAR_3 = VAR_0->local;

 VAR_0->u.mgd.status_fc = VAR_1;
 VAR_0->u.mgd.status_acked = VAR_2;
 VAR_0->u.mgd.status_received = 1;

 FUNC_0(&VAR_3->hw, &VAR_0->work);
}
