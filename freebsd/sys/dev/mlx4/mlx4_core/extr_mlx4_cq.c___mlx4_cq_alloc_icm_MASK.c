
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cq_table {int bitmap; int table; int cmpt_table; } ;
struct mlx4_priv {struct mlx4_cq_table cq_table; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int *,int,int ) ;
 int FUNC_4 (struct mlx4_dev*,int *,int) ;

int FUNC_5(struct mlx4_dev *VAR_3, int *VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_2(VAR_3);
 struct mlx4_cq_table *VAR_6 = &VAR_5->cq_table;
 int VAR_7;

 *VAR_4 = FUNC_0(&VAR_6->bitmap);
 if (*VAR_4 == -1)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, &VAR_6->table, *VAR_4, VAR_1);
 if (VAR_7)
  goto err_out;

 VAR_7 = FUNC_3(VAR_3, &VAR_6->cmpt_table, *VAR_4, VAR_1);
 if (VAR_7)
  goto err_put;
 return 0;

err_put:
 FUNC_4(VAR_3, &VAR_6->table, *VAR_4);

err_out:
 FUNC_1(&VAR_6->bitmap, *VAR_4, VAR_2);
 return VAR_7;
}
