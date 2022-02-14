
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_qp_table {int lock; int tree; } ;
struct TYPE_5__ {int res; int free; int refcount; } ;
struct mlx5_core_qp {int qpn; int pid; TYPE_1__ common; } ;
struct TYPE_7__ {struct mlx5_qp_table qp_table; } ;
struct mlx5_core_dev {TYPE_3__ priv; } ;
struct TYPE_8__ {TYPE_2__* td_proc; } ;
struct TYPE_6__ {int p_pid; } ;


 int FUNC_0 (int *,int) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,struct mlx5_core_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_1,
    struct mlx5_core_qp *VAR_2, int VAR_3)
{
 struct mlx5_qp_table *VAR_4 = &VAR_1->priv.qp_table;
 int VAR_5;

 VAR_2->common.res = VAR_3;

 FUNC_3(&VAR_4->lock);
 VAR_5 = FUNC_2(&VAR_4->tree, VAR_2->qpn | (VAR_3 << 24), VAR_2);
 FUNC_4(&VAR_4->lock);
 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_2->common.refcount, 1);
 FUNC_1(&VAR_2->common.free);
 VAR_2->pid = VAR_0->td_proc->p_pid;

 return 0;
}
