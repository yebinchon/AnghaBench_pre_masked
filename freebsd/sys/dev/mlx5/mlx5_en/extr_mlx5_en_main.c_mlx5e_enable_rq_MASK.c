
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_rq_param {int rqc; } ;
struct TYPE_12__ {int npages; int page_shift; } ;
struct TYPE_10__ {int dma; } ;
struct TYPE_11__ {TYPE_6__ buf; TYPE_4__ db; } ;
struct mlx5e_rq {int rqn; TYPE_5__ wq_ctrl; struct mlx5e_channel* channel; } ;
struct mlx5e_priv {int counter_set_id; struct mlx5_core_dev* mdev; } ;
struct TYPE_7__ {int cqn; } ;
struct TYPE_8__ {TYPE_1__ mcq; } ;
struct TYPE_9__ {TYPE_2__ cq; } ;
struct mlx5e_channel {TYPE_3__ rq; struct mlx5e_priv* priv; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,void*) ;
 int VAR_1 ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (void*) ;
 int VAR_9 ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int,int *) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 void* FUNC_8 (int) ;
 void* VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_9(struct mlx5e_rq *VAR_12, struct mlx5e_rq_param *VAR_13)
{
 struct mlx5e_channel *VAR_14 = VAR_12->channel;
 struct mlx5e_priv *VAR_15 = VAR_14->priv;
 struct mlx5_core_dev *VAR_16 = VAR_15->mdev;

 void *VAR_17;
 void *VAR_18;
 void *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_20 = FUNC_3(VAR_5) +
     sizeof(u64) * VAR_12->wq_ctrl.buf.npages;
 VAR_17 = FUNC_8(VAR_20);
 if (VAR_17 == ((void*)0))
  return (-VAR_0);

 VAR_18 = FUNC_0(VAR_5, VAR_17, VAR_6);
 VAR_19 = FUNC_0(VAR_18, VAR_18, VAR_19);

 FUNC_5(VAR_18, VAR_13->rqc, sizeof(VAR_13->rqc));

 FUNC_1(VAR_18, VAR_18, VAR_4, VAR_14->rq.cq.mcq.cqn);
 FUNC_1(VAR_18, VAR_18, VAR_11, VAR_1);
 FUNC_1(VAR_18, VAR_18, VAR_8, 1);
 if (VAR_15->counter_set_id >= 0)
  FUNC_1(VAR_18, VAR_18, VAR_3, VAR_15->counter_set_id);
 FUNC_1(VAR_19, VAR_19, VAR_9, VAR_12->wq_ctrl.buf.page_shift -
     VAR_2);
 FUNC_2(VAR_19, VAR_19, VAR_7, VAR_12->wq_ctrl.db.dma);

 FUNC_7(&VAR_12->wq_ctrl.buf,
     (__be64 *) FUNC_0(VAR_19, VAR_19, VAR_10));

 VAR_21 = FUNC_6(VAR_16, VAR_17, VAR_20, &VAR_12->rqn);

 FUNC_4(VAR_17);

 return (VAR_21);
}
