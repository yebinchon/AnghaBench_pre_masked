
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_2__ {int blocked; int pending; int ato; scalar_t__ pingpong; scalar_t__ timeout; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; int icsk_rto; int icsk_delack_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct sock*,int *,scalar_t__) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_7)
{
 struct sock *VAR_8 = (struct sock *)VAR_7;
 struct inet_connection_sock *VAR_9 = FUNC_4(VAR_8);

 FUNC_1(VAR_8);
 if (FUNC_9(VAR_8)) {

  VAR_9->icsk_ack.blocked = 1;
  FUNC_0(FUNC_8(VAR_8), VAR_2);
  FUNC_7(VAR_8, &VAR_9->icsk_delack_timer,
          VAR_6 + VAR_5);
  goto out;
 }

 if (VAR_8->sk_state == VAR_0 ||
     !(VAR_9->icsk_ack.pending & VAR_1))
  goto out;
 if (FUNC_11(VAR_9->icsk_ack.timeout, VAR_6)) {
  FUNC_7(VAR_8, &VAR_9->icsk_delack_timer,
          VAR_9->icsk_ack.timeout);
  goto out;
 }

 VAR_9->icsk_ack.pending &= ~VAR_1;

 if (FUNC_5(VAR_8)) {
  if (!VAR_9->icsk_ack.pingpong) {

   VAR_9->icsk_ack.ato = FUNC_6(VAR_9->icsk_ack.ato << 1,
       VAR_9->icsk_rto);
  } else {



   VAR_9->icsk_ack.pingpong = 0;
   VAR_9->icsk_ack.ato = VAR_4;
  }
  FUNC_3(VAR_8);
  FUNC_0(FUNC_8(VAR_8), VAR_3);
 }
out:
 FUNC_2(VAR_8);
 FUNC_10(VAR_8);
}
