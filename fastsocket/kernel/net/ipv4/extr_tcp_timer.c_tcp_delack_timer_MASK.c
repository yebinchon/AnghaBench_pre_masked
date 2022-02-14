
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ memory; int prequeue; } ;
struct tcp_sock {TYPE_1__ ucopy; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int blocked; int pending; int ato; scalar_t__ pingpong; scalar_t__ timeout; } ;
struct inet_connection_sock {TYPE_2__ icsk_ack; int icsk_rto; int icsk_delack_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 struct inet_connection_sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int *,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 scalar_t__ VAR_8 ;
 int FUNC_16 (struct sock*) ;
 struct tcp_sock* FUNC_17 (struct sock*) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_19(unsigned long VAR_9)
{
 struct sock *VAR_10 = (struct sock *)VAR_9;
 struct tcp_sock *VAR_11 = FUNC_17(VAR_10);
 struct inet_connection_sock *VAR_12 = FUNC_5(VAR_10);

 FUNC_3(VAR_10);
 if (FUNC_14(VAR_10)) {

  VAR_12->icsk_ack.blocked = 1;
  FUNC_0(FUNC_13(VAR_10), VAR_1);
  FUNC_11(VAR_10, &VAR_12->icsk_delack_timer, VAR_7 + VAR_6);
  goto out_unlock;
 }

 FUNC_10(VAR_10);

 if (VAR_10->sk_state == VAR_5 || !(VAR_12->icsk_ack.pending & VAR_0))
  goto out;

 if (FUNC_18(VAR_12->icsk_ack.timeout, VAR_7)) {
  FUNC_11(VAR_10, &VAR_12->icsk_delack_timer, VAR_12->icsk_ack.timeout);
  goto out;
 }
 VAR_12->icsk_ack.pending &= ~VAR_0;

 if (!FUNC_12(&VAR_11->ucopy.prequeue)) {
  struct sk_buff *VAR_13;

  FUNC_0(FUNC_13(VAR_10), VAR_3);

  while ((VAR_13 = FUNC_2(&VAR_11->ucopy.prequeue)) != ((void*)0))
   FUNC_8(VAR_10, VAR_13);

  VAR_11->ucopy.memory = 0;
 }

 if (FUNC_6(VAR_10)) {
  if (!VAR_12->icsk_ack.pingpong) {

   VAR_12->icsk_ack.ato = FUNC_7(VAR_12->icsk_ack.ato << 1, VAR_12->icsk_rto);
  } else {



   VAR_12->icsk_ack.pingpong = 0;
   VAR_12->icsk_ack.ato = VAR_4;
  }
  FUNC_16(VAR_10);
  FUNC_0(FUNC_13(VAR_10), VAR_2);
 }
 FUNC_1(VAR_10);

out:
 if (VAR_8)
  FUNC_9(VAR_10);
out_unlock:
 FUNC_4(VAR_10);
 FUNC_15(VAR_10);
}
