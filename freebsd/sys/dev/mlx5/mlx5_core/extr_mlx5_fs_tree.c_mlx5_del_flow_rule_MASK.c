
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_rule {int base; } ;
struct mlx5_flow_namespace {int dests_rw_sem; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mlx5_flow_namespace* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx5_flow_rule *VAR_0)
{
 struct mlx5_flow_namespace *VAR_1;

 VAR_1 = FUNC_2(&VAR_0->base);
 if (VAR_1)
  FUNC_0(&VAR_1->dests_rw_sem);
 FUNC_1(&VAR_0->base);
 if (VAR_1)
  FUNC_3(&VAR_1->dests_rw_sem);
}
