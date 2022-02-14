
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {unsigned int lost_cnt_hint; struct sk_buff* lost_skb_hint; struct sk_buff* scoreboard_skb_hint; struct sk_buff* retransmit_skb_hint; } ;
struct tcp_sacktag_state {int dummy; } ;
struct sock {int sk_gso_type; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int end_seq; int seq; int sacked; int flags; } ;
struct TYPE_3__ {unsigned int gso_segs; int gso_size; int gso_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*,struct sock*,struct tcp_sacktag_state*,int,unsigned int) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,struct sock*) ;
 struct sk_buff* FUNC_12 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_3, struct sk_buff *VAR_4,
      struct tcp_sacktag_state *VAR_5,
      unsigned int VAR_6, int VAR_7, int VAR_8,
      int VAR_9)
{
 struct tcp_sock *VAR_10 = FUNC_9(VAR_3);
 struct sk_buff *VAR_11 = FUNC_12(VAR_3, VAR_4);

 FUNC_0(!VAR_6);

 if (VAR_4 == VAR_10->lost_skb_hint)
  VAR_10->lost_cnt_hint += VAR_6;

 FUNC_2(VAR_11)->end_seq += VAR_7;
 FUNC_2(VAR_4)->seq += VAR_7;

 FUNC_4(VAR_11)->gso_segs += VAR_6;
 FUNC_0(FUNC_4(VAR_4)->gso_segs < VAR_6);
 FUNC_4(VAR_4)->gso_segs -= VAR_6;






 if (!FUNC_4(VAR_11)->gso_size) {
  FUNC_4(VAR_11)->gso_size = VAR_8;
  FUNC_4(VAR_11)->gso_type = VAR_3->sk_gso_type;
 }


 if (FUNC_4(VAR_4)->gso_segs <= 1) {
  FUNC_4(VAR_4)->gso_size = 0;
  FUNC_4(VAR_4)->gso_type = 0;
 }


 FUNC_8(VAR_4, VAR_3, VAR_5, VAR_9, VAR_6);


 FUNC_2(VAR_11)->sacked |= (FUNC_2(VAR_4)->sacked & VAR_2);

 if (VAR_4->len > 0) {
  FUNC_0(!FUNC_10(VAR_4));
  FUNC_1(FUNC_5(VAR_3), VAR_1);
  return 0;
 }



 if (VAR_4 == VAR_10->retransmit_skb_hint)
  VAR_10->retransmit_skb_hint = VAR_11;
 if (VAR_4 == VAR_10->scoreboard_skb_hint)
  VAR_10->scoreboard_skb_hint = VAR_11;
 if (VAR_4 == VAR_10->lost_skb_hint) {
  VAR_10->lost_skb_hint = VAR_11;
  VAR_10->lost_cnt_hint -= FUNC_10(VAR_11);
 }

 FUNC_2(VAR_4)->flags |= FUNC_2(VAR_11)->flags;
 if (VAR_4 == FUNC_7(VAR_3))
  FUNC_6(VAR_3, VAR_4);

 FUNC_11(VAR_4, VAR_3);
 FUNC_3(VAR_3, VAR_4);

 FUNC_1(FUNC_5(VAR_3), VAR_0);

 return 1;
}
