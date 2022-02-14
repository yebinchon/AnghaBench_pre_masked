
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; TYPE_1__* sk_prot; scalar_t__ sk_ack_backlog; scalar_t__ sk_max_ack_backlog; } ;
struct inet_sock {int num; int sport; } ;
struct inet_connection_sock {int icsk_accept_queue; } ;
struct TYPE_2__ {int (* hash ) (struct sock*) ;int (* get_port ) (struct sock*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,int const) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

int FUNC_9(struct sock *VAR_3, const int VAR_4)
{
 struct inet_sock *VAR_5 = FUNC_4(VAR_3);
 struct inet_connection_sock *VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = FUNC_5(&VAR_6->icsk_accept_queue, VAR_4);

 if (VAR_7 != 0)
  return VAR_7;

 VAR_3->sk_max_ack_backlog = 0;
 VAR_3->sk_ack_backlog = 0;
 FUNC_3(VAR_3);






 VAR_3->sk_state = VAR_2;
 if (!VAR_3->sk_prot->get_port(VAR_3, VAR_5->num)) {
  VAR_5->sport = FUNC_1(VAR_5->num);

  FUNC_6(VAR_3);
  VAR_3->sk_prot->hash(VAR_3);

  return 0;
 }

 VAR_3->sk_state = VAR_1;
 FUNC_0(&VAR_6->icsk_accept_queue);
 return -VAR_0;
}
