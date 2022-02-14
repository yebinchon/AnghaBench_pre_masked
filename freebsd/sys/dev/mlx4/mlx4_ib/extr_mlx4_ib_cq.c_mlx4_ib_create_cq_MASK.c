
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;


struct mlx4_uar {int dummy; } ;
struct mlx4_ib_dev {int* eq_table; TYPE_3__* dev; struct mlx4_uar priv_uar; } ;
struct mlx4_ib_create_cq {int db_addr; int buf_addr; } ;
struct TYPE_24__ {int dma; scalar_t__* db; } ;
struct ib_cq {int cqe; } ;
struct TYPE_23__ {int mtt; } ;
struct TYPE_19__ {int cqn; int event; int comp; scalar_t__* arm_db; scalar_t__* set_ci_db; } ;
struct mlx4_ib_cq {int create_flags; TYPE_7__ db; struct ib_cq ibcq; TYPE_4__ buf; int umem; TYPE_16__ mcq; int recv_qp_list; int send_qp_list; int * resize_umem; int * resize_buf; int lock; int resize_mutex; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int num_comp_vectors; } ;
struct ib_cq_init_attr {int cqe; int comp_vector; int flags; } ;
typedef int __u32 ;
struct TYPE_20__ {int max_cqes; } ;
struct TYPE_22__ {TYPE_1__ caps; } ;
struct TYPE_21__ {struct mlx4_uar uar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ib_cq* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mlx4_ib_create_cq*,struct ib_udata*,int) ;
 scalar_t__ FUNC_3 (struct ib_udata*,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx4_ib_cq*) ;
 struct mlx4_ib_cq* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_3__*,int,int *,struct mlx4_uar*,int ,TYPE_16__*,int,int ,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_16__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_7__*,int,int ) ;
 int FUNC_10 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_11 (struct mlx4_ib_dev*,TYPE_4__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (TYPE_2__*,int ,TYPE_7__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_7__*) ;
 int FUNC_14 (struct mlx4_ib_dev*,TYPE_4__*,int) ;
 int FUNC_15 (struct mlx4_ib_dev*,struct ib_ucontext*,TYPE_4__*,int *,int ,int) ;
 int FUNC_16 (TYPE_3__*,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *) ;
 struct mlx4_ib_dev* FUNC_20 (struct ib_device*) ;
 TYPE_2__* FUNC_21 (struct ib_ucontext*) ;

struct ib_cq *FUNC_22(struct ib_device *VAR_8,
    const struct ib_cq_init_attr *VAR_9,
    struct ib_ucontext *VAR_10,
    struct ib_udata *VAR_11)
{
 int VAR_12 = VAR_9->cqe;
 int VAR_13 = VAR_9->comp_vector;
 struct mlx4_ib_dev *VAR_14 = FUNC_20(VAR_8);
 struct mlx4_ib_cq *VAR_15;
 struct mlx4_uar *VAR_16;
 int VAR_17;

 if (VAR_12 < 1 || VAR_12 > VAR_14->dev->caps.max_cqes)
  return FUNC_0(-VAR_2);

 if (VAR_9->flags & ~VAR_0)
  return FUNC_0(-VAR_2);

 VAR_15 = FUNC_6(sizeof *VAR_15, VAR_4);
 if (!VAR_15)
  return FUNC_0(-VAR_3);

 VAR_12 = FUNC_18(VAR_12 + 1);
 VAR_15->ibcq.cqe = VAR_12 - 1;
 FUNC_17(&VAR_15->resize_mutex);
 FUNC_19(&VAR_15->lock);
 VAR_15->resize_buf = ((void*)0);
 VAR_15->resize_umem = ((void*)0);
 VAR_15->create_flags = VAR_9->flags;
 FUNC_1(&VAR_15->send_qp_list);
 FUNC_1(&VAR_15->recv_qp_list);

 if (VAR_10) {
  struct mlx4_ib_create_cq VAR_18;

  if (FUNC_2(&VAR_18, VAR_11, sizeof VAR_18)) {
   VAR_17 = -VAR_1;
   goto err_cq;
  }

  VAR_17 = FUNC_15(VAR_14, VAR_10, &VAR_15->buf, &VAR_15->umem,
       VAR_18.buf_addr, VAR_12);
  if (VAR_17)
   goto err_cq;

  VAR_17 = FUNC_12(FUNC_21(VAR_10), VAR_18.db_addr,
       &VAR_15->db);
  if (VAR_17)
   goto err_mtt;

  VAR_16 = &FUNC_21(VAR_10)->uar;
 } else {
  VAR_17 = FUNC_9(VAR_14->dev, &VAR_15->db, 1, VAR_4);
  if (VAR_17)
   goto err_cq;

  VAR_15->mcq.set_ci_db = VAR_15->db.db;
  VAR_15->mcq.arm_db = VAR_15->db.db + 1;
  *VAR_15->mcq.set_ci_db = 0;
  *VAR_15->mcq.arm_db = 0;

  VAR_17 = FUNC_11(VAR_14, &VAR_15->buf, VAR_12);
  if (VAR_17)
   goto err_db;

  VAR_16 = &VAR_14->priv_uar;
 }

 if (VAR_14->eq_table)
  VAR_13 = VAR_14->eq_table[VAR_13 % VAR_8->num_comp_vectors];

 VAR_17 = FUNC_7(VAR_14->dev, VAR_12, &VAR_15->buf.mtt, VAR_16,
       VAR_15->db.dma, &VAR_15->mcq, VAR_13, 0,
       !!(VAR_15->create_flags & VAR_5));
 if (VAR_17)
  goto err_dbmap;

 VAR_15->mcq.comp = VAR_6;
 VAR_15->mcq.event = VAR_7;

 if (VAR_10)
  if (FUNC_3(VAR_11, &VAR_15->mcq.cqn, sizeof (__u32))) {
   VAR_17 = -VAR_1;
   goto err_cq_free;
  }

 return &VAR_15->ibcq;

err_cq_free:
 FUNC_8(VAR_14->dev, &VAR_15->mcq);

err_dbmap:
 if (VAR_10)
  FUNC_13(FUNC_21(VAR_10), &VAR_15->db);

err_mtt:
 FUNC_16(VAR_14->dev, &VAR_15->buf.mtt);

 if (VAR_10)
  FUNC_4(VAR_15->umem);
 else
  FUNC_14(VAR_14, &VAR_15->buf, VAR_15->ibcq.cqe);

err_db:
 if (!VAR_10)
  FUNC_10(VAR_14->dev, &VAR_15->db);

err_cq:
 FUNC_5(VAR_15);

 return FUNC_0(VAR_17);
}
