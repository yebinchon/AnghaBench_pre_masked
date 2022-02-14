
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_connection {int iw_node; struct rds_connection* conn; int i_recv_ring; int i_send_ring; int i_ack_lock; int i_recv_mutex; int i_recv_tasklet; } ;
struct rds_connection {struct rds_iw_connection* c_transport_data; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rds_iw_connection* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,struct rds_connection*,struct rds_iw_connection*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,int ,unsigned long) ;

int FUNC_10(struct rds_connection *VAR_6, gfp_t VAR_7)
{
 struct rds_iw_connection *VAR_8;
 unsigned long VAR_9;


 VAR_8 = FUNC_1(sizeof(struct rds_iw_connection), VAR_7);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(&VAR_8->iw_node);
 FUNC_9(&VAR_8->i_recv_tasklet, VAR_3,
       (unsigned long) VAR_8);
 FUNC_3(&VAR_8->i_recv_mutex);

 FUNC_6(&VAR_8->i_ack_lock);






 FUNC_4(&VAR_8->i_send_ring, VAR_5);
 FUNC_4(&VAR_8->i_recv_ring, VAR_4);

 VAR_8->conn = VAR_6;
 VAR_6->c_transport_data = VAR_8;

 FUNC_7(&VAR_2, VAR_9);
 FUNC_2(&VAR_8->iw_node, &VAR_1);
 FUNC_8(&VAR_2, VAR_9);


 FUNC_5("conn %p conn ic %p\n", VAR_6, VAR_6->c_transport_data);
 return 0;
}
