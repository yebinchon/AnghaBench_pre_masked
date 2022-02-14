
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int vif; } ;
struct ieee80211_tx_info {int hw_queue; TYPE_1__ control; } ;
struct ieee80211_hw {int queues; } ;
struct ieee80211_local {int queue_stop_reason_lock; int * pending; struct ieee80211_hw hw; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_hw*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct ieee80211_local *VAR_1,
       struct sk_buff_head *VAR_2,
       void (*VAR_3)(void *VAR_4), void *VAR_5)
{
 struct ieee80211_hw *VAR_6 = &VAR_1->hw;
 struct sk_buff *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10;

 FUNC_7(&VAR_1->queue_stop_reason_lock, VAR_8);
 while ((VAR_7 = FUNC_6(VAR_2))) {
  struct ieee80211_tx_info *VAR_11 = FUNC_0(VAR_7);

  if (FUNC_1(!VAR_11->control.vif)) {
   FUNC_5(&VAR_1->hw, VAR_7);
   continue;
  }

  VAR_9 = VAR_11->hw_queue;

  FUNC_2(VAR_6, VAR_9,
    VAR_0);

  FUNC_4(&VAR_1->pending[VAR_9], VAR_7);
 }

 if (VAR_3)
  VAR_3(VAR_5);

 for (VAR_10 = 0; VAR_10 < VAR_6->queues; VAR_10++)
  FUNC_3(VAR_6, VAR_10,
   VAR_0);
 FUNC_8(&VAR_1->queue_stop_reason_lock, VAR_8);
}
