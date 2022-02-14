
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_xrcd {int dummy; } ;
struct mlx5_ib_xrcd {struct ib_xrcd ibxrcd; int xrcdn; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_xrcd* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mlx5_ib_xrcd*) ;
 struct mlx5_ib_xrcd* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *) ;
 struct mlx5_ib_dev* FUNC_5 (struct ib_device*) ;
 int VAR_3 ;

struct ib_xrcd *FUNC_6(struct ib_device *VAR_4,
       struct ib_ucontext *VAR_5,
       struct ib_udata *VAR_6)
{
 struct mlx5_ib_dev *VAR_7 = FUNC_5(VAR_4);
 struct mlx5_ib_xrcd *VAR_8;
 int VAR_9;

 if (!FUNC_1(VAR_7->mdev, VAR_3))
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_4(VAR_7->mdev, &VAR_8->xrcdn);
 if (VAR_9) {
  FUNC_2(VAR_8);
  return FUNC_0(-VAR_0);
 }

 return &VAR_8->ibxrcd;
}
