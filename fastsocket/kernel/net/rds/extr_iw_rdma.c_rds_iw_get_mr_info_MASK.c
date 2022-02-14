
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_mr_pool {int max_pages; int max_items; } ;
struct rds_iw_device {struct rds_iw_mr_pool* mr_pool; } ;
struct rds_info_rdma_connection {int rdma_mr_size; int rdma_mr_max; } ;



void FUNC_0(struct rds_iw_device *VAR_0, struct rds_info_rdma_connection *VAR_1)
{
 struct rds_iw_mr_pool *VAR_2 = VAR_0->mr_pool;

 VAR_1->rdma_mr_max = VAR_2->max_items;
 VAR_1->rdma_mr_size = VAR_2->max_pages;
}
