
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_qp {int dummy; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,int) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,int) ;

int FUNC_3(struct mlx4_dev *VAR_2,
   struct mlx4_qp *VAR_3, u8 VAR_4[16],
   int VAR_5, enum mlx4_protocol VAR_6)
{
 if (VAR_6 == VAR_0)
  VAR_4[7] |= (VAR_1 << 1);

 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2, VAR_3, VAR_4, 1,
     VAR_5, VAR_6);

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_1);
}
