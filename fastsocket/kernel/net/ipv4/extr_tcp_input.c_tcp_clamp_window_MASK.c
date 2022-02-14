
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ window_clamp; unsigned int advmss; void* rcv_ssthresh; } ;
struct sock {scalar_t__ sk_rcvbuf; int sk_userlocks; int sk_rmem_alloc; } ;
struct TYPE_2__ {scalar_t__ quick; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 void* FUNC_2 (scalar_t__,unsigned int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_3(VAR_5);
 struct inet_connection_sock *VAR_7 = FUNC_1(VAR_5);

 VAR_7->icsk_ack.quick = 0;

 if (VAR_5->sk_rcvbuf < VAR_2[2] &&
     !(VAR_5->sk_userlocks & VAR_0) &&
     !VAR_4 &&
     FUNC_0(&VAR_3) < VAR_1[0]) {
  VAR_5->sk_rcvbuf = FUNC_2(FUNC_0(&VAR_5->sk_rmem_alloc),
        VAR_2[2]);
 }
 if (FUNC_0(&VAR_5->sk_rmem_alloc) > VAR_5->sk_rcvbuf)
  VAR_6->rcv_ssthresh = FUNC_2(VAR_6->window_clamp, 2U * VAR_6->advmss);
}
