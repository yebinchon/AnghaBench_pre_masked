
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int* hw_queue; int cab_queue; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; TYPE_2__* local; } ;
struct TYPE_4__ {int queues; int flags; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_sub_if_data *VAR_7)
{
 int VAR_8 = VAR_7->local->hw.queues;
 int VAR_9;

 if (VAR_7->vif.type != VAR_6) {
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   if (FUNC_0(VAR_7->vif.hw_queue[VAR_9] ==
      VAR_2))
    return -VAR_0;
   if (FUNC_0(VAR_7->vif.hw_queue[VAR_9] >=
      VAR_8))
    return -VAR_0;
  }
 }

 if ((VAR_7->vif.type != VAR_4 &&
      VAR_7->vif.type != VAR_5) ||
     !(VAR_7->local->hw.flags & VAR_1)) {
  VAR_7->vif.cab_queue = VAR_2;
  return 0;
 }

 if (FUNC_0(VAR_7->vif.cab_queue == VAR_2))
  return -VAR_0;

 if (FUNC_0(VAR_7->vif.cab_queue >= VAR_8))
  return -VAR_0;

 return 0;
}
