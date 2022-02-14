
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct ib_device*,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int *) ;
 struct mlx5_ib_dev* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_1,
     __be64 *VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = FUNC_5(VAR_1);
 struct mlx5_core_dev *VAR_4 = VAR_3->mdev;
 u64 VAR_5;
 int VAR_6;

 switch (FUNC_1(VAR_1)) {
 case 129:
  return FUNC_3(VAR_1,
           VAR_2);

 case 130:
  VAR_6 = FUNC_2(VAR_4, &VAR_5);
  break;

 case 128:
  VAR_6 = FUNC_4(VAR_4, &VAR_5);
  break;

 default:
  return -VAR_0;
 }

 if (!VAR_6)
  *VAR_2 = FUNC_0(VAR_5);

 return VAR_6;

}
