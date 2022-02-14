
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_flow_table {int base; } ;
struct mlx5_flow_rule {int dummy; } ;
struct mlx5_flow_namespace {int dests_rw_sem; } ;
struct mlx5_flow_destination {int dummy; } ;


 int FUNC_0 (int *) ;
 struct mlx5_flow_rule* FUNC_1 (struct mlx5_flow_table*,int ,int *,int *,int ,int ,struct mlx5_flow_destination*) ;
 struct mlx5_flow_namespace* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mlx5_flow_rule *
FUNC_4(struct mlx5_flow_table *VAR_0,
     u8 VAR_1,
     u32 *VAR_2,
     u32 *VAR_3,
     u32 VAR_4,
     u32 VAR_5,
     struct mlx5_flow_destination *VAR_6)
{
 struct mlx5_flow_rule *VAR_7;
 struct mlx5_flow_namespace *VAR_8;

 VAR_8 = FUNC_2(&VAR_0->base);
 if (VAR_8)
  FUNC_0(&VAR_8->dests_rw_sem);
 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  FUNC_3(&VAR_8->dests_rw_sem);

 return VAR_7;


}
