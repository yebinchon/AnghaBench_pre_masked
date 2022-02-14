
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_ampdu_rx {int head_seq_num; struct sk_buff** reorder_buf; int stored_mpdu_num; int reorder_lock; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_rx_status {int rx_flags; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_1,
         struct tid_ampdu_rx *VAR_2,
         int VAR_3,
         struct sk_buff_head *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_2->reorder_buf[VAR_3];
 struct ieee80211_rx_status *VAR_6;

 FUNC_3(&VAR_2->reorder_lock);

 if (!VAR_5)
  goto no_frame;


 VAR_2->stored_mpdu_num--;
 VAR_2->reorder_buf[VAR_3] = ((void*)0);
 VAR_6 = FUNC_0(VAR_5);
 VAR_6->rx_flags |= VAR_0;
 FUNC_1(VAR_4, VAR_5);

no_frame:
 VAR_2->head_seq_num = FUNC_2(VAR_2->head_seq_num);
}
