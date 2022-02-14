
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5e_priv {int cq_uar; struct mlx5_core_dev* mdev; } ;
struct TYPE_5__ {scalar_t__ db_numa_node; scalar_t__ buf_numa_node; } ;
struct mlx5e_cq_param {int cqc; TYPE_2__ wq; } ;
struct TYPE_4__ {scalar_t__* db; } ;
struct TYPE_6__ {TYPE_1__ db; } ;
struct mlx5_core_cq {int cqe_sz; int vector; int irqn; int * uar; int event; int * comp; scalar_t__* arm_db; scalar_t__* set_ci_db; } ;
struct mlx5e_cq {struct mlx5e_priv* priv; int wq; TYPE_3__ wq_ctrl; struct mlx5_core_cq mcq; } ;
struct mlx5_cqe64 {int op_own; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int mlx5e_cq_comp_t ;


 int FUNC_0 (struct mlx5_core_dev*,TYPE_2__*,int ,int *,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct mlx5_cqe64* FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct mlx5_core_dev*,int,int*,int*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct mlx5e_priv *VAR_1,
    struct mlx5e_cq_param *VAR_2,
    struct mlx5e_cq *VAR_3,
    mlx5e_cq_comp_t *VAR_4,
    int VAR_5)
{
 struct mlx5_core_dev *VAR_6 = VAR_1->mdev;
 struct mlx5_core_cq *VAR_7 = &VAR_3->mcq;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 u32 VAR_11;

 VAR_2->wq.buf_numa_node = 0;
 VAR_2->wq.db_numa_node = 0;

 VAR_10 = FUNC_3(VAR_6, VAR_5, &VAR_8, &VAR_9);
 if (VAR_10)
  return (VAR_10);

 VAR_10 = FUNC_0(VAR_6, &VAR_2->wq, VAR_2->cqc, &VAR_3->wq,
     &VAR_3->wq_ctrl);
 if (VAR_10)
  return (VAR_10);

 VAR_7->cqe_sz = 64;
 VAR_7->set_ci_db = VAR_3->wq_ctrl.db.db;
 VAR_7->arm_db = VAR_3->wq_ctrl.db.db + 1;
 *VAR_7->set_ci_db = 0;
 *VAR_7->arm_db = 0;
 VAR_7->vector = VAR_5;
 VAR_7->comp = VAR_4;
 VAR_7->event = VAR_0;
 VAR_7->irqn = VAR_9;
 VAR_7->uar = &VAR_1->cq_uar;

 for (VAR_11 = 0; VAR_11 < FUNC_1(&VAR_3->wq); VAR_11++) {
  struct mlx5_cqe64 *VAR_12 = FUNC_2(&VAR_3->wq, VAR_11);

  VAR_12->op_own = 0xf1;
 }

 VAR_3->priv = VAR_1;

 return (0);
}
