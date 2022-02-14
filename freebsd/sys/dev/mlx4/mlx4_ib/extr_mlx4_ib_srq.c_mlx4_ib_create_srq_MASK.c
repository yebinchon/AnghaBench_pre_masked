
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_24__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_17__ ;
typedef struct TYPE_38__ TYPE_16__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx4_wqe_data_seg {int lkey; } ;
struct TYPE_39__ {int dma; scalar_t__* db; } ;
struct TYPE_41__ {int page_shift; int npages; } ;
struct TYPE_44__ {int srq_num; } ;
struct TYPE_45__ {TYPE_4__ xrc; } ;
struct ib_srq {TYPE_5__ ext; } ;
struct TYPE_37__ {int max; scalar_t__ max_gs; int srqn; int event; int wqe_shift; } ;
struct mlx4_ib_srq {int tail; TYPE_17__ db; TYPE_24__ buf; TYPE_16__* umem; int mtt; scalar_t__ wrid; struct ib_srq ibsrq; TYPE_13__ msrq; scalar_t__ wqe_ctr; scalar_t__ head; int lock; int mutex; } ;
struct mlx4_ib_dev {TYPE_12__* dev; } ;
struct mlx4_ib_create_srq {int db_addr; int buf_addr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_47__ {int max_wr; scalar_t__ max_sge; } ;
struct TYPE_42__ {int xrcd; int cq; } ;
struct TYPE_43__ {TYPE_2__ xrc; } ;
struct ib_srq_init_attr {scalar_t__ srq_type; TYPE_7__ attr; TYPE_3__ ext; } ;
struct ib_pd {TYPE_8__* uobject; int device; } ;
typedef int __u32 ;
struct TYPE_49__ {int xrcdn; } ;
struct TYPE_48__ {int context; } ;
struct TYPE_46__ {int max_srq_wqes; scalar_t__ max_srq_sge; scalar_t__ reserved_xrcds; } ;
struct TYPE_40__ {int cqn; } ;
struct TYPE_38__ {int page_size; } ;
struct TYPE_36__ {TYPE_6__ caps; } ;
struct TYPE_35__ {TYPE_1__ mcq; } ;
struct TYPE_34__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_srq* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_16__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_16__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 struct mlx4_wqe_srq_next_seg* FUNC_6 (struct mlx4_ib_srq*,int) ;
 scalar_t__ FUNC_7 (struct mlx4_ib_create_srq*,struct ib_udata*,int) ;
 scalar_t__ FUNC_8 (struct ib_udata*,int *,int) ;
 TYPE_16__* FUNC_9 (int ,int ,int,int ,int ) ;
 int FUNC_10 (TYPE_16__*) ;
 int FUNC_11 (TYPE_16__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct mlx4_ib_srq*) ;
 struct mlx4_ib_srq* FUNC_14 (int,int) ;
 scalar_t__ FUNC_15 (int,int,int) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (unsigned long,int) ;
 scalar_t__ FUNC_18 (TYPE_12__*,int,int,TYPE_24__*,int) ;
 int FUNC_19 (TYPE_12__*,int,TYPE_24__*) ;
 int FUNC_20 (TYPE_12__*,int *,TYPE_24__*,int) ;
 int FUNC_21 (TYPE_12__*,TYPE_17__*,int ,int) ;
 int FUNC_22 (TYPE_12__*,TYPE_17__*) ;
 int FUNC_23 (int ,int ,TYPE_17__*) ;
 int FUNC_24 (int ,TYPE_17__*) ;
 int VAR_8 ;
 int FUNC_25 (struct mlx4_ib_dev*,int *,TYPE_16__*) ;
 int FUNC_26 (TYPE_12__*,int *) ;
 int FUNC_27 (TYPE_12__*,int ,int ,int *) ;
 int FUNC_28 (TYPE_12__*,int ,int ,int ,int *,int ,TYPE_13__*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int) ;
 int FUNC_31 (int *) ;
 TYPE_11__* FUNC_32 (int ) ;
 struct mlx4_ib_dev* FUNC_33 (int ) ;
 TYPE_10__* FUNC_34 (struct ib_pd*) ;
 int FUNC_35 (int ) ;
 TYPE_9__* FUNC_36 (int ) ;

struct ib_srq *FUNC_37(struct ib_pd *VAR_9,
      struct ib_srq_init_attr *VAR_10,
      struct ib_udata *VAR_11)
{
 struct mlx4_ib_dev *VAR_12 = FUNC_33(VAR_9->device);
 struct mlx4_ib_srq *VAR_13;
 struct mlx4_wqe_srq_next_seg *VAR_14;
 struct mlx4_wqe_data_seg *VAR_15;
 u32 VAR_16;
 u16 VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;


 if (VAR_10->attr.max_wr >= VAR_12->dev->caps.max_srq_wqes ||
     VAR_10->attr.max_sge > VAR_12->dev->caps.max_srq_sge)
  return FUNC_0(-VAR_1);

 VAR_13 = FUNC_14(sizeof *VAR_13, VAR_3);
 if (!VAR_13)
  return FUNC_0(-VAR_2);

 FUNC_29(&VAR_13->mutex);
 FUNC_31(&VAR_13->lock);
 VAR_13->msrq.max = FUNC_30(VAR_10->attr.max_wr + 1);
 VAR_13->msrq.max_gs = VAR_10->attr.max_sge;

 VAR_18 = FUNC_17(32UL,
   FUNC_30(sizeof (struct mlx4_wqe_srq_next_seg) +
        VAR_13->msrq.max_gs *
        sizeof (struct mlx4_wqe_data_seg)));
 VAR_13->msrq.wqe_shift = FUNC_12(VAR_18);

 VAR_19 = VAR_13->msrq.max * VAR_18;

 if (VAR_9->uobject) {
  struct mlx4_ib_create_srq VAR_22;

  if (FUNC_7(&VAR_22, VAR_11, sizeof VAR_22)) {
   VAR_20 = -VAR_0;
   goto err_srq;
  }

  VAR_13->umem = FUNC_9(VAR_9->uobject->context, VAR_22.buf_addr,
     VAR_19, 0, 0);
  if (FUNC_1(VAR_13->umem)) {
   VAR_20 = FUNC_2(VAR_13->umem);
   goto err_srq;
  }

  VAR_20 = FUNC_27(VAR_12->dev, FUNC_10(VAR_13->umem),
        FUNC_12(VAR_13->umem->page_size), &VAR_13->mtt);
  if (VAR_20)
   goto err_buf;

  VAR_20 = FUNC_25(VAR_12, &VAR_13->mtt, VAR_13->umem);
  if (VAR_20)
   goto err_mtt;

  VAR_20 = FUNC_23(FUNC_35(VAR_9->uobject->context),
       VAR_22.db_addr, &VAR_13->db);
  if (VAR_20)
   goto err_mtt;
 } else {
  VAR_20 = FUNC_21(VAR_12->dev, &VAR_13->db, 0, VAR_3);
  if (VAR_20)
   goto err_srq;

  *VAR_13->db.db = 0;

  if (FUNC_18(VAR_12->dev, VAR_19, VAR_6 * 2, &VAR_13->buf,
       VAR_3)) {
   VAR_20 = -VAR_2;
   goto err_db;
  }

  VAR_13->head = 0;
  VAR_13->tail = VAR_13->msrq.max - 1;
  VAR_13->wqe_ctr = 0;

  for (VAR_21 = 0; VAR_21 < VAR_13->msrq.max; ++VAR_21) {
   VAR_14 = FUNC_6(VAR_13, VAR_21);
   VAR_14->next_wqe_index =
    FUNC_4((VAR_21 + 1) & (VAR_13->msrq.max - 1));

   for (VAR_15 = (void *) (VAR_14 + 1);
        (void *) VAR_15 < (void *) VAR_14 + VAR_18;
        ++VAR_15)
    VAR_15->lkey = FUNC_5(VAR_5);
  }

  VAR_20 = FUNC_27(VAR_12->dev, VAR_13->buf.npages, VAR_13->buf.page_shift,
        &VAR_13->mtt);
  if (VAR_20)
   goto err_buf;

  VAR_20 = FUNC_20(VAR_12->dev, &VAR_13->mtt, &VAR_13->buf, VAR_3);
  if (VAR_20)
   goto err_mtt;

  VAR_13->wrid = FUNC_15(VAR_13->msrq.max, sizeof(u64),
     VAR_3 | VAR_7);
  if (!VAR_13->wrid) {
   VAR_13->wrid = FUNC_3(VAR_13->msrq.max * sizeof(u64),
           VAR_3, 0 );
   if (!VAR_13->wrid) {
    VAR_20 = -VAR_2;
    goto err_mtt;
   }
  }
 }

 VAR_16 = (VAR_10->srq_type == VAR_4) ?
  FUNC_32(VAR_10->ext.xrc.cq)->mcq.cqn : 0;
 VAR_17 = (VAR_10->srq_type == VAR_4) ?
  FUNC_36(VAR_10->ext.xrc.xrcd)->xrcdn :
  (u16) VAR_12->dev->caps.reserved_xrcds;
 VAR_20 = FUNC_28(VAR_12->dev, FUNC_34(VAR_9)->pdn, VAR_16, VAR_17, &VAR_13->mtt,
        VAR_13->db.dma, &VAR_13->msrq);
 if (VAR_20)
  goto err_wrid;

 VAR_13->msrq.event = VAR_8;
 VAR_13->ibsrq.ext.xrc.srq_num = VAR_13->msrq.srqn;

 if (VAR_9->uobject)
  if (FUNC_8(VAR_11, &VAR_13->msrq.srqn, sizeof (__u32))) {
   VAR_20 = -VAR_0;
   goto err_wrid;
  }

 VAR_10->attr.max_wr = VAR_13->msrq.max - 1;

 return &VAR_13->ibsrq;

err_wrid:
 if (VAR_9->uobject)
  FUNC_24(FUNC_35(VAR_9->uobject->context), &VAR_13->db);
 else
  FUNC_16(VAR_13->wrid);

err_mtt:
 FUNC_26(VAR_12->dev, &VAR_13->mtt);

err_buf:
 if (VAR_9->uobject)
  FUNC_11(VAR_13->umem);
 else
  FUNC_19(VAR_12->dev, VAR_19, &VAR_13->buf);

err_db:
 if (!VAR_9->uobject)
  FUNC_22(VAR_12->dev, &VAR_13->db);

err_srq:
 FUNC_13(VAR_13);

 return FUNC_0(VAR_20);
}
