
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ packets_out; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {int icsk_probes_out; int icsk_rto; int icsk_backoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct sock*,int const) ;
 scalar_t__ FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_3)
{
 struct inet_connection_sock *VAR_4 = FUNC_0(VAR_3);
 struct tcp_sock *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 if (VAR_5->packets_out || !FUNC_4(VAR_3)) {
  VAR_4->icsk_probes_out = 0;
  return;
 }
 VAR_6 = VAR_2;

 if (FUNC_1(VAR_3, VAR_0)) {
  const int VAR_7 = ((VAR_4->icsk_rto << VAR_4->icsk_backoff) < VAR_1);

  VAR_6 = FUNC_2(VAR_3, VAR_7);

  if (FUNC_3(VAR_3, VAR_7 || VAR_4->icsk_probes_out <= VAR_6))
   return;
 }

 if (VAR_4->icsk_probes_out > VAR_6) {
  FUNC_7(VAR_3);
 } else {

  FUNC_5(VAR_3);
 }
}
