
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_state_change ) (struct sock*) ;int sk_state; int sk_callback_lock; struct rds_connection* sk_user_data; } ;
struct rds_tcp_connection {void (* t_orig_state_change ) (struct sock*) ;int t_sock; } ;
struct rds_connection {struct rds_tcp_connection* c_transport_data; } ;






 int FUNC_0 (struct rds_connection*) ;
 int FUNC_1 (struct rds_connection*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sock *VAR_0)
{
 void (*VAR_1)(struct sock *VAR_2);
 struct rds_connection *VAR_3;
 struct rds_tcp_connection *VAR_4;

 FUNC_3(&VAR_0->sk_callback_lock);
 VAR_3 = VAR_0->sk_user_data;
 if (!VAR_3) {
  VAR_1 = VAR_0->sk_state_change;
  goto out;
 }
 VAR_4 = VAR_3->c_transport_data;
 VAR_1 = VAR_4->t_orig_state_change;

 FUNC_2("sock %p state_change to %d\n", VAR_4->t_sock, VAR_0->sk_state);

 switch(VAR_0->sk_state) {

  case 128:
  case 129:
   break;
  case 130:
   FUNC_1(VAR_3);
   break;
  case 131:
   FUNC_0(VAR_3);
  default:
   break;
 }
out:
 FUNC_4(&VAR_0->sk_callback_lock);
 VAR_1(VAR_0);
}
