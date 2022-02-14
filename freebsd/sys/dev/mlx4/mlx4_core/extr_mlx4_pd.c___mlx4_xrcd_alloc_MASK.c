
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_priv {int xrcd_bitmap; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_1, u32 *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_1);

 *VAR_2 = FUNC_0(&VAR_3->xrcd_bitmap);
 if (*VAR_2 == -1)
  return -VAR_0;

 return 0;
}
