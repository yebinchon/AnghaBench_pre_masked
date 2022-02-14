
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*,int *) ;
 struct mlx5_ib_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_1,
    u32 *VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = FUNC_3(VAR_1);

 switch (FUNC_1(VAR_1)) {
 case 129:
  return FUNC_2(VAR_1, VAR_2);

 case 130:
 case 128:
  return FUNC_0(VAR_3->mdev, VAR_2);

 default:
  return -VAR_0;
 }
}
