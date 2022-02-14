
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct mlx5_ib_dev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static enum rdma_link_layer
FUNC_3(struct ib_device *VAR_1, u8 VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = FUNC_0(VAR_3->mdev, VAR_0);

 return FUNC_1(VAR_4);
}
