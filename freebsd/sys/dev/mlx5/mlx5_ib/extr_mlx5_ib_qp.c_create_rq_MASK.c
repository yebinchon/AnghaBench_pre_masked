
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int dma; } ;
struct mlx5_ib_rwq {int rq_num_pas; int user_index; int log_rq_stride; int log_rq_size; int rq_page_offset; int log_page_size; int wq_sig; int core_qp; int page_shift; int umem; TYPE_2__ db; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_wq_init_attr {int cq; } ;
struct ib_pd {int device; } ;
typedef int __be64 ;
struct TYPE_5__ {int cqn; } ;
struct TYPE_8__ {TYPE_1__ mcq; } ;
struct TYPE_7__ {int pdn; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,void*,struct ib_pd*,int) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int FUNC_3 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ib_pd* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 struct ib_pd* VAR_9 ;
 struct ib_pd* VAR_10 ;
 int FUNC_4 (void*) ;
 struct ib_pd* VAR_11 ;
 struct ib_pd* VAR_12 ;
 struct ib_pd* VAR_13 ;
 struct ib_pd* VAR_14 ;
 int FUNC_5 (int ,void*,int,int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,int ,int ,int *,int ) ;
 void* FUNC_7 (int) ;
 struct ib_pd* VAR_15 ;
 void* VAR_16 ;
 struct ib_pd* VAR_17 ;
 TYPE_4__* FUNC_8 (int ) ;
 struct mlx5_ib_dev* FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (struct ib_pd*) ;
 struct ib_pd* VAR_18 ;
 struct ib_pd* VAR_19 ;
 struct ib_pd* VAR_20 ;

__attribute__((used)) static int FUNC_11(struct mlx5_ib_rwq *VAR_21, struct ib_pd *VAR_22,
        struct ib_wq_init_attr *VAR_23)
{
 struct mlx5_ib_dev *VAR_24;
 __be64 *VAR_25;
 void *VAR_26;
 void *VAR_27;
 void *VAR_28;
 int VAR_29;
 int VAR_30;

 VAR_24 = FUNC_9(VAR_22->device);

 VAR_29 = FUNC_3(VAR_6) + sizeof(u64) * VAR_21->rq_num_pas;
 VAR_26 = FUNC_7(VAR_29);
 if (!VAR_26)
  return -VAR_0;

 VAR_27 = FUNC_0(VAR_6, VAR_26, VAR_7);
 FUNC_1(VAR_27, VAR_27, VAR_14,
   VAR_1);
 FUNC_1(VAR_27, VAR_27, VAR_18, VAR_21->user_index);
 FUNC_1(VAR_27, VAR_27, VAR_5, FUNC_8(VAR_23->cq)->mcq.cqn);
 FUNC_1(VAR_27, VAR_27, VAR_17, VAR_2);
 FUNC_1(VAR_27, VAR_27, VAR_10, 1);
 VAR_28 = FUNC_0(VAR_27, VAR_27, VAR_28);
 FUNC_1(VAR_28, VAR_28, VAR_20, VAR_4);
 FUNC_1(VAR_28, VAR_28, VAR_9, VAR_3);
 FUNC_1(VAR_28, VAR_28, VAR_12, VAR_21->log_rq_stride);
 FUNC_1(VAR_28, VAR_28, VAR_13, VAR_21->log_rq_size);
 FUNC_1(VAR_28, VAR_28, VAR_22, FUNC_10(VAR_22)->pdn);
 FUNC_1(VAR_28, VAR_28, VAR_15, VAR_21->rq_page_offset);
 FUNC_1(VAR_28, VAR_28, VAR_11, VAR_21->log_page_size);
 FUNC_1(VAR_28, VAR_28, VAR_19, VAR_21->wq_sig);
 FUNC_2(VAR_28, VAR_28, VAR_8, VAR_21->db.dma);
 VAR_25 = (__be64 *)FUNC_0(VAR_28, VAR_28, VAR_16);
 FUNC_6(VAR_24, VAR_21->umem, VAR_21->page_shift, VAR_25, 0);
 VAR_30 = FUNC_5(VAR_24->mdev, VAR_26, VAR_29, &VAR_21->core_qp);
 FUNC_4(VAR_26);
 return VAR_30;
}
