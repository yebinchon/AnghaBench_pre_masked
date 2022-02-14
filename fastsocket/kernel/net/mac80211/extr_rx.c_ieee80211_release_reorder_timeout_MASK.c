
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_ampdu_rx {int reorder_lock; } ;
struct TYPE_2__ {int * tid_rx; } ;
struct sta_info {int sdata; TYPE_1__ ampdu_mlme; int local; } ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_rx_data {int security_idx; int seqno_idx; int flags; int local; int sdata; struct sta_info* sta; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct ieee80211_rx_data*,struct sk_buff_head*) ;
 int FUNC_2 (int ,struct tid_ampdu_rx*,struct sk_buff_head*) ;
 struct tid_ampdu_rx* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sta_info *VAR_0, int VAR_1)
{
 struct sk_buff_head VAR_2;
 struct ieee80211_rx_data VAR_3 = {
  .sta = VAR_0,
  .sdata = VAR_0->sdata,
  .local = VAR_0->local,

  .security_idx = VAR_1,
  .seqno_idx = VAR_1,
  .flags = 0,
 };
 struct tid_ampdu_rx *VAR_4;

 VAR_4 = FUNC_3(VAR_0->ampdu_mlme.tid_rx[VAR_1]);
 if (!VAR_4)
  return;

 FUNC_0(&VAR_2);

 FUNC_4(&VAR_4->reorder_lock);
 FUNC_2(VAR_0->sdata, VAR_4, &VAR_2);
 FUNC_5(&VAR_4->reorder_lock);

 FUNC_1(&VAR_3, &VAR_2);
}
