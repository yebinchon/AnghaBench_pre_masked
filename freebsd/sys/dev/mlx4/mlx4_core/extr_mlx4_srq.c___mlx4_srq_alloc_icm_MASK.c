
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_srq_table {int bitmap; int table; int cmpt_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_srq_table srq_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 TYPE_1__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int *,int,int ) ;
 int FUNC_4 (struct mlx4_dev*,int *,int) ;

int FUNC_5(struct mlx4_dev *VAR_3, int *VAR_4)
{
 struct mlx4_srq_table *VAR_5 = &FUNC_2(VAR_3)->srq_table;
 int VAR_6;


 *VAR_4 = FUNC_0(&VAR_5->bitmap);
 if (*VAR_4 == -1)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3, &VAR_5->table, *VAR_4, VAR_1);
 if (VAR_6)
  goto err_out;

 VAR_6 = FUNC_3(VAR_3, &VAR_5->cmpt_table, *VAR_4, VAR_1);
 if (VAR_6)
  goto err_put;
 return 0;

err_put:
 FUNC_4(VAR_3, &VAR_5->table, *VAR_4);

err_out:
 FUNC_1(&VAR_5->bitmap, *VAR_4, VAR_2);
 return VAR_6;
}
