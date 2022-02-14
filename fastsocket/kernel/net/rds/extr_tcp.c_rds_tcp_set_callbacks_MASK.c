
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct rds_tcp_connection {scalar_t__ t_orig_data_ready; int t_orig_state_change; int t_orig_write_space; struct rds_connection* conn; struct socket* t_sock; int t_list_item; } ;
struct rds_connection {struct rds_tcp_connection* c_transport_data; } ;
struct TYPE_2__ {scalar_t__ sk_data_ready; scalar_t__ sk_user_data; int sk_callback_lock; int sk_state_change; int sk_write_space; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,struct socket*,struct rds_tcp_connection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct socket *VAR_7, struct rds_connection *VAR_8)
{
 struct rds_tcp_connection *VAR_9 = VAR_8->c_transport_data;

 FUNC_1("setting sock %p callbacks to tc %p\n", VAR_7, VAR_9);
 FUNC_4(&VAR_7->sk->sk_callback_lock);


 FUNC_2(&VAR_5);
 FUNC_0(&VAR_9->t_list_item, &VAR_4);
 VAR_3++;
 FUNC_3(&VAR_5);


 if (VAR_7->sk->sk_data_ready == VAR_1)
  VAR_7->sk->sk_data_ready = VAR_7->sk->sk_user_data;

 VAR_9->t_sock = VAR_7;
 VAR_9->conn = VAR_8;
 VAR_9->t_orig_data_ready = VAR_7->sk->sk_data_ready;
 VAR_9->t_orig_write_space = VAR_7->sk->sk_write_space;
 VAR_9->t_orig_state_change = VAR_7->sk->sk_state_change;

 VAR_7->sk->sk_user_data = VAR_8;
 VAR_7->sk->sk_data_ready = VAR_0;
 VAR_7->sk->sk_write_space = VAR_6;
 VAR_7->sk->sk_state_change = VAR_2;

 FUNC_5(&VAR_7->sk->sk_callback_lock);
}
