
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max; int wqe_shift; } ;
struct mlx4_ib_srq {int db; int buf; TYPE_2__ msrq; int wrid; int umem; int mtt; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_srq {TYPE_1__* uobject; int device; } ;
struct TYPE_3__ {int context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_ib_srq*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 struct mlx4_ib_dev* FUNC_8 (int ) ;
 struct mlx4_ib_srq* FUNC_9 (struct ib_srq*) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct ib_srq *VAR_0)
{
 struct mlx4_ib_dev *VAR_1 = FUNC_8(VAR_0->device);
 struct mlx4_ib_srq *VAR_2 = FUNC_9(VAR_0);

 FUNC_7(VAR_1->dev, &VAR_2->msrq);
 FUNC_6(VAR_1->dev, &VAR_2->mtt);

 if (VAR_0->uobject) {
  FUNC_5(FUNC_10(VAR_0->uobject->context), &VAR_2->db);
  FUNC_0(VAR_2->umem);
 } else {
  FUNC_2(VAR_2->wrid);
  FUNC_3(VAR_1->dev, VAR_2->msrq.max << VAR_2->msrq.wqe_shift,
         &VAR_2->buf);
  FUNC_4(VAR_1->dev, &VAR_2->db);
 }

 FUNC_1(VAR_2);

 return 0;
}
