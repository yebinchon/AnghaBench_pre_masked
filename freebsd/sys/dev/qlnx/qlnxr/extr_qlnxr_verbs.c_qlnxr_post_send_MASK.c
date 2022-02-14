
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct rdma_sq_send_wqe {int wqe_size; void* length; void* inv_key_or_imm_data; } ;
struct rdma_sq_rdma_wqe_2nd {int dummy; } ;
struct rdma_sq_rdma_wqe_1st {int wqe_size; void* length; int imm_data; } ;
struct rdma_sq_local_inv_wqe {int prev_wqe_size; int inv_l_key; int req_type; } ;
struct rdma_sq_fmr_wqe_1st {int wqe_size; int prev_wqe_size; } ;
struct rdma_sq_common_wqe {int flags; int prev_wqe_size; void* req_type; } ;
struct rdma_sq_atomic_wqe {int prev_wqe_size; void* r_key; } ;
struct TYPE_15__ {int value; } ;
struct TYPE_17__ {int raw; TYPE_4__ data; } ;
struct TYPE_19__ {size_t prod; TYPE_6__ db_data; scalar_t__ db; int pbl; } ;
struct qlnxr_qp {scalar_t__ qp_type; scalar_t__ state; int prev_wqe_size; int q_lock; TYPE_8__ sq; TYPE_3__* wqe_wr_id; scalar_t__ signaled; int icid; } ;
struct qlnxr_dev {TYPE_7__* ha; } ;
struct TYPE_13__ {int invalidate_rkey; int imm_data; } ;
struct ib_send_wr {int send_flags; int opcode; struct ib_send_wr* next; int wr_id; TYPE_2__ ex; } ;
struct ib_qp {int device; } ;
struct TYPE_16__ {scalar_t__ doorbells; } ;
struct TYPE_18__ {int pci_dbells; TYPE_5__ cdev; TYPE_1__* ifp; } ;
typedef TYPE_7__ qlnx_host_t ;
struct TYPE_20__ {int compare_add; int swap; int rkey; int remote_addr; } ;
struct TYPE_14__ {int signaled; int wqe_size; int wr_id; void* bytes_len; int opcode; } ;
struct TYPE_12__ {int if_drv_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct qlnxr_dev*) ;
 int FUNC_1 (TYPE_7__*,char*,...) ;
 int FUNC_2 (TYPE_7__*,char*,...) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct rdma_sq_atomic_wqe*,int ,int ) ;
 TYPE_9__* FUNC_5 (struct ib_send_wr*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int VAR_26 ;
 void* FUNC_8 (int ) ;
 struct rdma_sq_common_wqe* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,struct rdma_sq_common_wqe*) ;
 struct qlnxr_dev* FUNC_11 (int ) ;
 struct qlnxr_qp* FUNC_12 (struct ib_qp*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct qlnxr_qp*,struct ib_send_wr*) ;
 int FUNC_17 (struct ib_qp*,struct ib_send_wr*,struct ib_send_wr**) ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_8__*) ;
 int FUNC_20 (struct qlnxr_qp*,struct rdma_sq_fmr_wqe_1st*,struct ib_send_wr*) ;
 int FUNC_21 (struct qlnxr_qp*,struct rdma_sq_fmr_wqe_1st*,int ) ;
 int FUNC_22 (struct qlnxr_dev*,struct qlnxr_qp*,struct rdma_sq_rdma_wqe_1st*,struct rdma_sq_rdma_wqe_2nd*,struct ib_send_wr*,struct ib_send_wr**) ;
 int FUNC_23 (struct qlnxr_dev*,struct qlnxr_qp*,struct rdma_sq_send_wqe*,struct rdma_sq_send_wqe*,struct ib_send_wr*,struct ib_send_wr**) ;
 int FUNC_24 (struct qlnxr_dev*,struct qlnxr_qp*,int *,struct ib_send_wr*) ;
 int FUNC_25 (struct ib_send_wr*) ;
 int VAR_27 ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,unsigned long) ;
 int VAR_28 ;
 int FUNC_28 () ;

int
FUNC_29(struct ib_qp *VAR_29,
 struct ib_send_wr *VAR_30,
 struct ib_send_wr **VAR_31)
{
 struct qlnxr_dev *VAR_32 = FUNC_11(VAR_29->device);
 struct qlnxr_qp *VAR_33 = FUNC_12(VAR_29);
 unsigned long VAR_34;
 int VAR_35 = 0, VAR_36 = 0;
 bool VAR_37;
 qlnx_host_t *VAR_38;
 uint32_t VAR_39;

 *VAR_31 = ((void*)0);
 VAR_38 = VAR_32->ha;

 FUNC_2(VAR_38, "exit[ibqp, wr, bad_wr] = [%p, %p, %p]\n",
  VAR_29, VAR_30, VAR_31);

 if (!(VAR_38->ifp->if_drv_flags & VAR_10))
  return -VAR_4;

 if (VAR_33->qp_type == VAR_6)
  return FUNC_17(VAR_29, VAR_30, VAR_31);

 FUNC_26(&VAR_33->q_lock, VAR_34);

 if (FUNC_0(VAR_32) && (VAR_33->state != VAR_2) &&
     (VAR_33->state != VAR_1) &&
     (VAR_33->state != VAR_3)) {
  FUNC_27(&VAR_33->q_lock, VAR_34);
  *VAR_31 = VAR_30;
  FUNC_1(VAR_38, "QP in wrong state! QP icid=0x%x state %d\n",
   VAR_33->icid, VAR_33->state);
  return -VAR_4;
 }

 if (!VAR_30) {
  FUNC_1(VAR_38, "Got an empty post send???\n");
 }

 while (VAR_30) {
  struct rdma_sq_common_wqe *VAR_40;
  struct rdma_sq_send_wqe *VAR_41;
  struct rdma_sq_send_wqe *VAR_42;
  struct rdma_sq_rdma_wqe_1st *VAR_43;
  struct rdma_sq_rdma_wqe_2nd *VAR_44;
  struct rdma_sq_local_inv_wqe *VAR_45;
  struct rdma_sq_atomic_wqe *VAR_46;
  struct rdma_sq_atomic_wqe *VAR_47;
  struct rdma_sq_atomic_wqe *VAR_48;
  struct rdma_sq_fmr_wqe_1st *VAR_49;

  if (!FUNC_16(VAR_33, VAR_30)) {
   VAR_35 = -VAR_5;
   *VAR_31 = VAR_30;
   break;
  }

  VAR_40 = FUNC_9(&VAR_33->sq.pbl);

  VAR_33->wqe_wr_id[VAR_33->sq.prod].signaled =
   !!(VAR_30->send_flags & VAR_8) || VAR_33->signaled;


  VAR_40->flags = 0;
  VAR_40->flags |= (VAR_22 <<
    VAR_23);

  FUNC_3(VAR_40->flags, VAR_25, !!(VAR_30->send_flags & VAR_9));


  VAR_37 = (!!(VAR_30->send_flags & VAR_8)) ||
    (VAR_33->signaled);

  FUNC_3(VAR_40->flags, VAR_21, VAR_37);
  FUNC_3(VAR_40->flags, VAR_24, !!(VAR_30->send_flags & VAR_7));


  VAR_40->prev_wqe_size = VAR_33->prev_wqe_size;

  VAR_33->wqe_wr_id[VAR_33->sq.prod].opcode = FUNC_18(VAR_30->opcode);


  switch (VAR_30->opcode) {

  case 129:

   VAR_40->req_type = VAR_19;
   VAR_41 = (struct rdma_sq_send_wqe *)VAR_40;
   VAR_41->wqe_size = 2;
   VAR_42 = (struct rdma_sq_send_wqe *)
     FUNC_9(&VAR_33->sq.pbl);
   VAR_41->inv_key_or_imm_data =
    FUNC_8(VAR_30->ex.imm_data);
   VAR_41->length = FUNC_8(
      FUNC_23(VAR_32,
       VAR_33, VAR_41, VAR_42, VAR_30,
       VAR_31));

   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_41->wqe_size;
   VAR_33->prev_wqe_size = VAR_41->wqe_size;
   VAR_33->wqe_wr_id[VAR_33->sq.prod].bytes_len = VAR_41->length;

   FUNC_2(VAR_38, "SEND w/ IMM length = %d imm data=%x\n",
    VAR_41->length, VAR_30->ex.imm_data);

   break;

  case 130:

   VAR_40->req_type = VAR_18;
   VAR_41 = (struct rdma_sq_send_wqe *)VAR_40;

   VAR_41->wqe_size = 2;
   VAR_42 = (struct rdma_sq_send_wqe *)
     FUNC_9(&VAR_33->sq.pbl);
   VAR_41->length = FUNC_8(
      FUNC_23(VAR_32,
       VAR_33, VAR_41, VAR_42, VAR_30,
       VAR_31));
   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_41->wqe_size;
   VAR_33->prev_wqe_size = VAR_41->wqe_size;
   VAR_33->wqe_wr_id[VAR_33->sq.prod].bytes_len = VAR_41->length;

   FUNC_2(VAR_38, "SEND w/o IMM length = %d\n",
    VAR_41->length);

   break;

  case 128:

   VAR_40->req_type = VAR_20;
   VAR_41 = (struct rdma_sq_send_wqe *)VAR_40;
   VAR_42 = (struct rdma_sq_send_wqe *)
     FUNC_9(&VAR_33->sq.pbl);
   VAR_41->wqe_size = 2;
   VAR_41->inv_key_or_imm_data =
    FUNC_8(VAR_30->ex.invalidate_rkey);
   VAR_41->length = FUNC_8(FUNC_23(VAR_32,
      VAR_33, VAR_41, VAR_42, VAR_30, VAR_31));
   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_41->wqe_size;
   VAR_33->prev_wqe_size = VAR_41->wqe_size;
   VAR_33->wqe_wr_id[VAR_33->sq.prod].bytes_len = VAR_41->length;

   FUNC_2(VAR_38, "SEND w INVALIDATE length = %d\n",
    VAR_41->length);
   break;

  case 132:

   VAR_40->req_type = VAR_17;
   VAR_43 = (struct rdma_sq_rdma_wqe_1st *)VAR_40;

   VAR_43->wqe_size = 2;
   VAR_43->imm_data = FUNC_13(FUNC_8(VAR_30->ex.imm_data));
   VAR_44 = (struct rdma_sq_rdma_wqe_2nd *)
     FUNC_9(&VAR_33->sq.pbl);
   VAR_43->length = FUNC_8(FUNC_22(VAR_32,
      VAR_33, VAR_43, VAR_44, VAR_30, VAR_31));
   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_43->wqe_size;
   VAR_33->prev_wqe_size = VAR_43->wqe_size;
   VAR_33->wqe_wr_id[VAR_33->sq.prod].bytes_len = VAR_43->length;

   FUNC_2(VAR_38,
    "RDMA WRITE w/ IMM length = %d imm data=%x\n",
    VAR_43->length, VAR_43->imm_data);

   break;

  case 133:

   VAR_40->req_type = VAR_16;
   VAR_43 = (struct rdma_sq_rdma_wqe_1st *)VAR_40;

   VAR_43->wqe_size = 2;
   VAR_44 = (struct rdma_sq_rdma_wqe_2nd *)
     FUNC_9(&VAR_33->sq.pbl);
   VAR_43->length = FUNC_8(FUNC_22(VAR_32,
      VAR_33, VAR_43, VAR_44, VAR_30, VAR_31));
   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_43->wqe_size;
   VAR_33->prev_wqe_size = VAR_43->wqe_size;
   VAR_33->wqe_wr_id[VAR_33->sq.prod].bytes_len = VAR_43->length;

   FUNC_2(VAR_38,
    "RDMA WRITE w/o IMM length = %d\n",
    VAR_43->length);

   break;

  case 134:

   FUNC_2(VAR_38,
    "RDMA READ WITH INVALIDATE not supported\n");

   *VAR_31 = VAR_30;
   VAR_36 = -VAR_4;

   break;

  case 135:

   VAR_40->req_type = VAR_15;
   VAR_43 = (struct rdma_sq_rdma_wqe_1st *)VAR_40;

   VAR_43->wqe_size = 2;
   VAR_44 = (struct rdma_sq_rdma_wqe_2nd *)
     FUNC_9(&VAR_33->sq.pbl);
   VAR_43->length = FUNC_8(FUNC_22(VAR_32,
      VAR_33, VAR_43, VAR_44, VAR_30, VAR_31));

   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_43->wqe_size;
   VAR_33->prev_wqe_size = VAR_43->wqe_size;
   VAR_33->wqe_wr_id[VAR_33->sq.prod].bytes_len = VAR_43->length;

   FUNC_2(VAR_38, "RDMA READ length = %d\n",
    VAR_43->length);

   break;

  case 139:
  case 138:

   FUNC_2(VAR_38,
    "ATOMIC operation = %s\n",
    ((VAR_30->opcode == 139) ?
     "IB_WR_ATOMIC_CMP_AND_SWP" :
     "IB_WR_ATOMIC_FETCH_AND_ADD"));

   VAR_46 = (struct rdma_sq_atomic_wqe *)VAR_40;
   VAR_46->prev_wqe_size = 4;

   VAR_47 = (struct rdma_sq_atomic_wqe *)
     FUNC_9(&VAR_33->sq.pbl);

   FUNC_4(VAR_47, VAR_27, FUNC_5(VAR_30)->remote_addr);


   VAR_47->r_key = FUNC_8(FUNC_5(VAR_30)->rkey);

   VAR_48 = (struct rdma_sq_atomic_wqe *)
     FUNC_9(&VAR_33->sq.pbl);

   if (VAR_30->opcode == 138) {
    VAR_40->req_type = VAR_11;
    FUNC_4(VAR_48, VAR_28,
       FUNC_5(VAR_30)->compare_add);
   } else {
    VAR_40->req_type = VAR_12;
    FUNC_4(VAR_48, VAR_28,
       FUNC_5(VAR_30)->swap);
    FUNC_4(VAR_48, VAR_26,
       FUNC_5(VAR_30)->compare_add);
   }

   FUNC_24(VAR_32, VAR_33, ((void*)0), VAR_30);

   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_46->prev_wqe_size;
   VAR_33->prev_wqe_size = VAR_46->prev_wqe_size;

   break;

  case 136:

   FUNC_2(VAR_38,
    "INVALIDATE length (IB_WR_LOCAL_INV)\n");

   VAR_45 = (struct rdma_sq_local_inv_wqe *)VAR_40;
   VAR_45->prev_wqe_size = 1;

   VAR_45->req_type = VAR_14;
   VAR_45->inv_l_key = VAR_30->ex.invalidate_rkey;
   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_45->prev_wqe_size;
   VAR_33->prev_wqe_size = VAR_45->prev_wqe_size;

   break;
  case 137:

   FUNC_2(VAR_38, "FAST_MR (IB_WR_FAST_REG_MR)\n");

   VAR_40->req_type = VAR_13;
   VAR_49 = (struct rdma_sq_fmr_wqe_1st *)VAR_40;
   VAR_49->prev_wqe_size = 3;

   VAR_36 = FUNC_20(VAR_33, VAR_49, VAR_30);

   if (VAR_36) {
    FUNC_2(VAR_38,
     "FAST_MR (IB_WR_FAST_REG_MR) failed"
     " rc = %d\n", VAR_36);
    *VAR_31 = VAR_30;
    break;
   }

   VAR_33->wqe_wr_id[VAR_33->sq.prod].wqe_size = VAR_49->prev_wqe_size;
   VAR_33->prev_wqe_size = VAR_49->prev_wqe_size;

   break;


  default:

   FUNC_2(VAR_38, "Invalid Opcode 0x%x!\n", VAR_30->opcode);

   VAR_36 = -VAR_4;
   *VAR_31 = VAR_30;
   break;
  }

  if (*VAR_31) {



   FUNC_10(&VAR_33->sq.pbl,
        FUNC_14(VAR_33->sq.db_data.data.value),
        VAR_40);

   VAR_33->prev_wqe_size = VAR_40->prev_wqe_size;
   VAR_35 = VAR_36;

   FUNC_2(VAR_38, "failed *bad_wr = %p\n", *VAR_31);
   break;
  }

  VAR_33->wqe_wr_id[VAR_33->sq.prod].wr_id = VAR_30->wr_id;

  FUNC_19(&VAR_33->sq);

  VAR_33->sq.db_data.data.value++;

  VAR_30 = VAR_30->next;
 }







 FUNC_28();


 VAR_39 = (uint32_t)((uint8_t *)VAR_33->sq.db - (uint8_t *)VAR_38->cdev.doorbells);
        FUNC_7(VAR_38->pci_dbells, VAR_39, VAR_33->sq.db_data.raw);
        FUNC_6(VAR_38->pci_dbells, 0, 0, VAR_0);

 FUNC_15();

 FUNC_27(&VAR_33->q_lock, VAR_34);

 FUNC_2(VAR_38, "exit[ibqp, wr, bad_wr] = [%p, %p, %p]\n",
  VAR_29, VAR_30, VAR_31);

 return VAR_35;
}
