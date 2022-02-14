
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_cq {int mcq; } ;
struct ib_ucontext {int dummy; } ;
struct ib_cq {TYPE_1__* uobject; int device; } ;
struct TYPE_2__ {struct ib_ucontext* context; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_cq*) ;
 int FUNC_1 (struct mlx5_ib_cq*,struct ib_ucontext*) ;
 int FUNC_2 (struct mlx5_ib_cq*) ;
 int FUNC_3 (int ,int *) ;
 struct mlx5_ib_cq* FUNC_4 (struct ib_cq*) ;
 struct mlx5_ib_dev* FUNC_5 (int ) ;

int FUNC_6(struct ib_cq *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_5(VAR_0->device);
 struct mlx5_ib_cq *VAR_2 = FUNC_4(VAR_0);
 struct ib_ucontext *VAR_3 = ((void*)0);

 if (VAR_0->uobject)
  VAR_3 = VAR_0->uobject->context;

 FUNC_3(VAR_1->mdev, &VAR_2->mcq);
 if (VAR_3)
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_0(VAR_1, VAR_2);

 FUNC_2(VAR_2);

 return 0;
}
