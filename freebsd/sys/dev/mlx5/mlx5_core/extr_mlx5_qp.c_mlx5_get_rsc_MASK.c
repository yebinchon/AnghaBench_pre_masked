
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_qp_table {int lock; int tree; } ;
struct mlx5_core_rsc_common {int refcount; } ;
struct TYPE_2__ {struct mlx5_qp_table qp_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int ) ;
 struct mlx5_core_rsc_common* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct mlx5_core_rsc_common *FUNC_5(struct mlx5_core_dev *VAR_0,
       u32 VAR_1)
{
 struct mlx5_qp_table *VAR_2 = &VAR_0->priv.qp_table;
 struct mlx5_core_rsc_common *VAR_3;

 FUNC_3(&VAR_2->lock);

 VAR_3 = FUNC_2(&VAR_2->tree, VAR_1);
 if (VAR_3)
  FUNC_0(&VAR_3->refcount);

 FUNC_4(&VAR_2->lock);

 if (!VAR_3) {
  FUNC_1(VAR_0, "Async event for bogus resource 0x%x\n",
          VAR_1);
  return ((void*)0);
 }
 return VAR_3;
}
