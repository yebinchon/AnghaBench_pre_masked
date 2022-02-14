
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_namespace {int base; } ;
struct mlx5_flow_root_namespace {int table_type; struct mlx5_flow_namespace ns; int fs_chain_lock; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum fs_ft_type { ____Placeholder_fs_ft_type } fs_ft_type ;


 int FUNC_0 (int *,int *,char*,int) ;
 int FUNC_1 (struct mlx5_flow_namespace*) ;
 struct mlx5_flow_root_namespace* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mlx5_flow_root_namespace *FUNC_4(struct mlx5_core_dev *VAR_0,
         enum fs_ft_type
         VAR_1,
         char *VAR_2)
{
 struct mlx5_flow_root_namespace *VAR_3;
 struct mlx5_flow_namespace *VAR_4;


 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (!VAR_3)
  goto err;

 VAR_3->dev = VAR_0;
 VAR_3->table_type = VAR_1;
 FUNC_3(&VAR_3->fs_chain_lock);

 VAR_4 = &VAR_3->ns;
 FUNC_1(VAR_4);
 FUNC_0(&VAR_4->base, ((void*)0), VAR_2, 1);

 return VAR_3;
err:
 return ((void*)0);
}
