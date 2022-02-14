
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_dev {int dev; } ;
struct TYPE_4__ {int mtt; } ;
struct mlx4_ib_cq {int db; TYPE_2__ buf; int umem; int mcq; } ;
struct ib_cq {int cqe; TYPE_1__* uobject; int device; } ;
struct TYPE_3__ {int context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_ib_cq*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct mlx4_ib_dev*,TYPE_2__*,int ) ;
 int FUNC_6 (int ,int *) ;
 struct mlx4_ib_cq* FUNC_7 (struct ib_cq*) ;
 struct mlx4_ib_dev* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct ib_cq *VAR_0)
{
 struct mlx4_ib_dev *VAR_1 = FUNC_8(VAR_0->device);
 struct mlx4_ib_cq *VAR_2 = FUNC_7(VAR_0);

 FUNC_2(VAR_1->dev, &VAR_2->mcq);
 FUNC_6(VAR_1->dev, &VAR_2->buf.mtt);

 if (VAR_0->uobject) {
  FUNC_4(FUNC_9(VAR_0->uobject->context), &VAR_2->db);
  FUNC_0(VAR_2->umem);
 } else {
  FUNC_5(VAR_1, &VAR_2->buf, VAR_0->cqe);
  FUNC_3(VAR_1->dev, &VAR_2->db);
 }

 FUNC_1(VAR_2);

 return 0;
}
