
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_srq_table {int lock; int tree; } ;
struct mlx5_srq_attr {scalar_t__ type; } ;
struct TYPE_4__ {int res; } ;
struct mlx5_core_srq {int srqn; int free; int refcount; TYPE_2__ common; } ;
struct TYPE_3__ {struct mlx5_srq_table srq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_core_srq*,struct mlx5_srq_attr*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5_core_srq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,int,int ) ;
 int FUNC_5 (int *,int ,struct mlx5_core_srq*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mlx5_core_dev *VAR_3, struct mlx5_core_srq *VAR_4,
    struct mlx5_srq_attr *VAR_5)
{
 int VAR_6;
 struct mlx5_srq_table *VAR_7 = &VAR_3->priv.srq_table;

 if (VAR_5->type == VAR_0)
  VAR_4->common.res = VAR_2;
 else
  VAR_4->common.res = VAR_1;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0(&VAR_4->refcount, 1);
 FUNC_3(&VAR_4->free);

 FUNC_6(&VAR_7->lock);
 VAR_6 = FUNC_5(&VAR_7->tree, VAR_4->srqn, VAR_4);
 FUNC_7(&VAR_7->lock);
 if (VAR_6) {
  FUNC_4(VAR_3, "err %d, srqn 0x%x\n", VAR_6, VAR_4->srqn);
  goto err_destroy_srq_split;
 }

 return 0;

err_destroy_srq_split:
 FUNC_2(VAR_3, VAR_4);

 return VAR_6;
}
