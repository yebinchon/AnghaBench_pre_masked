
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tid_ampdu_rx {int buf_size; int head_seq_num; int ssn; scalar_t__ stored_mpdu_num; int reorder_lock; int * reorder_time; struct sk_buff** reorder_buf; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_hdr {int seq_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct tid_ampdu_rx*,int,struct sk_buff_head*) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct tid_ampdu_rx*,struct sk_buff_head*) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct ieee80211_sub_if_data *VAR_2,
          struct tid_ampdu_rx *VAR_3,
          struct sk_buff *VAR_4,
          struct sk_buff_head *VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (struct ieee80211_hdr *) VAR_4->data;
 u16 VAR_7 = FUNC_6(VAR_6->seq_ctrl);
 u16 VAR_8 = (VAR_7 & VAR_0) >> 4;
 u16 VAR_9, VAR_10;
 int VAR_11;
 bool VAR_12 = 1;

 FUNC_7(&VAR_3->reorder_lock);

 VAR_10 = VAR_3->buf_size;
 VAR_9 = VAR_3->head_seq_num;


 if (FUNC_3(VAR_8, VAR_9)) {
  FUNC_0(VAR_4);
  goto out;
 }





 if (!FUNC_3(VAR_8, VAR_9 + VAR_10)) {
  VAR_9 = FUNC_2(
    FUNC_4(VAR_8, VAR_10));

  FUNC_1(VAR_2, VAR_3,
       VAR_9, VAR_5);
 }



 VAR_11 = FUNC_4(VAR_8,
     VAR_3->ssn) % VAR_3->buf_size;


 if (VAR_3->reorder_buf[VAR_11]) {
  FUNC_0(VAR_4);
  goto out;
 }







 if (VAR_8 == VAR_3->head_seq_num &&
     VAR_3->stored_mpdu_num == 0) {
  VAR_3->head_seq_num =
   FUNC_2(VAR_3->head_seq_num);
  VAR_12 = 0;
  goto out;
 }


 VAR_3->reorder_buf[VAR_11] = VAR_4;
 VAR_3->reorder_time[VAR_11] = VAR_1;
 VAR_3->stored_mpdu_num++;
 FUNC_5(VAR_2, VAR_3, VAR_5);

 out:
 FUNC_8(&VAR_3->reorder_lock);
 return VAR_12;
}
