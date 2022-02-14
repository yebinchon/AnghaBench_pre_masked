
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_device {int spinlock; } ;
struct rds_iw_connection {int * rds_iwdev; int i_cm_id; int iw_node; } ;
struct rds_connection {struct rds_iw_connection* c_transport_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct rds_iw_device *VAR_2, struct rds_connection *VAR_3)
{
 struct rds_iw_connection *VAR_4 = VAR_3->c_transport_data;


 FUNC_5(&VAR_1);

 FUNC_6(&VAR_2->spinlock);
 FUNC_0(FUNC_3(&VAR_4->iw_node));
 FUNC_2(&VAR_4->iw_node);
 FUNC_8(&VAR_2->spinlock);

 FUNC_1(&VAR_4->iw_node, &VAR_0);

 FUNC_7(&VAR_1);

 FUNC_4(VAR_4->rds_iwdev, VAR_4->i_cm_id);
 VAR_4->rds_iwdev = ((void*)0);
}
