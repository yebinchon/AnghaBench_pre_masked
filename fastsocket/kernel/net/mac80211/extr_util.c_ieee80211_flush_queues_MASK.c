
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__* hw_queue; scalar_t__ cab_queue; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct TYPE_7__ {int flags; scalar_t__ queues; } ;
struct ieee80211_local {TYPE_3__ hw; TYPE_1__* ops; } ;
struct TYPE_5__ {int flush; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ieee80211_local*,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

void FUNC_4(struct ieee80211_local *VAR_5,
       struct ieee80211_sub_if_data *VAR_6)
{
 u32 VAR_7;

 if (!VAR_5->ops->flush)
  return;

 if (VAR_6 && VAR_5->hw.flags & VAR_0) {
  int VAR_8;

  VAR_7 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   VAR_7 |= FUNC_0(VAR_6->vif.hw_queue[VAR_8]);
  if (VAR_6->vif.cab_queue != VAR_1)
   VAR_7 |= FUNC_0(VAR_6->vif.cab_queue);
 } else {

  VAR_7 = FUNC_0(VAR_5->hw.queues) - 1;
 }

 FUNC_2(&VAR_5->hw, VAR_2,
     VAR_4);

 FUNC_1(VAR_5, VAR_7, 0);

 FUNC_3(&VAR_5->hw, VAR_2,
     VAR_4);
}
