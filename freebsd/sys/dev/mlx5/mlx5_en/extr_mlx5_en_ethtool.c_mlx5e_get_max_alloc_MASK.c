
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* max_bw_share; } ;
struct mlx5e_priv {TYPE_1__ params_ethtool; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5_core_dev*,int*) ;
 int FUNC_3 (struct mlx5_core_dev*,int*) ;

__attribute__((used)) static int
FUNC_4(struct mlx5e_priv *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->mdev;
 int VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);
 VAR_3 = -FUNC_2(VAR_2, VAR_1->params_ethtool.max_bw_share);
 if (VAR_3 == 0) {

  for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++) {
   VAR_1->params_ethtool.max_bw_share[VAR_4] =
       100 / VAR_0;
  }
  VAR_3 = -FUNC_3(VAR_2,
      VAR_1->params_ethtool.max_bw_share);
 }
 FUNC_1(VAR_1);

 return (VAR_3);
}
