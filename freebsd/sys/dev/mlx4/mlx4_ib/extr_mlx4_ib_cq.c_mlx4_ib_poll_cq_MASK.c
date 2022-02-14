
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_qp {int dummy; } ;
struct mlx4_ib_dev {TYPE_3__* dev; } ;
struct TYPE_4__ {int device; } ;
struct mlx4_ib_cq {int lock; int mcq; TYPE_1__ ibcq; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;
struct TYPE_6__ {TYPE_2__* persist; } ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx4_ib_cq*,struct mlx4_ib_qp**,struct ib_wc*) ;
 int FUNC_2 (struct mlx4_ib_cq*,int,struct ib_wc*,int*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mlx4_ib_cq* FUNC_5 (struct ib_cq*) ;
 struct mlx4_ib_dev* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ib_cq *VAR_1, int VAR_2, struct ib_wc *VAR_3)
{
 struct mlx4_ib_cq *VAR_4 = FUNC_5(VAR_1);
 struct mlx4_ib_qp *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7;
 struct mlx4_ib_dev *VAR_8 = FUNC_6(VAR_4->ibcq.device);

 FUNC_3(&VAR_4->lock, VAR_6);
 if (FUNC_7(VAR_8->dev->persist->state &
       VAR_0)) {
  FUNC_2(VAR_4, VAR_2, VAR_3, &VAR_7);
  goto out;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  if (FUNC_1(VAR_4, &VAR_5, VAR_3 + VAR_7))
   break;
 }

 FUNC_0(&VAR_4->mcq);

out:
 FUNC_4(&VAR_4->lock, VAR_6);

 return VAR_7;
}
