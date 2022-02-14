
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct socket {TYPE_5__* sk; } ;
struct TYPE_12__ {int pingpong; } ;
struct TYPE_11__ {int rskq_defer_accept; } ;
struct TYPE_16__ {TYPE_3__ icsk_ack; TYPE_2__ icsk_accept_queue; } ;
struct TYPE_15__ {int transparent; int freebind; } ;
struct TYPE_14__ {int sk_lingertime; int sk_reuse; int sk_flags; } ;
struct TYPE_10__ {int user_mss; } ;
struct TYPE_13__ {TYPE_1__ rx_opt; } ;


 TYPE_8__* FUNC_0 (TYPE_5__*) ;
 TYPE_6__* FUNC_1 (TYPE_5__*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(struct socket *VAR_0, struct socket *VAR_1)
{



 VAR_1->sk->sk_flags = VAR_0->sk->sk_flags;



 VAR_1->sk->sk_reuse = VAR_0->sk->sk_reuse;

 VAR_1->sk->sk_lingertime = VAR_0->sk->sk_lingertime;

 FUNC_1(VAR_1->sk)->freebind = FUNC_1(VAR_0->sk)->freebind;
 FUNC_1(VAR_1->sk)->transparent = FUNC_1(VAR_0->sk)->transparent;

 FUNC_2(VAR_1->sk)->rx_opt.user_mss = FUNC_2(VAR_0->sk)->rx_opt.user_mss;

 FUNC_0(VAR_1->sk)->icsk_accept_queue.rskq_defer_accept =
  FUNC_0(VAR_0->sk)->icsk_accept_queue.rskq_defer_accept;

 FUNC_0(VAR_1->sk)->icsk_ack.pingpong = FUNC_0(VAR_0->sk)->icsk_ack.pingpong;


}
