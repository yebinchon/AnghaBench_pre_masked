
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct mlx5_ib_dev {int mdev; int ib_dev; } ;
struct ib_gid_attr {scalar_t__ gid_type; int ndev; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int,union ib_gid*,struct ib_gid_attr*) ;
 int VAR_1 ;

__be16 FUNC_4(struct mlx5_ib_dev *VAR_2, u8 VAR_3,
          int VAR_4)
{
 struct ib_gid_attr VAR_5;
 union ib_gid VAR_6;

 if (FUNC_3(&VAR_2->ib_dev, VAR_3, VAR_4, &VAR_6, &VAR_5))
  return 0;

 if (!VAR_5.ndev)
  return 0;

 FUNC_2(VAR_5.ndev);

 if (VAR_5.gid_type != VAR_0)
  return 0;

 return FUNC_1(FUNC_0(VAR_2->mdev, VAR_1));
}
