
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_cq_param {int cqc; } ;
struct TYPE_7__ {int dma; } ;
struct TYPE_10__ {int npages; int page_shift; } ;
struct TYPE_8__ {TYPE_2__ db; TYPE_5__ buf; } ;
struct mlx5_core_cq {TYPE_1__* uar; } ;
struct mlx5e_cq {TYPE_4__* priv; TYPE_3__ wq_ctrl; struct mlx5_core_cq mcq; } ;
typedef int __be64 ;
struct TYPE_9__ {int doorbell_lock; int mdev; } ;
struct TYPE_6__ {int index; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (void*) ;
 int VAR_6 ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (int ,struct mlx5_core_cq*,void*,int) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (int ,int,int*,int*) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (struct mlx5e_cq*,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_12(struct mlx5e_cq *VAR_9, struct mlx5e_cq_param *VAR_10, int VAR_11)
{
 struct mlx5_core_cq *VAR_12 = &VAR_9->mcq;
 void *VAR_13;
 void *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_15 = FUNC_4(VAR_4) +
     sizeof(u64) * VAR_9->wq_ctrl.buf.npages;
 VAR_13 = FUNC_10(VAR_15);
 if (VAR_13 == ((void*)0))
  return (-VAR_0);

 VAR_14 = FUNC_0(VAR_4, VAR_13, VAR_3);

 FUNC_6(VAR_14, VAR_10->cqc, sizeof(VAR_10->cqc));

 FUNC_8(&VAR_9->wq_ctrl.buf,
     (__be64 *) FUNC_0(VAR_4, VAR_13, VAR_7));

 FUNC_9(VAR_9->priv->mdev, VAR_11, &VAR_17, &VAR_16);

 FUNC_2(VAR_14, VAR_14, VAR_2, VAR_17);
 FUNC_2(VAR_14, VAR_14, VAR_8, VAR_12->uar->index);
 FUNC_2(VAR_14, VAR_14, VAR_6, VAR_9->wq_ctrl.buf.page_shift -
     VAR_1);
 FUNC_3(VAR_14, VAR_14, VAR_5, VAR_9->wq_ctrl.db.dma);

 VAR_18 = FUNC_7(VAR_9->priv->mdev, VAR_12, VAR_13, VAR_15);

 FUNC_5(VAR_13);

 if (VAR_18)
  return (VAR_18);

 FUNC_11(VAR_9, FUNC_1(&VAR_9->priv->doorbell_lock));

 return (0);
}
