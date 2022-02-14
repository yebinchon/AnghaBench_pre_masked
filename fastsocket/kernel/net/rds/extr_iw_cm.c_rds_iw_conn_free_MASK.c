
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_iw_connection {int iw_node; TYPE_1__* rds_iwdev; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (struct rds_iw_connection*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct rds_iw_connection*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void *VAR_1)
{
 struct rds_iw_connection *VAR_2 = VAR_1;
 spinlock_t *VAR_3;

 FUNC_2("ic %p\n", VAR_2);






 VAR_3 = VAR_2->rds_iwdev ? &VAR_2->rds_iwdev->spinlock : &VAR_0;

 FUNC_3(VAR_3);
 FUNC_1(&VAR_2->iw_node);
 FUNC_4(VAR_3);

 FUNC_0(VAR_2);
}
