
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int num_tc; } ;


 int FUNC_0 (struct mlx5e_priv*,int) ;
 int FUNC_1 (struct mlx5e_priv*,int) ;

__attribute__((used)) static int
FUNC_2(struct mlx5e_priv *VAR_0)
{
 int VAR_1 = VAR_0->num_tc;
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, VAR_3);
  if (VAR_2)
   goto err_close_tises;
 }

 return (0);

err_close_tises:
 for (VAR_3--; VAR_3 >= 0; VAR_3--)
  FUNC_0(VAR_0, VAR_3);

 return (VAR_2);
}
