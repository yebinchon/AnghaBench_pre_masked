
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prio_tc; } ;
struct mlx5e_priv {TYPE_1__ params_ethtool; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int VAR_2 ;
 int FUNC_3 (struct mlx5_core_dev*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct mlx5e_priv *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_3->mdev;
 int VAR_5 = 0;
 int VAR_6;

 FUNC_1(VAR_3);
 if (!FUNC_0(VAR_3->mdev, VAR_2)) {
  FUNC_2(VAR_3);
  return (VAR_0);
 }

 for (VAR_6 = 0; VAR_6 != VAR_1; VAR_6++) {
  VAR_5 = -FUNC_3(VAR_4, VAR_6, VAR_3->params_ethtool.prio_tc + VAR_6);
  if (VAR_5)
   break;
 }
 FUNC_2(VAR_3);
 return (VAR_5);
}
