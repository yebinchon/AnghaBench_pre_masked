
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_ib_dev {int mdev; int ib_dev; } ;
typedef int __be64 ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mlx5_ib_dev *VAR_1,
    __be64 *VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 switch (FUNC_1(&VAR_1->ib_dev)) {
 case 129:
  return FUNC_3(VAR_1, VAR_2);

 case 130:
  VAR_4 = FUNC_2(VAR_1->mdev, &VAR_3);
  break;

 case 128:
  VAR_4 = FUNC_4(VAR_1->mdev, &VAR_3);
  break;

 default:
  return -VAR_0;
 }

 if (!VAR_4)
  *VAR_2 = FUNC_0(VAR_3);

 return VAR_4;
}
