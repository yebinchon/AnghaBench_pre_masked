
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_mr {int npages; scalar_t__ live; struct ib_umem* umem; } ;
struct mlx5_ib_dev {TYPE_2__* mdev; int mr_srcu; } ;
struct ib_umem {scalar_t__ odp_data; } ;
struct ib_mr {int device; } ;
struct TYPE_3__ {int reg_pages; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct mlx5_ib_mr*) ;
 int FUNC_2 (struct ib_umem*) ;
 int FUNC_3 (struct ib_umem*) ;
 int FUNC_4 (struct ib_umem*) ;
 int FUNC_5 (struct ib_umem*,int ,int ) ;
 int FUNC_6 (int *) ;
 struct mlx5_ib_dev* FUNC_7 (int ) ;
 struct mlx5_ib_mr* FUNC_8 (struct ib_mr*) ;

int FUNC_9(struct ib_mr *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_7(VAR_0->device);
 struct mlx5_ib_mr *VAR_2 = FUNC_8(VAR_0);
 int VAR_3 = VAR_2->npages;
 struct ib_umem *VAR_4 = VAR_2->umem;
 FUNC_1(VAR_2);

 if (VAR_4) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_3, &VAR_1->mdev->priv.reg_pages);
 }

 return 0;
}
