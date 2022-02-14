
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_base {int dummy; } ;
struct mlx5_flow_namespace {struct fs_base base; } ;
struct mlx5_core_dev {int dummy; } ;
struct init_tree_node {scalar_t__ type; int min_ft_level; int ar_size; struct init_tree_node* children; int name; int flags; int max_ft; int caps; } ;
struct fs_prio {struct fs_base base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_namespace*) ;
 int FUNC_1 (struct mlx5_flow_namespace*) ;
 struct mlx5_flow_namespace* FUNC_2 (struct mlx5_flow_namespace*,int ) ;
 struct mlx5_flow_namespace* FUNC_3 (struct mlx5_flow_namespace*,int,int ,int ,int ) ;
 int FUNC_4 (struct mlx5_flow_namespace*,struct fs_base*) ;
 int FUNC_5 (struct mlx5_core_dev*,int *) ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_3, int VAR_4,
      struct init_tree_node *VAR_5, struct fs_base *VAR_6,
      struct init_tree_node *VAR_7)
{
 struct mlx5_flow_namespace *VAR_8;
 struct fs_prio *VAR_9;
 int VAR_10;
 struct fs_base *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 if (VAR_5->type == VAR_2) {
  if ((VAR_5->min_ft_level > VAR_4) ||
      !FUNC_5(VAR_3, &VAR_5->caps))
   goto out;

  FUNC_4(VAR_8, VAR_6);
  VAR_10 = VAR_5 - VAR_7->children;
  VAR_9 = FUNC_3(VAR_8, VAR_10,
      VAR_5->max_ft,
      VAR_5->name, VAR_5->flags);
  if (FUNC_0(VAR_9)) {
   VAR_13 = FUNC_1(VAR_9);
   goto out;
  }
  VAR_11 = &VAR_9->base;
 } else if (VAR_5->type == VAR_1) {
  FUNC_4(VAR_9, VAR_6);
  VAR_8 = FUNC_2(VAR_9, VAR_5->name);
  if (FUNC_0(VAR_8)) {
   VAR_13 = FUNC_1(VAR_8);
   goto out;
  }
  VAR_11 = &VAR_8->base;
 } else {
  return -VAR_0;
 }
 for (VAR_12 = 0; VAR_12 < VAR_5->ar_size; VAR_12++) {
  VAR_13 = FUNC_6(VAR_3, VAR_4, &VAR_5->children[VAR_12], VAR_11,
          VAR_5);
  if (VAR_13)
   break;
 }
out:
 return VAR_13;
}
