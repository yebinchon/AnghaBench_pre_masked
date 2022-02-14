
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_types; scalar_t__ active; } ;
struct mlx5_flow_table {int id; int type; int vport; TYPE_1__ autogroup; int base; } ;
struct mlx5_flow_group {int id; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int) ;
 struct mlx5_core_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_flow_table*,struct mlx5_flow_group*) ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,int ,int ,int ,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static void FUNC_5(struct mlx5_flow_group *VAR_0)
{
 struct mlx5_flow_table *VAR_1;
 struct mlx5_core_dev *VAR_2;

 FUNC_2(VAR_1, VAR_0);
 VAR_2 = FUNC_1(&VAR_1->base);
 FUNC_0(!VAR_2);

 if (VAR_1->autogroup.active)
  VAR_1->autogroup.num_types--;

 if (FUNC_3(VAR_2, VAR_1->vport,
       VAR_1->type,
       VAR_1->id, VAR_0->id))
  FUNC_4(VAR_2, "flow steering can't destroy fg\n");
}
