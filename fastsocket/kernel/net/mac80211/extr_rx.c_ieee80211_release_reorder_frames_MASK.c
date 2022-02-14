
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tid_ampdu_rx {int buf_size; int ssn; int head_seq_num; int reorder_lock; } ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,struct tid_ampdu_rx*,int,struct sk_buff_head*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_0,
          struct tid_ampdu_rx *VAR_1,
          u16 VAR_2,
          struct sk_buff_head *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_1->reorder_lock);

 while (FUNC_1(VAR_1->head_seq_num, VAR_2)) {
  VAR_4 = FUNC_2(VAR_1->head_seq_num,
      VAR_1->ssn) %
       VAR_1->buf_size;
  FUNC_0(VAR_0, VAR_1, VAR_4,
      VAR_3);
 }
}
