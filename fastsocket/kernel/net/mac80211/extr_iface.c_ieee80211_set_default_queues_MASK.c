
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* hw_queue; void* cab_queue; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_4__ {int flags; int queues; } ;
struct ieee80211_local {TYPE_2__ hw; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_sub_if_data *VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_3->local;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4->hw.flags & VAR_0)
   VAR_3->vif.hw_queue[VAR_5] = VAR_1;
  else if (VAR_4->hw.queues >= VAR_2)
   VAR_3->vif.hw_queue[VAR_5] = VAR_5;
  else
   VAR_3->vif.hw_queue[VAR_5] = 0;
 }
 VAR_3->vif.cab_queue = VAR_1;
}
