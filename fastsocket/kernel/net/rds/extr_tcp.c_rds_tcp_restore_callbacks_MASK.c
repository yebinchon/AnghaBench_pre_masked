
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct rds_tcp_connection {int t_orig_state_change; int t_orig_data_ready; int t_orig_write_space; int * t_sock; int t_list_item; } ;
struct TYPE_2__ {int sk_callback_lock; int * sk_user_data; int sk_state_change; int sk_data_ready; int sk_write_space; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,struct socket*,struct rds_tcp_connection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct socket *VAR_2,
          struct rds_tcp_connection *VAR_3)
{
 FUNC_1("restoring sock %p callbacks from tc %p\n", VAR_2, VAR_3);
 FUNC_4(&VAR_2->sk->sk_callback_lock);


 FUNC_2(&VAR_1);
 FUNC_0(&VAR_3->t_list_item);
 VAR_0--;
 FUNC_3(&VAR_1);

 VAR_3->t_sock = ((void*)0);

 VAR_2->sk->sk_write_space = VAR_3->t_orig_write_space;
 VAR_2->sk->sk_data_ready = VAR_3->t_orig_data_ready;
 VAR_2->sk->sk_state_change = VAR_3->t_orig_state_change;
 VAR_2->sk->sk_user_data = ((void*)0);

 FUNC_5(&VAR_2->sk->sk_callback_lock);
}
