
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_srq_table {int lock; int tree; } ;
struct mlx5_core_srq {int free; int refcount; int (* event ) (struct mlx5_core_srq*,int) ;} ;
struct TYPE_2__ {struct mlx5_srq_table srq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ) ;
 struct mlx5_core_srq* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mlx5_core_srq*,int) ;

void FUNC_8(struct mlx5_core_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct mlx5_srq_table *VAR_3 = &VAR_0->priv.srq_table;
 struct mlx5_core_srq *VAR_4;

 FUNC_5(&VAR_3->lock);

 VAR_4 = FUNC_4(&VAR_3->tree, VAR_1);
 if (VAR_4)
  FUNC_1(&VAR_4->refcount);

 FUNC_6(&VAR_3->lock);

 if (!VAR_4) {
  FUNC_3(VAR_0, "Async event for bogus SRQ 0x%08x\n", VAR_1);
  return;
 }

 VAR_4->event(VAR_4, VAR_2);

 if (FUNC_0(&VAR_4->refcount))
  FUNC_2(&VAR_4->free);
}
