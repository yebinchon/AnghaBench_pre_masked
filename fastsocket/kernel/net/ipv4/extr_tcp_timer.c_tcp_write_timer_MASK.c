
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct inet_connection_sock {int icsk_pending; scalar_t__ icsk_timeout; int icsk_retransmit_timer; } ;


 int VAR_0 ;


 int FUNC_0 (struct sock*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_3)
{
 struct sock *VAR_4 = (struct sock *)VAR_3;
 struct inet_connection_sock *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 FUNC_1(VAR_4);
 if (FUNC_6(VAR_4)) {

  FUNC_5(VAR_4, &VAR_5->icsk_retransmit_timer, VAR_2 + (VAR_0 / 20));
  goto out_unlock;
 }

 if (VAR_4->sk_state == VAR_1 || !VAR_5->icsk_pending)
  goto out;

 if (FUNC_10(VAR_5->icsk_timeout, VAR_2)) {
  FUNC_5(VAR_4, &VAR_5->icsk_retransmit_timer, VAR_5->icsk_timeout);
  goto out;
 }

 VAR_6 = VAR_5->icsk_pending;
 VAR_5->icsk_pending = 0;

 switch (VAR_6) {
 case 128:
  FUNC_9(VAR_4);
  break;
 case 129:
  FUNC_8(VAR_4);
  break;
 }
 FUNC_0(VAR_4);

out:
 FUNC_4(VAR_4);
out_unlock:
 FUNC_2(VAR_4);
 FUNC_7(VAR_4);
}
