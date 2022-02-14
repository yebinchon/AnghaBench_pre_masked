
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_shutdown; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int lock; } ;
struct iucv_sock {TYPE_1__ message_q; int backlog_skb_q; } ;
struct af_iucv_trans_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iucv_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct iucv_sock *VAR_5 = FUNC_0(VAR_3);

 if (!VAR_5) {
  FUNC_1(VAR_4);
  return VAR_1;
 }

 if (VAR_3->sk_state != VAR_0) {
  FUNC_1(VAR_4);
  return VAR_1;
 }

 if (VAR_3->sk_shutdown & VAR_2) {
  FUNC_1(VAR_4);
  return VAR_1;
 }


 if (VAR_4->len < sizeof(struct af_iucv_trans_hdr)) {
  FUNC_1(VAR_4);
  return VAR_1;
 }
 FUNC_2(VAR_4, sizeof(struct af_iucv_trans_hdr));
 FUNC_6(VAR_4);
 FUNC_5(VAR_4);
 FUNC_8(&VAR_5->message_q.lock);
 if (FUNC_3(&VAR_5->backlog_skb_q)) {
  if (FUNC_7(VAR_3, VAR_4)) {

   FUNC_4(&VAR_5->backlog_skb_q, VAR_4);
  }
 } else
  FUNC_4(&FUNC_0(VAR_3)->backlog_skb_q, VAR_4);
 FUNC_9(&VAR_5->message_q.lock);
 return VAR_1;
}
