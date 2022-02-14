
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_qp {int dummy; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_qp {scalar_t__ qp_type; int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_qp*) ;
 int FUNC_1 (struct mlx5_ib_qp*) ;
 int FUNC_2 (struct ib_qp*) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 struct mlx5_ib_qp* FUNC_4 (struct ib_qp*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ib_qp *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_3(VAR_1->device);
 struct mlx5_ib_qp *VAR_3 = FUNC_4(VAR_1);

 if (FUNC_5(VAR_1->qp_type == VAR_0))
  return FUNC_2(VAR_1);

 FUNC_0(VAR_2, VAR_3);

 FUNC_1(VAR_3);

 return 0;
}
