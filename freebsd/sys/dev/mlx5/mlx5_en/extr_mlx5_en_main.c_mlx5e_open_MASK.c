
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_priv {TYPE_1__* ifp; int mdev; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct mlx5e_priv *VAR_3 = VAR_2;

 FUNC_0(VAR_3);
 if (FUNC_3(VAR_3->mdev, VAR_1))
  FUNC_2(VAR_3->ifp,
      "Setting port status to up failed\n");

 FUNC_4(VAR_3->ifp);
 VAR_3->ifp->if_drv_flags |= VAR_0;
 FUNC_1(VAR_3);
}
