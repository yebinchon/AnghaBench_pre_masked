
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int num_cqs; } ;
struct mlx4_dev {TYPE_2__ caps; } ;
struct mlx4_cq {int (* comp ) (struct mlx4_cq*) ;int arm_sn; } ;
struct TYPE_4__ {int tree; } ;
struct TYPE_6__ {TYPE_1__ cq_table; } ;


 int FUNC_0 (struct mlx4_dev*,char*,int) ;
 TYPE_3__* FUNC_1 (struct mlx4_dev*) ;
 struct mlx4_cq* FUNC_2 (int *,int) ;
 int FUNC_3 (struct mlx4_cq*) ;

void FUNC_4(struct mlx4_dev *VAR_0, u32 VAR_1)
{
 struct mlx4_cq *VAR_2;

 VAR_2 = FUNC_2(&FUNC_1(VAR_0)->cq_table.tree,
          VAR_1 & (VAR_0->caps.num_cqs - 1));
 if (!VAR_2) {
  FUNC_0(VAR_0, "Completion event for bogus CQ %08x\n", VAR_1);
  return;
 }

 ++VAR_2->arm_sn;

 VAR_2->comp(VAR_2);
}
