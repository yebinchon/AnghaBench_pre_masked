
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct rdma_cqe_responder {int flags; int imm_data_or_inv_r_Key; int length; int status; } ;
struct qlnxr_qp {int ibqp; int id; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_cq {int icid; } ;
struct TYPE_2__ {void* imm_data; } ;
struct ib_wc {int status; int wr_id; int * qp; int src_qp; scalar_t__ vendor_err; scalar_t__ wc_flags; TYPE_1__ ex; void* opcode; void* byte_len; } ;
typedef int qlnx_host_t ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

 int VAR_12 ;


 int FUNC_0 (int *,char*,int,struct qlnxr_qp*,int ,struct qlnxr_cq*,int ) ;
 int FUNC_1 (int *,char*,...) ;







 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct qlnxr_dev *VAR_13,
 struct qlnxr_qp *VAR_14,
 struct qlnxr_cq *VAR_15,
 struct ib_wc *VAR_16,
 struct rdma_cqe_responder *VAR_17,
 u64 VAR_18)
{
 enum ib_wc_status VAR_19 = VAR_9;

 u8 VAR_20;

 qlnx_host_t *VAR_21 = VAR_13->ha;

 FUNC_1(VAR_21, "enter qp = %p resp->status = 0x%x\n",
  VAR_14, VAR_17->status);

 VAR_16->opcode = VAR_6;
 VAR_16->wc_flags = 0;

 switch (VAR_17->status) {

 case 134:
  VAR_19 = VAR_1;
  break;

 case 133:
  VAR_19 = VAR_2;
  break;

 case 131:
  VAR_19 = VAR_4;
  break;

 case 132:
  VAR_19 = VAR_3;
  break;

 case 130:
  VAR_19 = VAR_5;
  break;

 case 128:
  VAR_19 = VAR_8;
  break;

 case 129:
  VAR_19 = VAR_9;
  VAR_16->byte_len = FUNC_2(VAR_17->length);

  VAR_20 = VAR_17->flags & 135;

  switch (VAR_20) {

  case 135:

   VAR_16->opcode = VAR_7;

  case 137:
   VAR_16->ex.imm_data =
    FUNC_2(VAR_17->imm_data_or_inv_r_Key);
   VAR_16->wc_flags |= VAR_10;
   break;
  case 136:
   FUNC_0(VAR_21, "Invalid flags QLNXR_RESP_RDMA [0x%x]"
    "qp = %p qp->id = 0x%x cq = %p cq->icid = 0x%x\n",
    VAR_17->flags, VAR_14, VAR_14->id, VAR_15, VAR_15->icid );
   break;
  default:

   ;
  }


  break;
 default:
  VAR_19 = VAR_0;
 }


 VAR_16->status = VAR_19;
 VAR_16->vendor_err = 0;
 VAR_16->src_qp = VAR_14->id;
 VAR_16->qp = &VAR_14->ibqp;
 VAR_16->wr_id = VAR_18;

 FUNC_1(VAR_21, "exit status = 0x%x\n", VAR_19);

 return;
}
