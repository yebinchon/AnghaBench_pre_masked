
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int spinlock; } ;
struct rds_ib_connection {int * rds_ibdev; int ib_node; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rds_ib_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct rds_ib_device *VAR_2, struct rds_connection *VAR_3)
{
 struct rds_ib_connection *VAR_4 = VAR_3->c_transport_data;


 FUNC_5(&VAR_1);

 FUNC_6(&VAR_2->spinlock);
 FUNC_0(FUNC_3(&VAR_4->ib_node));
 FUNC_2(&VAR_4->ib_node);
 FUNC_8(&VAR_2->spinlock);

 FUNC_1(&VAR_4->ib_node, &VAR_0);

 FUNC_7(&VAR_1);

 VAR_4->rds_ibdev = ((void*)0);
 FUNC_4(VAR_2);
}
