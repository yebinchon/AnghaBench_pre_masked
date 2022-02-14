
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {scalar_t__* queue_stop_reasons; int tx_pending_tasklet; int * pending; } ;
struct ieee80211_hw {int queues; } ;
typedef enum queue_stop_reason { ____Placeholder_queue_stop_reason } queue_stop_reason ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__*) ;
 struct ieee80211_local* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_local*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,scalar_t__*) ;
 int FUNC_9 (struct ieee80211_local*,int,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_0, int VAR_1,
       enum queue_stop_reason VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_2(VAR_0);

 FUNC_9(VAR_3, VAR_1, VAR_2);

 if (FUNC_0(VAR_1 >= VAR_0->queues))
  return;

 if (!FUNC_8(VAR_2, &VAR_3->queue_stop_reasons[VAR_1]))
  return;

 FUNC_1(VAR_2, &VAR_3->queue_stop_reasons[VAR_1]);

 if (VAR_3->queue_stop_reasons[VAR_1] != 0)

  return;

 if (FUNC_6(&VAR_3->pending[VAR_1])) {
  FUNC_4();
  FUNC_3(VAR_3, VAR_1);
  FUNC_5();
 } else
  FUNC_7(&VAR_3->tx_pending_tasklet);
}
