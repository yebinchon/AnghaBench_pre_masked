
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_ib_demux_pv_ctx {scalar_t__ state; int has_smi; int * cq; int * pd; TYPE_3__* qp; int * wq; int work; int ib_dev; int port; } ;
struct ib_device {int dummy; } ;
struct ib_cq_init_attr {int cqe; } ;
struct TYPE_6__ {TYPE_1__* demux; } ;
struct TYPE_8__ {TYPE_2__ sriov; } ;
struct TYPE_7__ {int * qp; } ;
struct TYPE_5__ {int * wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_ib_demux_pv_ctx*,int ,int) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ,int *,struct mlx4_ib_demux_pv_ctx*,struct ib_cq_init_attr*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct mlx4_ib_demux_pv_ctx*,int ,int) ;
 int FUNC_11 (struct mlx4_ib_demux_pv_ctx*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (struct ib_device*,int ) ;
 TYPE_4__* FUNC_14 (struct ib_device*) ;

__attribute__((used)) static int FUNC_15(struct ib_device *VAR_12, int VAR_13, int VAR_14,
          int VAR_15, struct mlx4_ib_demux_pv_ctx *VAR_16)
{
 int VAR_17, VAR_18;
 struct ib_cq_init_attr VAR_19 = {};

 if (VAR_16->state != VAR_1)
  return -VAR_3;

 VAR_16->state = VAR_2;

 if (FUNC_13(VAR_12, VAR_16->port) ==
     VAR_5)
  VAR_16->has_smi = 1;

 if (VAR_16->has_smi) {
  VAR_17 = FUNC_10(VAR_16, VAR_7, VAR_15);
  if (VAR_17) {
   FUNC_12("Failed allocating qp0 tunnel bufs (%d)\n", VAR_17);
   goto err_out;
  }
 }

 VAR_17 = FUNC_10(VAR_16, VAR_6, VAR_15);
 if (VAR_17) {
  FUNC_12("Failed allocating qp1 tunnel bufs (%d)\n", VAR_17);
  goto err_out_qp0;
 }

 VAR_18 = 2 * VAR_8;
 if (VAR_16->has_smi)
  VAR_18 *= 2;

 VAR_19.cqe = VAR_18;
 VAR_16->cq = FUNC_5(VAR_16->ib_dev, VAR_10,
          ((void*)0), VAR_16, &VAR_19);
 if (FUNC_1(VAR_16->cq)) {
  VAR_17 = FUNC_2(VAR_16->cq);
  FUNC_12("Couldn't create tunnel CQ (%d)\n", VAR_17);
  goto err_buf;
 }

 VAR_16->pd = FUNC_4(VAR_16->ib_dev, 0);
 if (FUNC_1(VAR_16->pd)) {
  VAR_17 = FUNC_2(VAR_16->pd);
  FUNC_12("Couldn't create tunnel PD (%d)\n", VAR_17);
  goto err_cq;
 }

 if (VAR_16->has_smi) {
  VAR_17 = FUNC_3(VAR_16, VAR_7, VAR_15);
  if (VAR_17) {
   FUNC_12("Couldn't create %s QP0 (%d)\n",
          VAR_15 ? "tunnel for" : "", VAR_17);
   goto err_pd;
  }
 }

 VAR_17 = FUNC_3(VAR_16, VAR_6, VAR_15);
 if (VAR_17) {
  FUNC_12("Couldn't create %s QP1 (%d)\n",
         VAR_15 ? "tunnel for" : "", VAR_17);
  goto err_qp0;
 }

 if (VAR_15)
  FUNC_0(&VAR_16->work, VAR_11);
 else
  FUNC_0(&VAR_16->work, VAR_9);

 VAR_16->wq = FUNC_14(VAR_12)->sriov.demux[VAR_14 - 1].wq;

 VAR_17 = FUNC_9(VAR_16->cq, VAR_4);
 if (VAR_17) {
  FUNC_12("Couldn't arm tunnel cq (%d)\n", VAR_17);
  goto err_wq;
 }
 VAR_16->state = VAR_0;
 return 0;

err_wq:
 VAR_16->wq = ((void*)0);
 FUNC_8(VAR_16->qp[1].qp);
 VAR_16->qp[1].qp = ((void*)0);


err_qp0:
 if (VAR_16->has_smi)
  FUNC_8(VAR_16->qp[0].qp);
 VAR_16->qp[0].qp = ((void*)0);

err_pd:
 FUNC_6(VAR_16->pd);
 VAR_16->pd = ((void*)0);

err_cq:
 FUNC_7(VAR_16->cq);
 VAR_16->cq = ((void*)0);

err_buf:
 FUNC_11(VAR_16, VAR_6, VAR_15);

err_out_qp0:
 if (VAR_16->has_smi)
  FUNC_11(VAR_16, VAR_7, VAR_15);
err_out:
 VAR_16->state = VAR_1;
 return VAR_17;
}
