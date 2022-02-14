
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int lock; } ;
struct TYPE_4__ {int num_types; scalar_t__ active; } ;
struct mlx5_flow_table {TYPE_3__ base; TYPE_1__ autogroup; int id; int type; int vport; } ;
struct TYPE_5__ {int list; } ;
struct mlx5_flow_group {int start_index; int max_ftes; int id; TYPE_2__ base; } ;
struct mlx5_core_dev {int dummy; } ;
struct list_head {int dummy; } ;
typedef int name ;


 struct mlx5_flow_group* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_group*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,char*,int) ;
 struct mlx5_flow_group* FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_flow_group*) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (struct mlx5_core_dev*,int *,int ,int ,int ,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static struct mlx5_flow_group *FUNC_10(struct mlx5_core_dev *VAR_0,
         struct mlx5_flow_table *VAR_1,
         struct list_head *VAR_2,
         u32 *VAR_3,
         int VAR_4)
{
 struct mlx5_flow_group *VAR_5;
 int VAR_6;
 unsigned int VAR_7;
 char VAR_8[20];

 VAR_5 = FUNC_3(VAR_3);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_7 = VAR_5->start_index + VAR_5->max_ftes - 1;
 VAR_6 = FUNC_6(VAR_0, VAR_3,
         VAR_1->vport, VAR_1->type, VAR_1->id,
         &VAR_5->id);
 if (VAR_6)
  goto free_fg;

 FUNC_7(&VAR_1->base.lock);
 if (VAR_1->autogroup.active)
  VAR_1->autogroup.num_types++;

 FUNC_9(VAR_8, sizeof(VAR_8), "group_%u", VAR_5->id);

 FUNC_2(&VAR_5->base, &VAR_1->base, VAR_8, VAR_4);

 FUNC_5(&VAR_5->base.list, VAR_2);
 FUNC_8(&VAR_1->base.lock);

 return VAR_5;

free_fg:
 FUNC_4(VAR_5);
 return FUNC_0(VAR_6);
}
