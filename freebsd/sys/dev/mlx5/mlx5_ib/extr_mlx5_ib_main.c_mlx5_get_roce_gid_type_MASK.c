
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct mlx5_ib_dev {int ib_dev; } ;
struct ib_gid_attr {int gid_type; int ndev; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,union ib_gid*,struct ib_gid_attr*) ;

int FUNC_2(struct mlx5_ib_dev *VAR_1, u8 VAR_2,
      int VAR_3, enum ib_gid_type *VAR_4)
{
 struct ib_gid_attr VAR_5;
 union ib_gid VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_1->ib_dev, VAR_2, VAR_3, &VAR_6, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (!VAR_5.ndev)
  return -VAR_0;

 FUNC_0(VAR_5.ndev);

 *VAR_4 = VAR_5.gid_type;

 return 0;
}
