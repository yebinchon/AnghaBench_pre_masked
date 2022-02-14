
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct TYPE_16__ {scalar_t__ lo; scalar_t__ hi; } ;
struct rdma_rq_sge {int flags; scalar_t__ length; TYPE_3__ addr; } ;
struct TYPE_21__ {int raw; } ;
struct TYPE_18__ {int value; } ;
struct TYPE_19__ {int raw; TYPE_5__ data; } ;
struct TYPE_13__ {int max_sges; size_t prod; TYPE_8__ iwarp_db2_data; scalar_t__ iwarp_db2; TYPE_6__ db_data; scalar_t__ db; int pbl; } ;
struct qlnxr_qp {scalar_t__ qp_type; scalar_t__ state; int q_lock; TYPE_10__ rq; TYPE_4__* rqe_wr_id; scalar_t__ srq; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {TYPE_9__* ha; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* next; int wr_id; TYPE_2__* sg_list; } ;
struct ib_qp {int dummy; } ;
struct TYPE_20__ {scalar_t__ doorbells; } ;
struct TYPE_22__ {int pci_dbells; TYPE_7__ cdev; TYPE_1__* ifp; } ;
typedef TYPE_9__ qlnx_host_t ;
struct TYPE_17__ {int wqe_size; int wr_id; } ;
struct TYPE_15__ {int lkey; int length; int addr; } ;
struct TYPE_14__ {int if_drv_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (TYPE_9__*,char*,...) ;
 int FUNC_2 (TYPE_9__*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct rdma_rq_sge*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 struct rdma_rq_sge* FUNC_9 (int *) ;
 struct qlnxr_qp* FUNC_10 (struct ib_qp*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct ib_qp*,struct ib_recv_wr*,struct ib_recv_wr**) ;
 int FUNC_13 (TYPE_10__*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 () ;

int
FUNC_17(struct ib_qp *VAR_9,
 struct ib_recv_wr *VAR_10,
 struct ib_recv_wr **VAR_11)
{
  struct qlnxr_qp *VAR_12 = FUNC_10(VAR_9);
 struct qlnxr_dev *VAR_13 = VAR_12->dev;
 unsigned long VAR_14;
 int VAR_15 = 0;
 qlnx_host_t *VAR_16;
 uint32_t VAR_17;

 VAR_16 = VAR_13->ha;

 if (!(VAR_16->ifp->if_drv_flags & VAR_5))
  return -VAR_2;

 FUNC_2(VAR_16, "enter\n");

 if (VAR_12->qp_type == VAR_4) {
  FUNC_2(VAR_16, "(qp->qp_type = IB_QPT_GSI)\n");
  return FUNC_12(VAR_9, VAR_10, VAR_11);
 }

 if (VAR_12->srq) {
  FUNC_1(VAR_16, "qp->srq [%p]"
   " QP is associated with SRQ, cannot post RQ buffers\n",
   VAR_12->srq);
  return -VAR_2;
 }

 FUNC_14(&VAR_12->q_lock, VAR_14);

 if (VAR_12->state == VAR_1) {
  FUNC_15(&VAR_12->q_lock, VAR_14);
  *VAR_11 = VAR_10;

  FUNC_1(VAR_16, "qp->qp_type = ECORE_ROCE_QP_STATE_RESET\n");

  return -VAR_2;
 }

 while (VAR_10) {
  int VAR_18;

  if ((FUNC_8(&VAR_12->rq.pbl) <
   VAR_6) ||
   (VAR_10->num_sge > VAR_12->rq.max_sges)) {
   VAR_15 = -VAR_3;
   *VAR_11 = VAR_10;
   break;
  }
  for (VAR_18 = 0; VAR_18 < VAR_10->num_sge; VAR_18++) {
   u32 VAR_19 = 0;
   struct rdma_rq_sge *VAR_20 = FUNC_9(&VAR_12->rq.pbl);


   if (!VAR_18)
    FUNC_4(VAR_19, VAR_8, VAR_10->num_sge);

   FUNC_4(VAR_19, VAR_7, VAR_10->sg_list[VAR_18].lkey);

   FUNC_3(VAR_20, VAR_10->sg_list[VAR_18].addr, VAR_10->sg_list[VAR_18].length, VAR_19);

  }



  if (!VAR_10->num_sge) {
   u32 VAR_21 = 0;
   struct rdma_rq_sge *VAR_22 = FUNC_9(&VAR_12->rq.pbl);


   FUNC_4(VAR_21, VAR_7, 0);
   FUNC_4(VAR_21, VAR_8, 1);


   VAR_22->addr.hi = 0;
   VAR_22->addr.lo = 0;

   VAR_22->length = 0;
   VAR_22->flags = FUNC_7(VAR_21);

   VAR_18 = 1;
  }

  VAR_12->rqe_wr_id[VAR_12->rq.prod].wr_id = VAR_10->wr_id;
  VAR_12->rqe_wr_id[VAR_12->rq.prod].wqe_size = VAR_18;

  FUNC_13(&VAR_12->rq);

  FUNC_16();

  VAR_12->rq.db_data.data.value++;


  FUNC_11();





  VAR_17 = (uint32_t)((uint8_t *)VAR_12->rq.db -
    (uint8_t *)VAR_16->cdev.doorbells);

  FUNC_6(VAR_16->pci_dbells, VAR_17, VAR_12->rq.db_data.raw);
  FUNC_5(VAR_16->pci_dbells, 0, 0, VAR_0);

  if (FUNC_0(VAR_13)) {
   VAR_17 = (uint32_t)((uint8_t *)VAR_12->rq.iwarp_db2 -
      (uint8_t *)VAR_16->cdev.doorbells);
   FUNC_6(VAR_16->pci_dbells, VAR_17, VAR_12->rq.iwarp_db2_data.raw);

   FUNC_5(VAR_16->pci_dbells, 0, 0, VAR_0);

  }

  VAR_10 = VAR_10->next;
 }

 FUNC_15(&VAR_12->q_lock, VAR_14);

 FUNC_2(VAR_16, "exit status = 0x%x\n", VAR_15);

 return VAR_15;
}
