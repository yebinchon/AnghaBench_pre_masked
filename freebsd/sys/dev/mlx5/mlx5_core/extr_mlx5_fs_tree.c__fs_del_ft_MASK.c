
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct mlx5_flow_table {TYPE_1__ base; int id; int type; int vport; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_prio {int num_ft; } ;


 struct mlx5_core_dev* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct fs_prio*,struct mlx5_flow_table*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int ,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5_flow_table *VAR_0)
{
 int VAR_1;
 struct mlx5_core_dev *VAR_2 = FUNC_0(&VAR_0->base);
 struct fs_prio *VAR_3;

 VAR_1 = FUNC_2(VAR_2, VAR_0->vport, VAR_0->type, VAR_0->id);
 if (VAR_1)
  FUNC_3(VAR_2, "flow steering can't destroy ft %s\n",
          VAR_0->base.name);

 FUNC_1(VAR_3, VAR_0);
 VAR_3->num_ft--;
}
