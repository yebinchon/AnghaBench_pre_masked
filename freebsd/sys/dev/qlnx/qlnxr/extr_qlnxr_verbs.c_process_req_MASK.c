
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_12__ {scalar_t__ wqe_cons; size_t cons; int pbl; } ;
struct qlnxr_qp {TYPE_6__ sq; TYPE_5__* wqe_wr_id; int ibqp; int id; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_cq {int dummy; } ;
struct ib_wc {int status; int opcode; int byte_len; int wr_id; int * qp; int src_qp; scalar_t__ wc_flags; scalar_t__ vendor_err; } ;
typedef int qlnx_host_t ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_11__ {int opcode; int bytes_len; int wqe_size; TYPE_4__* frmr; TYPE_2__* mr; int wr_id; int signaled; } ;
struct TYPE_9__ {int completed; } ;
struct TYPE_10__ {TYPE_3__ info; } ;
struct TYPE_7__ {int completed; } ;
struct TYPE_8__ {TYPE_1__ info; } ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qlnxr_qp*) ;
 int FUNC_3 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_4(struct qlnxr_dev *VAR_0,
 struct qlnxr_qp *VAR_1,
 struct qlnxr_cq *VAR_2,
 int VAR_3,
 struct ib_wc *VAR_4,
 u16 VAR_5,
 enum ib_wc_status VAR_6,
 int VAR_7)
{
 u16 VAR_8 = 0;
 qlnx_host_t *VAR_9 = VAR_0->ha;

 FUNC_0(VAR_9, "enter\n");

 while (VAR_3 && VAR_1->sq.wqe_cons != VAR_5) {
  if (!VAR_1->wqe_wr_id[VAR_1->sq.cons].signaled && !VAR_7) {
   FUNC_2(VAR_1);

   goto next_cqe;
  }


  VAR_4->status = VAR_6;
  VAR_4->vendor_err = 0;
  VAR_4->wc_flags = 0;
  VAR_4->src_qp = VAR_1->id;
  VAR_4->qp = &VAR_1->ibqp;


  VAR_4->wr_id = VAR_1->wqe_wr_id[VAR_1->sq.cons].wr_id;
  VAR_4->opcode = VAR_1->wqe_wr_id[VAR_1->sq.cons].opcode;

  switch (VAR_4->opcode) {

  case 130:

   VAR_4->byte_len = VAR_1->wqe_wr_id[VAR_1->sq.cons].bytes_len;

   FUNC_0(VAR_9,
    "opcode = IB_WC_RDMA_WRITE bytes = %d\n",
    VAR_1->wqe_wr_id[VAR_1->sq.cons].bytes_len);
   break;

  case 134:
  case 132:
   VAR_4->byte_len = 8;
   break;






  case 133:
   VAR_1->wqe_wr_id[VAR_1->sq.cons].frmr->info.completed++;
   break;


  case 131:
  case 128:

   FUNC_0(VAR_9, "opcode = 0x%x \n", VAR_4->opcode);
   break;
  default:
   ;
  }

  VAR_3--;
  VAR_4++;
  VAR_8++;
next_cqe:
  while (VAR_1->wqe_wr_id[VAR_1->sq.cons].wqe_size--)
   FUNC_1(&VAR_1->sq.pbl);
  FUNC_3(&VAR_1->sq);
 }

 FUNC_0(VAR_9, "exit cnt = 0x%x\n", VAR_8);
 return VAR_8;
}
