
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int seq; int urg_ptr; } ;
struct tcp_sock {scalar_t__ copied_seq; scalar_t__ rcv_nxt; scalar_t__ urg_seq; scalar_t__ pred_flags; scalar_t__ urg_data; } ;
struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ end_seq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (struct sock*,int ) ;
 int VAR_2 ;
 struct tcp_sock* FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_3, struct tcphdr *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_10(VAR_3);
 u32 VAR_6 = FUNC_6(VAR_4->urg_ptr);

 if (VAR_6 && !VAR_2)
  VAR_6--;
 VAR_6 += FUNC_5(VAR_4->seq);


 if (FUNC_3(VAR_5->copied_seq, VAR_6))
  return;
 if (FUNC_4(VAR_6, VAR_5->rcv_nxt))
  return;


 if (VAR_5->urg_data && !FUNC_3(VAR_6, VAR_5->urg_seq))
  return;


 FUNC_7(VAR_3);
 if (VAR_5->urg_seq == VAR_5->copied_seq && VAR_5->urg_data &&
     !FUNC_9(VAR_3, VAR_0) && VAR_5->copied_seq != VAR_5->rcv_nxt) {
  struct sk_buff *VAR_7 = FUNC_8(&VAR_3->sk_receive_queue);
  VAR_5->copied_seq++;
  if (VAR_7 && !FUNC_4(VAR_5->copied_seq, FUNC_0(VAR_7)->end_seq)) {
   FUNC_2(VAR_7, &VAR_3->sk_receive_queue);
   FUNC_1(VAR_7);
  }
 }

 VAR_5->urg_data = VAR_1;
 VAR_5->urg_seq = VAR_6;


 VAR_5->pred_flags = 0;
}
