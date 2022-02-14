
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tid_ampdu_tx {int last_tx; scalar_t__ timeout; int pending; int state; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int * vif; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_tx_data {TYPE_3__* local; TYPE_4__* sta; TYPE_2__* sdata; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {int hw; } ;
struct TYPE_6__ {int vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int VAR_5 ;
 struct tid_ampdu_tx* FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_tx_data *VAR_6,
      struct sk_buff *VAR_7,
      struct ieee80211_tx_info *VAR_8,
      struct tid_ampdu_tx *VAR_9,
      int VAR_10)
{
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 struct sk_buff *VAR_13 = ((void*)0);

 if (FUNC_7(VAR_0, &VAR_9->state)) {
  VAR_8->flags |= VAR_2;
  VAR_12 = 1;
 } else if (FUNC_7(VAR_1, &VAR_9->state)) {




 } else {
  FUNC_5(&VAR_6->sta->lock);
  VAR_9 = FUNC_3(VAR_6->sta, VAR_10);

  if (!VAR_9) {

  } else if (FUNC_7(VAR_0, &VAR_9->state)) {
   VAR_8->flags |= VAR_2;
   VAR_12 = 1;
  } else {
   VAR_11 = 1;
   VAR_8->control.vif = &VAR_6->sdata->vif;
   VAR_8->flags |= VAR_3;
   FUNC_1(&VAR_9->pending, VAR_7);
   if (FUNC_4(&VAR_9->pending) > VAR_4)
    VAR_13 = FUNC_0(&VAR_9->pending);
  }
  FUNC_6(&VAR_6->sta->lock);

  if (VAR_13)
   FUNC_2(&VAR_6->local->hw, VAR_13);
 }


 if (VAR_12 && VAR_9->timeout)
  VAR_9->last_tx = VAR_5;

 return VAR_11;
}
