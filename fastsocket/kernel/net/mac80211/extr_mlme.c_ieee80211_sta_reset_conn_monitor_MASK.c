
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_if_managed {scalar_t__ probe_send_count; int conn_mon_timer; int associated; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_2__* local; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_if_managed *VAR_4 = &VAR_3->u.mgd;

 if (FUNC_2(!VAR_3->u.mgd.associated))
  return;

 if (VAR_3->local->hw.flags & VAR_1)
  return;

 FUNC_0(&VAR_3->u.mgd.conn_mon_timer,
    FUNC_1(VAR_2 + VAR_0));

 VAR_4->probe_send_count = 0;
}
