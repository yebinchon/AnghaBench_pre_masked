
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct fs_base* parent; } ;
struct mlx5_flow_rule {TYPE_1__ base; } ;
struct TYPE_4__ {int match_criteria_enable; } ;
struct mlx5_flow_group {TYPE_2__ mask; } ;
struct fs_base {struct fs_base* parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_flow_group*,struct fs_base*) ;

u8 FUNC_2(struct mlx5_flow_rule *VAR_0)
{
 struct fs_base *VAR_1;
 struct mlx5_flow_group *VAR_2;

 VAR_1 = VAR_0->base.parent;
 FUNC_0(!VAR_1);
 VAR_1 = VAR_1->parent;
 FUNC_0(!VAR_1);

 FUNC_1(VAR_2, VAR_1);
 return VAR_2->mask.match_criteria_enable;
}
