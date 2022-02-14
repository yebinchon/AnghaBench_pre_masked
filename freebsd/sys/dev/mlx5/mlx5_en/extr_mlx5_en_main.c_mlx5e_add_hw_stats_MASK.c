
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {TYPE_1__* mdev; int sysctl_hw; int sysctl_ctx; } ;
struct TYPE_2__ {int board_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char*,int,struct mlx5e_priv*,int ,int ,char*,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct mlx5e_priv *VAR_4)
{
 FUNC_0(&VAR_4->sysctl_ctx, FUNC_2(VAR_4->sysctl_hw),
     VAR_2, "fw_version", VAR_1 | VAR_0, VAR_4, 0,
     VAR_3, "A", "HCA firmware version");

 FUNC_1(&VAR_4->sysctl_ctx, FUNC_2(VAR_4->sysctl_hw),
     VAR_2, "board_id", VAR_0, VAR_4->mdev->board_id, 0,
     "Board ID");
}
