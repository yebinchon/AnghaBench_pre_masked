
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* max_bw_value; } ;
struct mlx5e_priv {TYPE_1__ params_ethtool; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*,int*,int*) ;

__attribute__((used)) static int
FUNC_5(struct mlx5e_priv *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_3->mdev;
 u8 VAR_5[VAR_0];
 u8 VAR_6[VAR_0];
 int VAR_7;
 int VAR_8;

 FUNC_0(VAR_3);
 VAR_7 = -FUNC_4(VAR_4, VAR_6, VAR_5);
 if (VAR_7)
  goto done;

 for (VAR_8 = 0; VAR_8 <= FUNC_3(VAR_4); VAR_8++) {
  switch (VAR_5[VAR_8]) {
  case 130:
   VAR_3->params_ethtool.max_bw_value[VAR_8] = VAR_6[VAR_8] * VAR_1;
   break;
  case 128:
   VAR_3->params_ethtool.max_bw_value[VAR_8] = VAR_6[VAR_8] * VAR_2;
   break;
  case 129:
   VAR_3->params_ethtool.max_bw_value[VAR_8] = 0;
   break;
  default:
   VAR_3->params_ethtool.max_bw_value[VAR_8] = -1;
   FUNC_2(1, "non-supported BW unit");
   break;
  }
 }
done:
 FUNC_1(VAR_3);
 return (VAR_7);
}
