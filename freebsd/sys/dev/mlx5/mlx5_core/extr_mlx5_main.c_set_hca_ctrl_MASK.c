
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_reg_host_endianess {int he; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int he_out ;
typedef int he_in ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_reg_host_endianess*,int ,int) ;
 int FUNC_2 (struct mlx5_core_dev*,struct mlx5_reg_host_endianess*,int,struct mlx5_reg_host_endianess*,int,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_reg_host_endianess VAR_6;
 struct mlx5_reg_host_endianess VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_5, VAR_3) == VAR_0 &&
     !FUNC_0(VAR_5, VAR_4))
  return 0;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.he = VAR_2;
 VAR_8 = FUNC_2(VAR_5, &VAR_6, sizeof(VAR_6),
     &VAR_7, sizeof(VAR_7),
     VAR_1, 0, 1);
 return VAR_8;
}
