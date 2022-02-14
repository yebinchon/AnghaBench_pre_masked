
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_data_ready ) (struct sock*,int) ;int sk_callback_lock; struct rds_connection* sk_user_data; } ;
struct rds_tcp_connection {void (* t_orig_data_ready ) (struct sock*,int) ;} ;
struct rds_connection {int c_recv_w; struct rds_tcp_connection* c_transport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct rds_connection*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,struct sock*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

void FUNC_6(struct sock *VAR_5, int VAR_6)
{
 void (*VAR_7)(struct sock *VAR_8, int VAR_9);
 struct rds_connection *VAR_10;
 struct rds_tcp_connection *VAR_11;

 FUNC_3("data ready sk %p bytes %d\n", VAR_5, VAR_6);

 FUNC_4(&VAR_5->sk_callback_lock);
 VAR_10 = VAR_5->sk_user_data;
 if (!VAR_10) {
  VAR_7 = VAR_5->sk_data_ready;
  goto out;
 }

 VAR_11 = VAR_10->c_transport_data;
 VAR_7 = VAR_11->t_orig_data_ready;
 FUNC_2(VAR_4);

 if (FUNC_1(VAR_10, VAR_1, VAR_2) == -VAR_0)
  FUNC_0(VAR_3, &VAR_10->c_recv_w, 0);
out:
 FUNC_5(&VAR_5->sk_callback_lock);
 VAR_7(VAR_5, VAR_6);
}
