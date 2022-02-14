
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct inet_connection_sock {int icsk_pending; scalar_t__ icsk_timeout; int icsk_retransmit_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_3)
{
 struct sock *VAR_4 = (struct sock *)VAR_3;
 struct inet_connection_sock *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0;

 FUNC_0(VAR_4);
 if (FUNC_5(VAR_4)) {

  FUNC_4(VAR_4, &VAR_5->icsk_retransmit_timer,
          VAR_2 + (VAR_1 / 20));
  goto out;
 }

 if (VAR_4->sk_state == VAR_0 || !VAR_5->icsk_pending)
  goto out;

 if (FUNC_7(VAR_5->icsk_timeout, VAR_2)) {
  FUNC_4(VAR_4, &VAR_5->icsk_retransmit_timer,
          VAR_5->icsk_timeout);
  goto out;
 }

 VAR_6 = VAR_5->icsk_pending;
 VAR_5->icsk_pending = 0;

 switch (VAR_6) {
 case 128:
  FUNC_2(VAR_4);
  break;
 }
out:
 FUNC_1(VAR_4);
 FUNC_6(VAR_4);
}
