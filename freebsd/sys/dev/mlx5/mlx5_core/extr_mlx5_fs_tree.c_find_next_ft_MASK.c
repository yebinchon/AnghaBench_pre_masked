
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table {int dummy; } ;
struct fs_base {int list; } ;
struct mlx5_flow_namespace {struct fs_base base; } ;
struct fs_prio {struct fs_base base; } ;


 struct mlx5_flow_table* FUNC_0 (struct mlx5_flow_namespace*,int *) ;
 struct mlx5_flow_table* FUNC_1 (struct mlx5_flow_namespace*,int *) ;
 int FUNC_2 (struct mlx5_flow_namespace*,struct mlx5_flow_namespace*) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_3(struct fs_prio *VAR_0)
{
 struct mlx5_flow_table *VAR_1 = ((void*)0);
 struct fs_base *VAR_2;

 while (!VAR_1 && VAR_0) {
  struct mlx5_flow_namespace *VAR_3;

  FUNC_2(VAR_3, VAR_0);
  VAR_1 = FUNC_1(VAR_3, &VAR_0->base.list);
  VAR_2 = &VAR_3->base;
  FUNC_2(VAR_0, VAR_3);

  if (!VAR_1 && VAR_0)
   VAR_1 = FUNC_0(VAR_0, &VAR_2->list);
 }
 return VAR_1;
}
