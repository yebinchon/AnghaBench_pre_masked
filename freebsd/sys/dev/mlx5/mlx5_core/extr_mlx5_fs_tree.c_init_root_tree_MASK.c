
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_namespace {int base; } ;
struct mlx5_core_dev {int dummy; } ;
struct init_tree_node {int ar_size; int * children; } ;
struct fs_base {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int,int *,int *,struct init_tree_node*) ;
 int FUNC_1 (struct mlx5_flow_namespace*,struct fs_base*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_core_dev *VAR_0, int VAR_1,
     struct init_tree_node *VAR_2, struct fs_base *VAR_3)
{
 int VAR_4;
 struct mlx5_flow_namespace *VAR_5;
 int VAR_6 = 0;

 FUNC_1(VAR_5, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2->ar_size; VAR_4++) {
  VAR_6 = FUNC_0(VAR_0, VAR_1,
          &VAR_2->children[VAR_4], &VAR_5->base, VAR_2);
  if (VAR_6)
   break;
 }
 return VAR_6;
}
