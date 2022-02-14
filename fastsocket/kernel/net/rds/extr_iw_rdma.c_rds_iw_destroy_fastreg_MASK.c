
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_mr_pool {int dummy; } ;
struct rds_iw_mr {scalar_t__ mr; scalar_t__ page_list; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rds_iw_mr_pool *VAR_0,
  struct rds_iw_mr *VAR_1)
{
 if (VAR_1->page_list)
  FUNC_1(VAR_1->page_list);
 if (VAR_1->mr)
  FUNC_0(VAR_1->mr);
}
