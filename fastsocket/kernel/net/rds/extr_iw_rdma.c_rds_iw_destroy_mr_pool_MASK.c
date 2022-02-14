
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_mr_pool {int free_pinned; int item_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rds_iw_mr_pool*) ;
 int FUNC_4 (struct rds_iw_mr_pool*,int) ;
 int VAR_0 ;

void FUNC_5(struct rds_iw_mr_pool *VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_4(VAR_1, 1);
 FUNC_0(FUNC_1(&VAR_1->item_count));
 FUNC_0(FUNC_1(&VAR_1->free_pinned));
 FUNC_3(VAR_1);
}
