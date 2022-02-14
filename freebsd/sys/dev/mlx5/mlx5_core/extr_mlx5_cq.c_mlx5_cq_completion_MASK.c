
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mlx5_cq_table {int lock; int tree; struct mlx5_cq_linear_array_entry* linear_array; } ;
struct mlx5_cq_linear_array_entry {int lock; struct mlx5_core_cq* cq; } ;
struct TYPE_2__ {struct mlx5_cq_table cq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct mlx5_core_cq {int free; int refcount; int (* comp ) (struct mlx5_core_cq*) ;int arm_sn; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct mlx5_core_cq*) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,size_t) ;
 struct mlx5_core_cq* FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlx5_core_cq*) ;
 int FUNC_9 (struct mlx5_core_cq*) ;

void FUNC_10(struct mlx5_core_dev *VAR_1, u32 VAR_2)
{
 struct mlx5_core_cq *VAR_3;
 struct mlx5_cq_table *VAR_4 = &VAR_1->priv.cq_table;

 if (VAR_2 < VAR_0) {
  struct mlx5_cq_linear_array_entry *VAR_5;

  VAR_5 = &VAR_4->linear_array[VAR_2];
  FUNC_6(&VAR_5->lock);
  VAR_3 = VAR_5->cq;
  if (VAR_3 == ((void*)0)) {
   FUNC_4(VAR_1,
       "Completion event for bogus CQ 0x%x\n", VAR_2);
  } else {
   ++VAR_3->arm_sn;
   VAR_3->comp(VAR_3);
  }
  FUNC_7(&VAR_5->lock);
  return;
 }

 FUNC_6(&VAR_4->lock);
 VAR_3 = FUNC_5(&VAR_4->tree, VAR_2);
 if (FUNC_3(VAR_3))
  FUNC_1(&VAR_3->refcount);
 FUNC_7(&VAR_4->lock);

 if (!VAR_3) {
  FUNC_4(VAR_1, "Completion event for bogus CQ 0x%x\n", VAR_2);
  return;
 }

 ++VAR_3->arm_sn;

 VAR_3->comp(VAR_3);

 if (FUNC_0(&VAR_3->refcount))
  FUNC_2(&VAR_3->free);
}
