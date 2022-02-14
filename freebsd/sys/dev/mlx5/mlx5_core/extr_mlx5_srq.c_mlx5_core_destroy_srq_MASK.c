
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_srq_table {int lock; int tree; } ;
struct mlx5_core_srq {int free; int refcount; int srqn; } ;
struct TYPE_2__ {struct mlx5_srq_table srq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5_core_srq*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ) ;
 struct mlx5_core_srq* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mlx5_core_dev *VAR_1, struct mlx5_core_srq *VAR_2)
{
 struct mlx5_srq_table *VAR_3 = &VAR_1->priv.srq_table;
 struct mlx5_core_srq *VAR_4;
 int VAR_5;

 FUNC_5(&VAR_3->lock);
 VAR_4 = FUNC_4(&VAR_3->tree, VAR_2->srqn);
 FUNC_6(&VAR_3->lock);
 if (!VAR_4) {
  FUNC_3(VAR_1, "srq 0x%x not found in tree\n", VAR_2->srqn);
  return -VAR_0;
 }
 if (VAR_4 != VAR_2) {
  FUNC_3(VAR_1, "corruption on srqn 0x%x\n", VAR_2->srqn);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 if (FUNC_0(&VAR_2->refcount))
  FUNC_1(&VAR_2->free);
 FUNC_7(&VAR_2->free);

 return 0;
}
