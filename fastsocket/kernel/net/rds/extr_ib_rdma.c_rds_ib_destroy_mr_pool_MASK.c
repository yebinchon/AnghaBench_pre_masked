
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr_pool {int free_pinned; int item_count; int flush_worker; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rds_ib_mr_pool*) ;
 int FUNC_4 (struct rds_ib_mr_pool*,int,int *) ;

void FUNC_5(struct rds_ib_mr_pool *VAR_0)
{
 FUNC_2(&VAR_0->flush_worker);
 FUNC_4(VAR_0, 1, ((void*)0));
 FUNC_0(FUNC_1(&VAR_0->item_count));
 FUNC_0(FUNC_1(&VAR_0->free_pinned));
 FUNC_3(VAR_0);
}
