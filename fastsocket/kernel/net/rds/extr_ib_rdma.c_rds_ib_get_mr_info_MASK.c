
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_info_rdma_connection {int rdma_mr_size; int rdma_mr_max; } ;
struct TYPE_2__ {int max_pages; } ;
struct rds_ib_mr_pool {TYPE_1__ fmr_attr; int max_items; } ;
struct rds_ib_device {struct rds_ib_mr_pool* mr_pool; } ;



void FUNC_0(struct rds_ib_device *VAR_0, struct rds_info_rdma_connection *VAR_1)
{
 struct rds_ib_mr_pool *VAR_2 = VAR_0->mr_pool;

 VAR_1->rdma_mr_max = VAR_2->max_items;
 VAR_1->rdma_mr_size = VAR_2->fmr_attr.max_pages;
}
