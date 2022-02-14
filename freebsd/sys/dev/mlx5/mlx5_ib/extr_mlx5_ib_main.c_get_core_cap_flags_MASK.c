
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ib_device*,int) ;
 int VAR_9 ;
 struct mlx5_ib_dev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static u32 FUNC_3(struct ib_device *VAR_10)
{
 struct mlx5_ib_dev *VAR_11 = FUNC_2(VAR_10);
 enum rdma_link_layer VAR_12 = FUNC_1(VAR_10, 1);
 u8 VAR_13 = FUNC_0(VAR_11->mdev, VAR_8);
 u8 VAR_14 = FUNC_0(VAR_11->mdev, VAR_9);
 u32 VAR_15 = 0;

 if (VAR_12 == VAR_0)
  return VAR_5;

 if (!(VAR_13 & VAR_1))
  return 0;

 if (!(VAR_13 & VAR_2))
  return 0;

 if (VAR_14 & VAR_3)
  VAR_15 |= VAR_6;

 if (VAR_14 & VAR_4)
  VAR_15 |= VAR_7;

 return VAR_15;
}
