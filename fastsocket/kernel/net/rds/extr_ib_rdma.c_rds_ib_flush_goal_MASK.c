
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_mr_pool {int item_count; } ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct rds_ib_mr_pool *VAR_0, int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->item_count);
 if (VAR_1)
  return VAR_2;

 return 0;
}
