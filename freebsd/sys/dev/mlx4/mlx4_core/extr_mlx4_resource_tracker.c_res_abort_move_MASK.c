
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct res_common {int owner; int from_state; int state; } ;
struct mlx4_resource_tracker {int * res_tree; } ;
struct TYPE_3__ {struct mlx4_resource_tracker res_tracker; } ;
struct TYPE_4__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*) ;
 struct res_common* FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mlx4_dev *VAR_0, int VAR_1,
      enum mlx4_resource VAR_2, int VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_0(VAR_0);
 struct mlx4_resource_tracker *VAR_5 = &VAR_4->mfunc.master.res_tracker;
 struct res_common *VAR_6;

 FUNC_3(FUNC_1(VAR_0));
 VAR_6 = FUNC_2(&VAR_5->res_tree[VAR_2], VAR_3);
 if (VAR_6 && (VAR_6->owner == VAR_1))
  VAR_6->state = VAR_6->from_state;
 FUNC_4(FUNC_1(VAR_0));
}
