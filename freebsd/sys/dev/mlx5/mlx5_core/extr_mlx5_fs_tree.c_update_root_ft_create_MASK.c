
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_table {int level; int id; int type; } ;
struct mlx5_flow_root_namespace {struct mlx5_flow_table* root_ft; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5_flow_root_namespace *VAR_1,
        struct mlx5_flow_table *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_0;

 if (VAR_1->root_ft)
  VAR_4 = VAR_1->root_ft->level;

 if (VAR_2->level < VAR_4)
  VAR_3 = FUNC_0(VAR_1->dev, VAR_2->type,
           VAR_2->id);
 else
  return VAR_3;

 if (VAR_3)
  FUNC_1(VAR_1->dev, "Update root flow table of id=%u failed\n",
          VAR_2->id);
 else
  VAR_1->root_ft = VAR_2;

 return VAR_3;
}
