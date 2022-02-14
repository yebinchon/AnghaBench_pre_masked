
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr_pool {int free_pinned; } ;
struct rds_ib_mr {unsigned int sg_len; struct rds_ib_device* device; } ;
struct rds_ib_device {struct rds_ib_mr_pool* mr_pool; } ;


 int FUNC_0 (struct rds_ib_mr*) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static void FUNC_2(struct rds_ib_mr *VAR_0)
{
 unsigned int VAR_1 = VAR_0->sg_len;

 FUNC_0(VAR_0);
 if (VAR_1) {
  struct rds_ib_device *VAR_2 = VAR_0->device;
  struct rds_ib_mr_pool *VAR_3 = VAR_2->mr_pool;

  FUNC_1(VAR_1, &VAR_3->free_pinned);
 }
}
