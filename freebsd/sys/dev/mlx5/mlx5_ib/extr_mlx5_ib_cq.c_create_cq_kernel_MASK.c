
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u32 ;
struct mlx5_ib_dev {TYPE_6__* mdev; } ;
struct TYPE_20__ {scalar_t__ db; } ;
struct TYPE_18__ {int npages; scalar_t__ page_shift; } ;
struct TYPE_13__ {TYPE_5__ buf; } ;
struct TYPE_14__ {int cqe_sz; scalar_t__ arm_db; scalar_t__ set_ci_db; } ;
struct mlx5_ib_cq {TYPE_7__ db; TYPE_10__ buf; TYPE_1__ mcq; } ;
typedef int __be64 ;
struct TYPE_16__ {TYPE_2__* uars; } ;
struct TYPE_17__ {TYPE_3__ uuari; } ;
struct TYPE_19__ {TYPE_4__ priv; } ;
struct TYPE_15__ {int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,void*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_ib_dev*,TYPE_10__*,int,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct mlx5_ib_dev*,TYPE_10__*) ;
 int FUNC_6 (struct mlx5_ib_cq*,TYPE_10__*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int * FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct mlx5_ib_dev *VAR_5, struct mlx5_ib_cq *VAR_6,
       int VAR_7, int VAR_8,
       u32 **VAR_9, int *VAR_10, int *VAR_11)
{
 __be64 *VAR_12;
 void *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_7(VAR_5->mdev, &VAR_6->db);
 if (VAR_14)
  return VAR_14;

 VAR_6->mcq.set_ci_db = VAR_6->db.db;
 VAR_6->mcq.arm_db = VAR_6->db.db + 1;
 VAR_6->mcq.cqe_sz = VAR_8;

 VAR_14 = FUNC_4(VAR_5, &VAR_6->buf, VAR_7, VAR_8);
 if (VAR_14)
  goto err_db;

 FUNC_6(VAR_6, &VAR_6->buf);

 *VAR_11 = FUNC_3(VAR_3) +
   FUNC_1(VAR_3, VAR_12[0]) * VAR_6->buf.buf.npages;
 *VAR_9 = FUNC_10(*VAR_11);
 if (!*VAR_9) {
  VAR_14 = -VAR_0;
  goto err_buf;
 }

 VAR_12 = (__be64 *)FUNC_0(VAR_3, *VAR_9, VAR_12);
 FUNC_9(&VAR_6->buf.buf, VAR_12);

 VAR_13 = FUNC_0(VAR_3, *VAR_9, VAR_2);
 FUNC_2(VAR_13, VAR_13, VAR_4,
   VAR_6->buf.buf.page_shift - VAR_1);

 *VAR_10 = VAR_5->mdev->priv.uuari.uars[0].index;

 return 0;

err_buf:
 FUNC_5(VAR_5, &VAR_6->buf);

err_db:
 FUNC_8(VAR_5->mdev, &VAR_6->db);
 return VAR_14;
}
