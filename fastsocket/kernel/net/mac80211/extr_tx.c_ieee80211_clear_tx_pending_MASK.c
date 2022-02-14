
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int queues; } ;
struct ieee80211_local {TYPE_1__ hw; int * pending; } ;


 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

void FUNC_2(struct ieee80211_local *VAR_0)
{
 struct sk_buff *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->hw.queues; VAR_2++) {
  while ((VAR_1 = FUNC_1(&VAR_0->pending[VAR_2])) != ((void*)0))
   FUNC_0(&VAR_0->hw, VAR_1);
 }
}
