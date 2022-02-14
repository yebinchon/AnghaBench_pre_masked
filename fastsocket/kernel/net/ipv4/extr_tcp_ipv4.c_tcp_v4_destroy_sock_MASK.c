
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prequeue; } ;
struct tcp_sock {TYPE_1__ ucopy; int * md5sig_info; int out_of_order_queue; } ;
struct sock {int * sk_sndmsg_page; int sk_async_wait_queue; } ;
struct TYPE_4__ {scalar_t__ icsk_bind_hash; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 int VAR_0 ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

void FUNC_11(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_8(VAR_1);

 FUNC_7(VAR_1);

 FUNC_6(VAR_1);


 FUNC_10(VAR_1);


 FUNC_1(&VAR_2->out_of_order_queue);
 FUNC_1(&VAR_2->ucopy.prequeue);


 if (FUNC_2(VAR_1)->icsk_bind_hash)
  FUNC_3(VAR_1);




 if (VAR_1->sk_sndmsg_page) {
  FUNC_0(VAR_1->sk_sndmsg_page);
  VAR_1->sk_sndmsg_page = ((void*)0);
 }

 FUNC_5(&VAR_0);
}
