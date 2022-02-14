
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_incoming {scalar_t__ i_rdma_cookie; int i_saddr; struct rds_connection* i_conn; int i_item; int i_refcount; } ;
struct rds_connection {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct rds_incoming *VAR_0, struct rds_connection *VAR_1,
    __be32 VAR_2)
{
 FUNC_1(&VAR_0->i_refcount, 1);
 FUNC_0(&VAR_0->i_item);
 VAR_0->i_conn = VAR_1;
 VAR_0->i_saddr = VAR_2;
 VAR_0->i_rdma_cookie = 0;
}
