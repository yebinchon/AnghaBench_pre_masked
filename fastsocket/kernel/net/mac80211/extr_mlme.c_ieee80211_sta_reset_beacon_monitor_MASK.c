
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ beacon_timeout; int bcn_mon_timer; } ;
struct TYPE_10__ {TYPE_4__ mgd; } ;
struct TYPE_6__ {int driver_flags; } ;
struct ieee80211_sub_if_data {TYPE_5__ u; TYPE_3__* local; TYPE_1__ vif; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct ieee80211_sub_if_data *VAR_3)
{
 if (VAR_3->vif.driver_flags & VAR_1)
  return;

 if (VAR_3->local->hw.flags & VAR_0)
  return;

 FUNC_0(&VAR_3->u.mgd.bcn_mon_timer,
    FUNC_1(VAR_2 + VAR_3->u.mgd.beacon_timeout));
}
