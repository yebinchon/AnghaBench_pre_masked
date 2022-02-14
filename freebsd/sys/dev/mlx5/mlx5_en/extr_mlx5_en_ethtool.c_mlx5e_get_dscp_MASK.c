
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trust_state; int dscp2prio; } ;
struct mlx5e_priv {TYPE_1__ params_ethtool; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct mlx5e_priv *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 int VAR_6;

 if (FUNC_0(VAR_5, VAR_1) == 0 ||
     FUNC_1(VAR_5, VAR_3) == 0 ||
     FUNC_1(VAR_5, VAR_2) == 0)
  return (VAR_0);

 FUNC_2(VAR_4);
 VAR_6 = -FUNC_4(VAR_5, VAR_4->params_ethtool.dscp2prio);
 if (VAR_6)
  goto done;

 VAR_6 = -FUNC_5(VAR_5, &VAR_4->params_ethtool.trust_state);
 if (VAR_6)
  goto done;
done:
 FUNC_3(VAR_4);
 return (VAR_6);
}
