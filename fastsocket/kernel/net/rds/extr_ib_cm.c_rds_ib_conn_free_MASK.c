
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_ib_connection {int ib_node; TYPE_1__* rds_ibdev; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (struct rds_ib_connection*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rds_ib_connection*) ;
 int FUNC_3 (char*,struct rds_ib_connection*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(void *VAR_1)
{
 struct rds_ib_connection *VAR_2 = VAR_1;
 spinlock_t *VAR_3;

 FUNC_3("ic %p\n", VAR_2);






 VAR_3 = VAR_2->rds_ibdev ? &VAR_2->rds_ibdev->spinlock : &VAR_0;

 FUNC_4(VAR_3);
 FUNC_1(&VAR_2->ib_node);
 FUNC_5(VAR_3);

 FUNC_2(VAR_2);

 FUNC_0(VAR_2);
}
