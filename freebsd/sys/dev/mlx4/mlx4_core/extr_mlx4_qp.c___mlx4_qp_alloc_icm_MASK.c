
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_table {int qp_table; int auxc_table; int altc_table; int rdmarc_table; int cmpt_table; } ;
struct mlx4_priv {struct mlx4_qp_table qp_table; } ;
struct mlx4_dev {int dummy; } ;
typedef int gfp_t ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int *,int,int ) ;
 int FUNC_2 (struct mlx4_dev*,int *,int) ;

int FUNC_3(struct mlx4_dev *VAR_0, int VAR_1, gfp_t VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_0(VAR_0);
 struct mlx4_qp_table *VAR_4 = &VAR_3->qp_table;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_4->qp_table, VAR_1, VAR_2);
 if (VAR_5)
  goto err_out;

 VAR_5 = FUNC_1(VAR_0, &VAR_4->auxc_table, VAR_1, VAR_2);
 if (VAR_5)
  goto err_put_qp;

 VAR_5 = FUNC_1(VAR_0, &VAR_4->altc_table, VAR_1, VAR_2);
 if (VAR_5)
  goto err_put_auxc;

 VAR_5 = FUNC_1(VAR_0, &VAR_4->rdmarc_table, VAR_1, VAR_2);
 if (VAR_5)
  goto err_put_altc;

 VAR_5 = FUNC_1(VAR_0, &VAR_4->cmpt_table, VAR_1, VAR_2);
 if (VAR_5)
  goto err_put_rdmarc;

 return 0;

err_put_rdmarc:
 FUNC_2(VAR_0, &VAR_4->rdmarc_table, VAR_1);

err_put_altc:
 FUNC_2(VAR_0, &VAR_4->altc_table, VAR_1);

err_put_auxc:
 FUNC_2(VAR_0, &VAR_4->auxc_table, VAR_1);

err_put_qp:
 FUNC_2(VAR_0, &VAR_4->qp_table, VAR_1);

err_out:
 return VAR_5;
}
