
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int nonagle; int write_seq; } ;
struct tcp_skb_cb {scalar_t__ sacked; int flags; int end_seq; int seq; } ;
struct sock {int sk_wmem_queued; } ;
struct sk_buff {scalar_t__ truesize; scalar_t__ csum; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static inline void FUNC_5(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_4(VAR_2);
 struct tcp_skb_cb *VAR_5 = FUNC_0(VAR_3);

 VAR_3->csum = 0;
 VAR_5->seq = VAR_5->end_seq = VAR_4->write_seq;
 VAR_5->flags = VAR_0;
 VAR_5->sacked = 0;
 FUNC_2(VAR_3);
 FUNC_3(VAR_2, VAR_3);
 VAR_2->sk_wmem_queued += VAR_3->truesize;
 FUNC_1(VAR_2, VAR_3->truesize);
 if (VAR_4->nonagle & VAR_1)
  VAR_4->nonagle &= ~VAR_1;
}
