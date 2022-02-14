
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list; } ;
struct mlx5_flow_table {TYPE_1__ base; int id; int type; } ;
struct mlx5_flow_root_namespace {struct mlx5_flow_table* root_ft; int dev; } ;
struct fs_prio {int objs; } ;
struct TYPE_4__ {int list; } ;


 TYPE_2__ VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (struct fs_prio*) ;
 int FUNC_1 (struct fs_prio*,struct mlx5_flow_table*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 struct mlx5_flow_table* FUNC_4 (struct mlx5_flow_table*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct mlx5_flow_root_namespace *VAR_1,
        struct mlx5_flow_table *VAR_2)
{
 int VAR_3 = 0;
 struct fs_prio *VAR_4;
 struct mlx5_flow_table *VAR_5 = ((void*)0);
 struct mlx5_flow_table *VAR_6 = ((void*)0);

 if (VAR_1->root_ft != VAR_2)
  return 0;

 FUNC_1(VAR_4, VAR_2);



 if (!FUNC_3(&VAR_2->base.list, &VAR_4->objs)) {
  VAR_5 = FUNC_4(VAR_2, VAR_0.list);
 } else {
  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = VAR_5;
 }

 if (VAR_5) {
  VAR_3 = FUNC_5(VAR_1->dev, VAR_5->type,
           VAR_5->id);
  if (VAR_3)
   FUNC_6(VAR_1->dev, "Update root flow table of id=%u failed\n",
           VAR_2->id);
 }
 if (!VAR_3)
  VAR_1->root_ft = VAR_5;

 if (VAR_6)
  FUNC_2(&VAR_6->base);

 return VAR_3;
}
