
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct mlx5_flow_table {int num_ftes; TYPE_1__ base; int index; int id; int type; int status; int vport; } ;
struct mlx5_flow_group {int num_ftes; TYPE_1__ base; int index; int id; int type; int status; int vport; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_fte {int num_ftes; TYPE_1__ base; int index; int id; int type; int status; int vport; } ;


 int FUNC_0 (int) ;
 struct mlx5_core_dev* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mlx5_flow_table*,struct mlx5_flow_table*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,int *,int ,int ,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct fs_fte *VAR_0)
{
 struct mlx5_flow_table *VAR_1;
 struct mlx5_flow_group *VAR_2;
 int VAR_3;
 struct mlx5_core_dev *VAR_4;

 FUNC_2(VAR_2, VAR_0);
 FUNC_2(VAR_1, VAR_2);

 VAR_4 = FUNC_1(&VAR_1->base);
 FUNC_0(!VAR_4);

 VAR_3 = FUNC_3(VAR_4, VAR_1->vport, &VAR_0->status,
         VAR_1->type, VAR_1->id, VAR_0->index);
 if (VAR_3)
  FUNC_4(VAR_4, "flow steering can't delete fte %s\n",
          VAR_0->base.name);

 VAR_2->num_ftes--;
}
