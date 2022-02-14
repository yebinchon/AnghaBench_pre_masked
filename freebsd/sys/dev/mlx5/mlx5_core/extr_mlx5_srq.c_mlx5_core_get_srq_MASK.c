
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_srq_table {int lock; int tree; } ;
struct mlx5_core_srq {int refcount; } ;
struct TYPE_2__ {struct mlx5_srq_table srq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int *) ;
 struct mlx5_core_srq* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mlx5_core_srq *FUNC_4(struct mlx5_core_dev *VAR_0, u32 VAR_1)
{
 struct mlx5_srq_table *VAR_2 = &VAR_0->priv.srq_table;
 struct mlx5_core_srq *VAR_3;

 FUNC_2(&VAR_2->lock);

 VAR_3 = FUNC_1(&VAR_2->tree, VAR_1);
 if (VAR_3)
  FUNC_0(&VAR_3->refcount);

 FUNC_3(&VAR_2->lock);

 return VAR_3;
}
