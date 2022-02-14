
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_xrcd {int device; } ;
struct TYPE_2__ {int xrcdn; } ;


 int FUNC_0 (struct ib_xrcd*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int ) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct ib_xrcd*) ;

int FUNC_5(struct ib_xrcd *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_3(VAR_0->device);
 u32 VAR_2 = FUNC_4(VAR_0)->xrcdn;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->mdev, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to dealloc xrcdn 0x%x\n", VAR_2);
  return VAR_3;
 }

 FUNC_0(VAR_0);

 return 0;
}
