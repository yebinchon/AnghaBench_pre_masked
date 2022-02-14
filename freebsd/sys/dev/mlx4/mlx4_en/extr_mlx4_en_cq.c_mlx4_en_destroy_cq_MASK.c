
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {struct mlx4_en_dev* mdev; int port; } ;
struct mlx4_en_dev {int dev; } ;
struct TYPE_2__ {int buf; } ;
struct mlx4_en_cq {scalar_t__ is_tx; int * buf; scalar_t__ buf_size; scalar_t__ vector; TYPE_1__ wqres; int tq; int cq_task; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_en_cq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct mlx4_en_priv *VAR_1, struct mlx4_en_cq **VAR_2)
{
 struct mlx4_en_dev *VAR_3 = VAR_1->mdev;
 struct mlx4_en_cq *VAR_4 = *VAR_2;

 FUNC_5(VAR_4->tq, &VAR_4->cq_task);
 FUNC_6(VAR_4->tq);
 FUNC_1(&VAR_4->wqres.buf);
 FUNC_2(VAR_3->dev, &VAR_4->wqres, VAR_4->buf_size);
 if (FUNC_3(VAR_3->dev, VAR_1->port, VAR_4->vector) &&
     VAR_4->is_tx == VAR_0)
  FUNC_4(VAR_1->mdev->dev, VAR_4->vector);
 VAR_4->vector = 0;
 VAR_4->buf_size = 0;
 VAR_4->buf = ((void*)0);
 FUNC_0(VAR_4);
 *VAR_2 = ((void*)0);
}
