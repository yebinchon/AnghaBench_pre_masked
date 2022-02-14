
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int *) ;
 int VAR_3 ;

int FUNC_2(struct mlx5_core_dev *VAR_4,
     u8 *VAR_5)
{
 int VAR_6;

 switch (FUNC_0(VAR_4, VAR_3)) {
 case 130:
  *VAR_5 = VAR_1;
  VAR_6 = 0;
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_4, 0, VAR_5);
  break;
 case 129:
  *VAR_5 = VAR_2;
  VAR_6 = 0;
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
