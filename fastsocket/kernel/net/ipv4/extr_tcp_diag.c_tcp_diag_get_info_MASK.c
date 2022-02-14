
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ snd_una; scalar_t__ write_seq; scalar_t__ copied_seq; scalar_t__ rcv_nxt; } ;
struct tcp_info {int dummy; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;
struct inet_diag_msg {scalar_t__ idiag_wqueue; scalar_t__ idiag_rqueue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*,struct tcp_info*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, struct inet_diag_msg *VAR_2,
         void *VAR_3)
{
 const struct tcp_sock *VAR_4 = FUNC_1(VAR_1);
 struct tcp_info *VAR_5 = VAR_3;

 if (VAR_1->sk_state == VAR_0) {
  VAR_2->idiag_rqueue = VAR_1->sk_ack_backlog;
  VAR_2->idiag_wqueue = VAR_1->sk_max_ack_backlog;
 } else {
  VAR_2->idiag_rqueue = VAR_4->rcv_nxt - VAR_4->copied_seq;
  VAR_2->idiag_wqueue = VAR_4->write_seq - VAR_4->snd_una;
 }
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_1, VAR_5);
}
