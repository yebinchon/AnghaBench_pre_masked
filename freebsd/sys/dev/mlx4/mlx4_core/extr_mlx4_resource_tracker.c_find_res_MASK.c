
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int * res_tree; } ;
struct TYPE_5__ {TYPE_1__ res_tracker; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 void* FUNC_1 (int *,int ) ;

__attribute__((used)) static void *FUNC_2(struct mlx4_dev *VAR_0, u64 VAR_1,
        enum mlx4_resource VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_3->mfunc.master.res_tracker.res_tree[VAR_2],
      VAR_1);
}
