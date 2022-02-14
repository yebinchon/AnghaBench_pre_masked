
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * ops; } ;
struct sock {int sk_protocol; } ;
struct rds_sock {int rs_item; int rs_rdma_keys; int rs_rdma_lock; int rs_cong_list; int rs_notify_queue; int rs_recv_queue; int rs_send_queue; int rs_recv_lock; int rs_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 struct rds_sock* FUNC_2 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct socket*,struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_5, struct sock *VAR_6, int VAR_7)
{
 struct rds_sock *VAR_8;

 FUNC_4(VAR_5, VAR_6);
 VAR_5->ops = &VAR_1;
 VAR_6->sk_protocol = VAR_7;

 VAR_8 = FUNC_2(VAR_6);
 FUNC_6(&VAR_8->rs_lock);
 FUNC_3(&VAR_8->rs_recv_lock);
 FUNC_0(&VAR_8->rs_send_queue);
 FUNC_0(&VAR_8->rs_recv_queue);
 FUNC_0(&VAR_8->rs_notify_queue);
 FUNC_0(&VAR_8->rs_cong_list);
 FUNC_6(&VAR_8->rs_rdma_lock);
 VAR_8->rs_rdma_keys = VAR_0;

 FUNC_5(&VAR_4);
 FUNC_1(&VAR_8->rs_item, &VAR_3);
 VAR_2++;
 FUNC_7(&VAR_4);

 return 0;
}
