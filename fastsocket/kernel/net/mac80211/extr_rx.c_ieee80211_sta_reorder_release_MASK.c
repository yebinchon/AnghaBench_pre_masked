
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_ampdu_rx {int head_seq_num; int buf_size; int reorder_timer; scalar_t__* reorder_time; scalar_t__* reorder_buf; int ssn; scalar_t__ stored_mpdu_num; int reorder_lock; } ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct tid_ampdu_rx*,int,struct sk_buff_head*) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_3,
       struct tid_ampdu_rx *VAR_4,
       struct sk_buff_head *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_4(&VAR_4->reorder_lock);


 VAR_6 = FUNC_3(VAR_4->head_seq_num,
     VAR_4->ssn) % VAR_4->buf_size;
 if (!VAR_4->reorder_buf[VAR_6] &&
     VAR_4->stored_mpdu_num) {




  int VAR_8 = 1;
  for (VAR_7 = (VAR_6 + 1) % VAR_4->buf_size; VAR_7 != VAR_6;
       VAR_7 = (VAR_7 + 1) % VAR_4->buf_size) {
   if (!VAR_4->reorder_buf[VAR_7]) {
    VAR_8++;
    continue;
   }
   if (VAR_8 &&
       !FUNC_6(VAR_2, VAR_4->reorder_time[VAR_7] +
     VAR_0))
    goto set_release_timer;

   FUNC_1(VAR_3,
        "release an RX reorder frame due to timeout on earlier frames\n");
   FUNC_2(VAR_3, VAR_4, VAR_7,
       VAR_5);




   VAR_4->head_seq_num =
    (VAR_4->head_seq_num +
     VAR_8) & VAR_1;
   VAR_8 = 0;
  }
 } else while (VAR_4->reorder_buf[VAR_6]) {
  FUNC_2(VAR_3, VAR_4, VAR_6,
      VAR_5);
  VAR_6 = FUNC_3(VAR_4->head_seq_num,
      VAR_4->ssn) %
       VAR_4->buf_size;
 }

 if (VAR_4->stored_mpdu_num) {
  VAR_7 = VAR_6 = FUNC_3(VAR_4->head_seq_num,
          VAR_4->ssn) %
       VAR_4->buf_size;

  for (; VAR_7 != (VAR_6 - 1) % VAR_4->buf_size;
       VAR_7 = (VAR_7 + 1) % VAR_4->buf_size) {
   if (VAR_4->reorder_buf[VAR_7])
    break;
  }

 set_release_timer:

  FUNC_5(&VAR_4->reorder_timer,
     VAR_4->reorder_time[VAR_7] + 1 +
     VAR_0);
 } else {
  FUNC_0(&VAR_4->reorder_timer);
 }
}
