
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_ack_backlog; TYPE_1__* sk_prot; } ;
struct request_sock {struct request_sock* dl_next; struct sock* sk; } ;
struct inet_connection_sock {int icsk_accept_queue; } ;
struct TYPE_2__ {int orphan_count; int (* disconnect ) (struct sock*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct request_sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 struct request_sock* FUNC_11 (int *) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*,int ) ;

void FUNC_18(struct sock *VAR_1)
{
 struct inet_connection_sock *VAR_2 = FUNC_4(VAR_1);
 struct request_sock *VAR_3;
 struct request_sock *VAR_4;

 FUNC_5(VAR_1);


 VAR_3 = FUNC_11(&VAR_2->icsk_accept_queue);
 FUNC_10(&VAR_2->icsk_accept_queue);

 while ((VAR_4 = VAR_3) != ((void*)0)) {
  struct sock *VAR_5 = VAR_4->sk;

  VAR_3 = VAR_4->dl_next;

  FUNC_7();
  FUNC_2(VAR_5);
  FUNC_0(FUNC_15(VAR_5));
  FUNC_13(VAR_5);

  VAR_1->sk_prot->disconnect(VAR_5, VAR_0);

  FUNC_14(VAR_5);

  FUNC_9(VAR_1->sk_prot->orphan_count);

  FUNC_6(VAR_5);

  FUNC_3(VAR_5);
  FUNC_8();
  FUNC_16(VAR_5);

  FUNC_12(VAR_1);
  FUNC_1(VAR_4);
 }
 FUNC_0(VAR_1->sk_ack_backlog);
}
