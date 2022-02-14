
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ undo_retrans; scalar_t__ undo_marker; } ;
struct tcp_sack_block_wire {int start_seq; int end_seq; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ ack_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_2, struct sk_buff *VAR_3,
      struct tcp_sack_block_wire *VAR_4, int VAR_5,
      u32 VAR_6)
{
 struct tcp_sock *VAR_7 = FUNC_7(VAR_2);
 u32 VAR_8 = FUNC_4(&VAR_4[0].start_seq);
 u32 VAR_9 = FUNC_4(&VAR_4[0].end_seq);
 int VAR_10 = 0;

 if (FUNC_3(VAR_8, FUNC_1(VAR_3)->ack_seq)) {
  VAR_10 = 1;
  FUNC_6(VAR_7);
  FUNC_0(FUNC_5(VAR_2), VAR_1);
 } else if (VAR_5 > 1) {
  u32 VAR_11 = FUNC_4(&VAR_4[1].end_seq);
  u32 VAR_12 = FUNC_4(&VAR_4[1].start_seq);

  if (!FUNC_2(VAR_9, VAR_11) &&
      !FUNC_3(VAR_8, VAR_12)) {
   VAR_10 = 1;
   FUNC_6(VAR_7);
   FUNC_0(FUNC_5(VAR_2),
     VAR_0);
  }
 }


 if (VAR_10 && VAR_7->undo_marker && VAR_7->undo_retrans &&
     !FUNC_2(VAR_9, VAR_6) &&
     FUNC_2(VAR_9, VAR_7->undo_marker))
  VAR_7->undo_retrans--;

 return VAR_10;
}
