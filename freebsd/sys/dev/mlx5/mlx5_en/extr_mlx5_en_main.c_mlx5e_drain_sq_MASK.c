
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* comp ) (TYPE_3__*) ;} ;
struct TYPE_6__ {TYPE_3__ mcq; } ;
struct mlx5e_sq {scalar_t__ cc; scalar_t__ pc; int lock; TYPE_2__ cq; int ifp; TYPE_1__* priv; int cev_callout; int cev_next_state; int running; } ;
struct mlx5_core_dev {scalar_t__ state; } ;
struct TYPE_5__ {int media_status_last; struct mlx5_core_dev* mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct mlx5e_sq*,int ,int ) ;
 int FUNC_5 (struct mlx5e_sq*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;

void
FUNC_11(struct mlx5e_sq *VAR_5)
{
 int VAR_6;
 struct mlx5_core_dev *VAR_7= VAR_5->priv->mdev;
 if (FUNC_0(VAR_5->running) == 0)
  return;


 FUNC_1(VAR_5->running, 0);


 FUNC_7(&VAR_5->lock);


 VAR_5->cev_next_state = VAR_1;
 FUNC_2(&VAR_5->cev_callout);


 FUNC_5(VAR_5, 1);
 FUNC_8(&VAR_5->lock);


 FUNC_7(&VAR_5->lock);
 while (VAR_5->cc != VAR_5->pc &&
     (VAR_5->priv->media_status_last & VAR_0) != 0 &&
     VAR_7->state != VAR_2) {
  FUNC_8(&VAR_5->lock);
  FUNC_6(1);
  VAR_5->cq.mcq.comp(&VAR_5->cq.mcq);
  FUNC_7(&VAR_5->lock);
 }
 FUNC_8(&VAR_5->lock);


 VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_3);
 if (VAR_6 != 0) {
  FUNC_3(VAR_5->ifp,
      "mlx5e_modify_sq() from RDY to ERR failed: %d\n", VAR_6);
 }


 FUNC_7(&VAR_5->lock);
 while (VAR_5->cc != VAR_5->pc &&
        VAR_7->state != VAR_2) {
  FUNC_8(&VAR_5->lock);
  FUNC_6(1);
  VAR_5->cq.mcq.comp(&VAR_5->cq.mcq);
  FUNC_7(&VAR_5->lock);
 }
 FUNC_8(&VAR_5->lock);
}
