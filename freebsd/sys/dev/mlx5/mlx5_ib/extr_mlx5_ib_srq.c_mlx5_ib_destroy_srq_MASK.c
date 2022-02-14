
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_srq {int umem; int db; int msrq; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_srq {TYPE_1__* uobject; int device; } ;
struct TYPE_2__ {int context; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_srq*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_srq*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 struct mlx5_ib_dev* FUNC_5 (int ) ;
 struct mlx5_ib_srq* FUNC_6 (struct ib_srq*) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct ib_srq *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_5(VAR_0->device);
 struct mlx5_ib_srq *VAR_2 = FUNC_6(VAR_0);

 FUNC_3(VAR_1->mdev, &VAR_2->msrq);

 if (VAR_0->uobject) {
  FUNC_4(FUNC_7(VAR_0->uobject->context), &VAR_2->db);
  FUNC_1(VAR_2->umem);
 } else {
  FUNC_0(VAR_1, VAR_2);
 }

 FUNC_2(VAR_0);
 return 0;
}
