
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_managed {int flags; int conn_mon_timer; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_2__ u; } ;
struct TYPE_3__ {int flags; } ;
struct ieee80211_local {int mtx; TYPE_1__ hw; int iflist_mtx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_local*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_5)
{
 struct ieee80211_if_managed *VAR_6 = &VAR_5->u.mgd;
 struct ieee80211_local *VAR_7 = VAR_5->local;

 FUNC_4(&VAR_7->mtx);
 if (!(VAR_6->flags & (VAR_2 |
         VAR_3))) {
  FUNC_5(&VAR_7->mtx);
  return;
 }

 FUNC_0(VAR_5);

 FUNC_4(&VAR_7->iflist_mtx);
 FUNC_1(VAR_7, -1);
 FUNC_5(&VAR_7->iflist_mtx);

 if (VAR_5->local->hw.flags & VAR_1)
  goto out;






 FUNC_2(VAR_5);

 FUNC_3(&VAR_6->conn_mon_timer,
    FUNC_6(VAR_4 +
       VAR_0));
out:
 FUNC_5(&VAR_7->mtx);
}
