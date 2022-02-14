
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef size_t u_int ;
struct tx_sw_desc {int dummy; } ;
struct tx_desc {int dummy; } ;
struct TYPE_19__ {int gen; int holdoff_tmr; int cntxt_id; scalar_t__ size; int phys_addr; scalar_t__ cidx; int lockbuf; int lock; int desc_map; int desc_tag; int desc; } ;
struct TYPE_27__ {TYPE_16__* ifp; } ;
struct TYPE_23__ {int enabled; TYPE_5__ ctrl; } ;
struct sge_qset {size_t idx; TYPE_13__ rspq; TYPE_15__* fl; TYPE_2__* txq; TYPE_1__ lro; int lock; TYPE_4__* adap; struct port_info* port; int namebuf; } ;
struct rx_sw_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct rsp_desc {int dummy; } ;
struct qset_params {scalar_t__ jumbo_buf_size; int cong_thres; scalar_t__ rspq_size; scalar_t__ jumbo_size; scalar_t__ fl_size; scalar_t__* txq_size; } ;
struct port_info {TYPE_16__* ifp; } ;
struct ifaltq {int dummy; } ;
struct TYPE_25__ {int reg_lock; struct sge_qset* qs; } ;
struct TYPE_26__ {TYPE_3__ sge; int * tx_dmat; int dev; int * rx_jumbo_dmat; int * rx_dmat; } ;
typedef TYPE_4__ adapter_t ;
struct TYPE_22__ {size_t c_cpu; } ;
struct TYPE_24__ {int gen; int stop_thres; int token; scalar_t__ size; int phys_addr; int cntxt_id; int qreclaim_task; int qresume_task; int sendq; int entry_tag; int desc_map; int desc_tag; int sdesc; int desc; TYPE_17__ txq_watchdog; TYPE_17__ txq_timer; int * txq_ifq; int * txq_mr; } ;
struct TYPE_21__ {int if_capenable; } ;
struct TYPE_20__ {int gen; scalar_t__ buf_size; scalar_t__ size; int phys_addr; int cntxt_id; int type; int zone; int entry_tag; int desc_map; int desc_tag; int sdesc; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int *,int ,int ,struct sge_qset*) ;
 int VAR_22 ;
 size_t VAR_23 ;
 int FUNC_3 (struct sge_qset*) ;
 size_t VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int,size_t,int *,int *,int *,int *,int *,int *,int *) ;
 int * FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (TYPE_17__*,int) ;
 int VAR_27 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,TYPE_16__*) ;
 int FUNC_13 (struct sge_qset*,size_t) ;
 int * FUNC_14 (int,int ,int) ;
 int FUNC_15 (int *,int ) ;
 size_t VAR_28 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,int,...) ;
 int FUNC_19 (TYPE_4__*,TYPE_15__*,scalar_t__) ;
 int FUNC_20 (TYPE_4__*,TYPE_13__*,scalar_t__) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (int ,int ,char*,int,int) ;
 int FUNC_23 (TYPE_4__*,struct sge_qset*) ;
 int FUNC_24 (TYPE_4__*,int ,int ,int ,size_t,int ,scalar_t__,int ,int,int ) ;
 int FUNC_25 (TYPE_4__*,int ,int ,int ,scalar_t__,scalar_t__,int ,int,int ) ;
 int FUNC_26 (TYPE_4__*,int ,int,int ,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_27 (struct sge_qset*,struct qset_params const*) ;
 int FUNC_28 (TYPE_4__*,int ,int) ;
 int FUNC_29 (TYPE_5__*) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;

int
FUNC_30(adapter_t *VAR_36, u_int VAR_37, int VAR_38, int VAR_39,
    const struct qset_params *VAR_40, int VAR_41, struct port_info *VAR_42)
{
 struct sge_qset *VAR_43 = &VAR_36->sge.qs[VAR_37];
 int VAR_44, VAR_45 = 0;

 FUNC_1(&VAR_43->lock, VAR_43->namebuf, ((void*)0), VAR_12);
 VAR_43->port = VAR_42;
 VAR_43->adap = VAR_36;

 if ((VAR_43->txq[VAR_23].txq_mr = FUNC_7(VAR_27,
     VAR_13, VAR_15, &VAR_43->lock)) == ((void*)0)) {
  FUNC_10(VAR_36->dev, "failed to allocate mbuf ring\n");
  goto err;
 }
 if ((VAR_43->txq[VAR_23].txq_ifq = FUNC_14(sizeof(struct ifaltq), VAR_13,
     VAR_14 | VAR_16)) == ((void*)0)) {
  FUNC_10(VAR_36->dev, "failed to allocate ifq\n");
  goto err;
 }
 FUNC_12(VAR_43->txq[VAR_23].txq_ifq, VAR_42->ifp);
 FUNC_8(&VAR_43->txq[VAR_23].txq_timer, 1);
 FUNC_8(&VAR_43->txq[VAR_23].txq_watchdog, 1);
 VAR_43->txq[VAR_23].txq_timer.c_cpu = VAR_37 % VAR_28;
 VAR_43->txq[VAR_23].txq_watchdog.c_cpu = VAR_37 % VAR_28;

 FUNC_13(VAR_43, VAR_37);
 VAR_43->idx = VAR_37;
 if ((VAR_45 = FUNC_6(VAR_36, VAR_40->fl_size, sizeof(struct rx_desc),
      sizeof(struct rx_sw_desc), &VAR_43->fl[0].phys_addr,
      &VAR_43->fl[0].desc, &VAR_43->fl[0].sdesc,
      &VAR_43->fl[0].desc_tag, &VAR_43->fl[0].desc_map,
      VAR_36->rx_dmat, &VAR_43->fl[0].entry_tag)) != 0) {
  FUNC_18("error %d from alloc ring fl0\n", VAR_45);
  goto err;
 }

 if ((VAR_45 = FUNC_6(VAR_36, VAR_40->jumbo_size, sizeof(struct rx_desc),
      sizeof(struct rx_sw_desc), &VAR_43->fl[1].phys_addr,
      &VAR_43->fl[1].desc, &VAR_43->fl[1].sdesc,
      &VAR_43->fl[1].desc_tag, &VAR_43->fl[1].desc_map,
      VAR_36->rx_jumbo_dmat, &VAR_43->fl[1].entry_tag)) != 0) {
  FUNC_18("error %d from alloc ring fl1\n", VAR_45);
  goto err;
 }

 if ((VAR_45 = FUNC_6(VAR_36, VAR_40->rspq_size, sizeof(struct rsp_desc), 0,
      &VAR_43->rspq.phys_addr, &VAR_43->rspq.desc, ((void*)0),
      &VAR_43->rspq.desc_tag, &VAR_43->rspq.desc_map,
      ((void*)0), ((void*)0))) != 0) {
  FUNC_18("error %d from alloc ring rspq\n", VAR_45);
  goto err;
 }

 FUNC_22(VAR_43->rspq.lockbuf, VAR_17, "t3 rspq lock %d:%d",
     FUNC_9(VAR_36->dev), VAR_39);
 FUNC_1(&VAR_43->rspq.lock, VAR_43->rspq.lockbuf, ((void*)0), VAR_12);

 for (VAR_44 = 0; VAR_44 < VAR_41; ++VAR_44) {
  size_t VAR_46 = VAR_44 == VAR_22 ? 0 : sizeof(struct tx_sw_desc);

  if ((VAR_45 = FUNC_6(VAR_36, VAR_40->txq_size[VAR_44],
       sizeof(struct tx_desc), VAR_46,
       &VAR_43->txq[VAR_44].phys_addr, &VAR_43->txq[VAR_44].desc,
       &VAR_43->txq[VAR_44].sdesc, &VAR_43->txq[VAR_44].desc_tag,
       &VAR_43->txq[VAR_44].desc_map,
       VAR_36->tx_dmat, &VAR_43->txq[VAR_44].entry_tag)) != 0) {
   FUNC_18("error %d from alloc ring tx %i\n", VAR_45, VAR_44);
   goto err;
  }
  FUNC_15(&VAR_43->txq[VAR_44].sendq, VAR_7);
  VAR_43->txq[VAR_44].gen = 1;
  VAR_43->txq[VAR_44].size = VAR_40->txq_size[VAR_44];
 }




 FUNC_2(&VAR_43->txq[VAR_22].qresume_task, 0, VAR_29, VAR_43);
 FUNC_2(&VAR_43->txq[VAR_23].qreclaim_task, 0, VAR_31, VAR_43);
 FUNC_2(&VAR_43->txq[VAR_24].qreclaim_task, 0, VAR_31, VAR_43);

 VAR_43->fl[0].gen = VAR_43->fl[1].gen = 1;
 VAR_43->fl[0].size = VAR_40->fl_size;
 VAR_43->fl[1].size = VAR_40->jumbo_size;

 VAR_43->rspq.gen = 1;
 VAR_43->rspq.cidx = 0;
 VAR_43->rspq.size = VAR_40->rspq_size;

 VAR_43->txq[VAR_23].stop_thres = VAR_38 *
     FUNC_11(FUNC_21(VAR_25 + 1) + 3);

 VAR_43->fl[0].buf_size = VAR_8;
 VAR_43->fl[0].zone = VAR_35;
 VAR_43->fl[0].type = VAR_5;

 if (VAR_40->jumbo_buf_size == VAR_9) {
  VAR_43->fl[1].zone = VAR_32;
  VAR_43->fl[1].type = VAR_2;
 } else if (VAR_40->jumbo_buf_size == VAR_10) {
  VAR_43->fl[1].zone = VAR_33;
  VAR_43->fl[1].type = VAR_3;
 } else if (VAR_40->jumbo_buf_size == VAR_11) {
  VAR_43->fl[1].zone = VAR_34;
  VAR_43->fl[1].type = VAR_4;
 } else {
  FUNC_0(0, ("can't deal with jumbo_buf_size %d.", VAR_40->jumbo_buf_size));
  VAR_45 = VAR_1;
  goto err;
 }
 VAR_43->fl[1].buf_size = VAR_40->jumbo_buf_size;


 VAR_43->lro.enabled = !!(VAR_42->ifp->if_capenable & VAR_6);







 VAR_43->lro.ctrl.ifp = VAR_42->ifp;

 FUNC_16(&VAR_36->sge.reg_lock);
 VAR_45 = -FUNC_26(VAR_36, VAR_43->rspq.cntxt_id, VAR_39,
       VAR_43->rspq.phys_addr, VAR_43->rspq.size,
       VAR_43->fl[0].buf_size, 1, 0);
 if (VAR_45) {
  FUNC_18("error %d from t3_sge_init_rspcntxt\n", VAR_45);
  goto err_unlock;
 }

 for (VAR_44 = 0; VAR_44 < VAR_21; ++VAR_44) {
  VAR_45 = -FUNC_25(VAR_36, VAR_43->fl[VAR_44].cntxt_id, 0,
       VAR_43->fl[VAR_44].phys_addr, VAR_43->fl[VAR_44].size,
       VAR_43->fl[VAR_44].buf_size, VAR_40->cong_thres, 1,
       0);
  if (VAR_45) {
   FUNC_18("error %d from t3_sge_init_flcntxt for index i=%d\n", VAR_45, VAR_44);
   goto err_unlock;
  }
 }

 VAR_45 = -FUNC_24(VAR_36, VAR_43->txq[VAR_23].cntxt_id, VAR_26,
     VAR_19, VAR_37, VAR_43->txq[VAR_23].phys_addr,
     VAR_43->txq[VAR_23].size, VAR_43->txq[VAR_23].token,
     1, 0);
 if (VAR_45) {
  FUNC_18("error %d from t3_sge_init_ecntxt\n", VAR_45);
  goto err_unlock;
 }

 if (VAR_41 > 1) {
  VAR_45 = -FUNC_24(VAR_36, VAR_43->txq[VAR_24].cntxt_id,
      VAR_26, VAR_20, VAR_37,
      VAR_43->txq[VAR_24].phys_addr,
      VAR_43->txq[VAR_24].size, 0, 1, 0);
  if (VAR_45) {
   FUNC_18("error %d from t3_sge_init_ecntxt\n", VAR_45);
   goto err_unlock;
  }
 }

 if (VAR_41 > 2) {
  VAR_45 = -FUNC_24(VAR_36, VAR_43->txq[VAR_22].cntxt_id, 0,
      VAR_18, VAR_37,
      VAR_43->txq[VAR_22].phys_addr,
      VAR_43->txq[VAR_22].size,
      VAR_43->txq[VAR_22].token, 1, 0);
  if (VAR_45) {
   FUNC_18("error %d from t3_sge_init_ecntxt\n", VAR_45);
   goto err_unlock;
  }
 }

 FUNC_17(&VAR_36->sge.reg_lock);
 FUNC_27(VAR_43, VAR_40);

 FUNC_19(VAR_36, &VAR_43->fl[0], VAR_43->fl[0].size);
 FUNC_19(VAR_36, &VAR_43->fl[1], VAR_43->fl[1].size);
 FUNC_20(VAR_36, &VAR_43->rspq, VAR_43->rspq.size - 1);

 FUNC_28(VAR_36, VAR_0, FUNC_5(VAR_43->rspq.cntxt_id) |
       FUNC_4(VAR_43->rspq.holdoff_tmr));

 return (0);

err_unlock:
 FUNC_17(&VAR_36->sge.reg_lock);
err:
 FUNC_3(VAR_43);
 FUNC_23(VAR_36, VAR_43);

 return (VAR_45);
}
