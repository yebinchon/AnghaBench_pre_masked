
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int state; int * ops; } ;
struct sock {int sk_destruct; int sk_max_ack_backlog; int sk_write_space; int sk_state; } ;
struct rxrpc_sock {int proto; int srx; int call_lock; int acceptq; int secureq; int listen_link; int calls; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,struct socket*,int) ;
 int FUNC_2 (char*,struct rxrpc_sock*) ;
 struct net VAR_11 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 struct rxrpc_sock* FUNC_5 (struct sock*) ;
 int VAR_14 ;
 int VAR_15 ;
 struct sock* FUNC_6 (struct net*,int ,int ,int *) ;
 int FUNC_7 (struct socket*,struct sock*) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_8(struct net *VAR_17, struct socket *VAR_18, int VAR_19,
   int VAR_20)
{
 struct rxrpc_sock *VAR_21;
 struct sock *VAR_22;

 FUNC_1("%p,%d", VAR_18, VAR_19);

 if (VAR_17 != &VAR_11)
  return -VAR_0;


 if (VAR_19 != VAR_5)
  return -VAR_2;

 if (VAR_18->type != VAR_9)
  return -VAR_3;

 VAR_18->ops = &VAR_13;
 VAR_18->state = VAR_10;

 VAR_22 = FUNC_6(VAR_17, VAR_6, VAR_4, &VAR_12);
 if (!VAR_22)
  return -VAR_1;

 FUNC_7(VAR_18, VAR_22);
 VAR_22->sk_state = VAR_8;
 VAR_22->sk_write_space = VAR_15;
 VAR_22->sk_max_ack_backlog = VAR_16;
 VAR_22->sk_destruct = VAR_14;

 VAR_21 = FUNC_5(VAR_22);
 VAR_21->proto = VAR_19;
 VAR_21->calls = VAR_7;

 FUNC_0(&VAR_21->listen_link);
 FUNC_0(&VAR_21->secureq);
 FUNC_0(&VAR_21->acceptq);
 FUNC_4(&VAR_21->call_lock);
 FUNC_3(&VAR_21->srx, 0, sizeof(VAR_21->srx));

 FUNC_2(" = 0 [%p]", VAR_21);
 return 0;
}
