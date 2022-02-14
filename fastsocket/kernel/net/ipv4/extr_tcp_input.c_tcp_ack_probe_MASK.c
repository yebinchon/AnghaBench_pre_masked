
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {int icsk_backoff; int icsk_rto; } ;
struct TYPE_2__ {int end_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*,int ,int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct tcp_sock const*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_2)
{
 const struct tcp_sock *VAR_3 = FUNC_7(VAR_2);
 struct inet_connection_sock *VAR_4 = FUNC_2(VAR_2);



 if (!FUNC_1(FUNC_0(FUNC_6(VAR_2))->end_seq, FUNC_8(VAR_3))) {
  VAR_4->icsk_backoff = 0;
  FUNC_3(VAR_2, VAR_0);



 } else {
  FUNC_4(VAR_2, VAR_0,
       FUNC_5(VAR_4->icsk_rto << VAR_4->icsk_backoff, VAR_1),
       VAR_1);
 }
}
