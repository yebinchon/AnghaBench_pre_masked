
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int monitor_work; } ;
struct TYPE_7__ {TYPE_1__ mgd; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int work; TYPE_4__* local; TYPE_2__ u; TYPE_3__ vif; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {TYPE_5__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (TYPE_5__*,int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sub_if_data *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->vif.type == VAR_1) {
  FUNC_0(VAR_2);


  VAR_3 = VAR_2->local->hw.flags;
  if (!(VAR_3 & VAR_0))
   FUNC_1(&VAR_2->local->hw,
          &VAR_2->u.mgd.monitor_work);

  FUNC_1(&VAR_2->local->hw, &VAR_2->work);
 }
}
