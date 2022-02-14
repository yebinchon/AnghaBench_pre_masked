
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_qp {int qpn; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_core_qp*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int *,int,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;

int FUNC_3(struct mlx5_core_dev *VAR_1, u32 *VAR_2, int VAR_3,
    struct mlx5_core_qp *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4->qpn);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_0);
 if (VAR_5)
  FUNC_2(VAR_1, VAR_4->qpn);

 return VAR_5;
}
