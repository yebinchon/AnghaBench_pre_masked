
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct TYPE_4__ {int queues; } ;
struct ieee80211_local {int queue_stop_reason_lock; int * pending; TYPE_2__ hw; scalar_t__* queue_stop_reasons; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_local*,int) ;
 int FUNC_5 (struct ieee80211_local*,struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(unsigned long VAR_0)
{
 struct ieee80211_local *VAR_1 = (struct ieee80211_local *)VAR_0;
 unsigned long VAR_2;
 int VAR_3;
 bool VAR_4;

 FUNC_6();

 FUNC_9(&VAR_1->queue_stop_reason_lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->hw.queues; VAR_3++) {




  if (VAR_1->queue_stop_reasons[VAR_3] ||
      FUNC_8(&VAR_1->pending[VAR_3]))
   continue;

  while (!FUNC_8(&VAR_1->pending[VAR_3])) {
   struct sk_buff *VAR_5 = FUNC_2(&VAR_1->pending[VAR_3]);
   struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_5);

   if (FUNC_1(!VAR_6->control.vif)) {
    FUNC_3(&VAR_1->hw, VAR_5);
    continue;
   }

   FUNC_10(&VAR_1->queue_stop_reason_lock,
      VAR_2);

   VAR_4 = FUNC_5(VAR_1, VAR_5);
   FUNC_9(&VAR_1->queue_stop_reason_lock,
       VAR_2);
   if (!VAR_4)
    break;
  }

  if (FUNC_8(&VAR_1->pending[VAR_3]))
   FUNC_4(VAR_1, VAR_3);
 }
 FUNC_10(&VAR_1->queue_stop_reason_lock, VAR_2);

 FUNC_7();
}
