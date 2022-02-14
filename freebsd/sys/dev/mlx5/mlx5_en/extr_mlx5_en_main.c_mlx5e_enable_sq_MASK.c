
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_sq_param {int sqc; } ;
struct TYPE_14__ {int npages; int page_shift; } ;
struct TYPE_11__ {int dma; } ;
struct TYPE_12__ {TYPE_7__ buf; TYPE_4__ db; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_8__ {int cqn; } ;
struct TYPE_9__ {TYPE_1__ mcq; } ;
struct mlx5e_sq {int sqn; TYPE_6__* priv; TYPE_5__ wq_ctrl; TYPE_3__ uar; TYPE_2__ cq; } ;
typedef int __be64 ;
struct TYPE_13__ {int mdev; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,void*) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int VAR_1 ;
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
 int FUNC_6 (int ,void*,int,int *) ;
 int FUNC_7 (TYPE_7__*,int *) ;
 void* FUNC_8 (int) ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int
FUNC_9(struct mlx5e_sq *VAR_16, struct mlx5e_sq_param *VAR_17,
    int VAR_18)
{
 void *VAR_19;
 void *VAR_20;
 void *VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_22 = FUNC_3(VAR_5) +
     sizeof(u64) * VAR_16->wq_ctrl.buf.npages;
 VAR_19 = FUNC_8(VAR_22);
 if (VAR_19 == ((void*)0))
  return (-VAR_0);

 VAR_20 = FUNC_0(VAR_5, VAR_19, VAR_6);
 VAR_21 = FUNC_0(VAR_20, VAR_20, VAR_21);

 FUNC_5(VAR_20, VAR_17->sqc, sizeof(VAR_17->sqc));

 FUNC_1(VAR_20, VAR_20, VAR_13, VAR_18);
 FUNC_1(VAR_20, VAR_20, VAR_4, VAR_16->cq.mcq.cqn);
 FUNC_1(VAR_20, VAR_20, VAR_11, VAR_1);
 FUNC_1(VAR_20, VAR_20, VAR_12, 1);
 FUNC_1(VAR_20, VAR_20, VAR_8, 1);

 FUNC_1(VAR_21, VAR_21, VAR_15, VAR_2);
 FUNC_1(VAR_21, VAR_21, VAR_14, VAR_16->uar.index);
 FUNC_1(VAR_21, VAR_21, VAR_9, VAR_16->wq_ctrl.buf.page_shift -
     VAR_3);
 FUNC_2(VAR_21, VAR_21, VAR_7, VAR_16->wq_ctrl.db.dma);

 FUNC_7(&VAR_16->wq_ctrl.buf,
     (__be64 *) FUNC_0(VAR_21, VAR_21, VAR_10));

 VAR_23 = FUNC_6(VAR_16->priv->mdev, VAR_19, VAR_22, &VAR_16->sqn);

 FUNC_4(VAR_19);

 return (VAR_23);
}
