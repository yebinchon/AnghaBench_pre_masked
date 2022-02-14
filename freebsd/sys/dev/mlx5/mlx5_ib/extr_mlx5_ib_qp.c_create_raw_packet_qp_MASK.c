
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_ucontext {int tdn; } ;
struct TYPE_14__ {int qpn; } ;
struct TYPE_15__ {TYPE_5__ mqp; struct mlx5_ib_qp* container_mibqp; } ;
struct mlx5_ib_sq {TYPE_6__ base; } ;
struct TYPE_16__ {int qpn; } ;
struct TYPE_17__ {TYPE_7__ mqp; struct mlx5_ib_qp* container_mibqp; } ;
struct mlx5_ib_rq {TYPE_8__ base; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_rq rq; struct mlx5_ib_sq sq; } ;
struct TYPE_18__ {scalar_t__ wqe_cnt; } ;
struct TYPE_11__ {int qpn; } ;
struct TYPE_12__ {TYPE_2__ mqp; } ;
struct TYPE_13__ {TYPE_3__ base; } ;
struct TYPE_10__ {scalar_t__ wqe_cnt; } ;
struct mlx5_ib_qp {TYPE_9__ sq; TYPE_4__ trans_qp; TYPE_1__ rq; struct mlx5_ib_raw_packet_qp raw_packet_qp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_uobject {struct ib_ucontext* context; } ;
struct ib_ucontext {int dummy; } ;
struct ib_pd {struct ib_uobject* uobject; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_rq*,int *) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_sq*,int *,struct ib_pd*) ;
 int FUNC_2 (struct mlx5_ib_dev*,struct mlx5_ib_rq*,int ) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_sq*,int ) ;
 int FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_rq*) ;
 int FUNC_5 (struct mlx5_ib_dev*,struct mlx5_ib_sq*) ;
 int FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_sq*) ;
 struct mlx5_ib_ucontext* FUNC_7 (struct ib_ucontext*) ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_qp *VAR_1,
    u32 *VAR_2,
    struct ib_pd *VAR_3)
{
 struct mlx5_ib_raw_packet_qp *VAR_4 = &VAR_1->raw_packet_qp;
 struct mlx5_ib_sq *VAR_5 = &VAR_4->sq;
 struct mlx5_ib_rq *VAR_6 = &VAR_4->rq;
 struct ib_uobject *VAR_7 = VAR_3->uobject;
 struct ib_ucontext *VAR_8 = VAR_7->context;
 struct mlx5_ib_ucontext *VAR_9 = FUNC_7(VAR_8);
 int VAR_10;
 u32 VAR_11 = VAR_9->tdn;

 if (VAR_1->sq.wqe_cnt) {
  VAR_10 = FUNC_3(VAR_0, VAR_5, VAR_11);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_1(VAR_0, VAR_5, VAR_2, VAR_3);
  if (VAR_10)
   goto err_destroy_tis;

  VAR_5->base.container_mibqp = VAR_1;
 }

 if (VAR_1->rq.wqe_cnt) {
  VAR_6->base.container_mibqp = VAR_1;

  VAR_10 = FUNC_0(VAR_0, VAR_6, VAR_2);
  if (VAR_10)
   goto err_destroy_sq;


  VAR_10 = FUNC_2(VAR_0, VAR_6, VAR_11);
  if (VAR_10)
   goto err_destroy_rq;
 }

 VAR_1->trans_qp.base.mqp.qpn = VAR_1->sq.wqe_cnt ? VAR_5->base.mqp.qpn :
           VAR_6->base.mqp.qpn;

 return 0;

err_destroy_rq:
 FUNC_4(VAR_0, VAR_6);
err_destroy_sq:
 if (!VAR_1->sq.wqe_cnt)
  return VAR_10;
 FUNC_5(VAR_0, VAR_5);
err_destroy_tis:
 FUNC_6(VAR_0, VAR_5);

 return VAR_10;
}
