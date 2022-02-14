
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_rsc_common {int res; } ;
struct mlx5_core_qp {int (* event ) (struct mlx5_core_qp*,int) ;} ;
struct mlx5_core_dev {int dummy; } ;



 int FUNC_0 (struct mlx5_core_rsc_common*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int ) ;
 struct mlx5_core_rsc_common* FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_qp*,int) ;

void FUNC_4(struct mlx5_core_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct mlx5_core_rsc_common *VAR_3 = FUNC_2(VAR_0, VAR_1);
 struct mlx5_core_qp *VAR_4;

 if (!VAR_3)
  return;

 switch (VAR_3->res) {
 case 128:
  VAR_4 = (struct mlx5_core_qp *)VAR_3;
  VAR_4->event(VAR_4, VAR_2);
  break;

 default:
  FUNC_1(VAR_0, "invalid resource type for 0x%x\n", VAR_1);
 }

 FUNC_0(VAR_3);
}
