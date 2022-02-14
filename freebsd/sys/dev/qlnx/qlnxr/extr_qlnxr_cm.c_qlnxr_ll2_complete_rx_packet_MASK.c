
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


typedef int uint32_t ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {size_t gsi_cons; } ;
struct qlnxr_qp {int q_lock; TYPE_6__ rq; TYPE_4__* rqe_wr_id; } ;
struct qlnxr_dev {int ha; struct qlnxr_qp* gsi_qp; struct qlnxr_cq* gsi_rqcq; } ;
struct TYPE_11__ {int cq_context; int (* comp_handler ) (TYPE_5__*,int ) ;} ;
struct qlnxr_cq {TYPE_5__ ibcq; } ;
struct TYPE_9__ {int data_length; } ;
struct TYPE_7__ {scalar_t__ data_length_error; } ;
struct ecore_ll2_comp_rx_data {int qp_id; scalar_t__ opaque_data_1; int opaque_data_0; TYPE_3__ length; int vlan; TYPE_1__ u; int rx_buf_addr; int * cookie; } ;
struct TYPE_10__ {int * smac; TYPE_2__* sg_list; int vlan_id; int rc; } ;
struct TYPE_8__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (TYPE_5__*,int ) ;

void
FUNC_7(void *VAR_1,
  struct ecore_ll2_comp_rx_data *VAR_2)
{
 struct qlnxr_dev *VAR_3 = (struct qlnxr_dev *)VAR_1;
 struct qlnxr_cq *VAR_4 = VAR_3->gsi_rqcq;

 struct qlnxr_qp *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 uint32_t VAR_7 = 0;



 FUNC_0(VAR_3->ha, "enter\n");

 if (VAR_2->u.data_length_error) {

 }

 if (VAR_2->cookie == ((void*)0)) {
  FUNC_0(VAR_3->ha, "cookie is NULL, bad sign\n");
 }

 VAR_7 = (0xFF << 16) | VAR_2->qp_id;

 if (VAR_2->qp_id == 1) {
  VAR_5 = VAR_3->gsi_qp;
 } else {


  FUNC_0(VAR_3->ha, "invalid QP\n");
  return;
 }

 FUNC_0(VAR_3->ha, "MAD received on QP : %x\n", VAR_2->rx_buf_addr);

 FUNC_4(&VAR_5->q_lock, VAR_6);

 VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].rc =
  VAR_2->u.data_length_error ? -VAR_0 : 0;
 VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].vlan_id = VAR_2->vlan;

 VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].sg_list[0].length =
  VAR_2->length.data_length;
 *((u32 *)&VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].smac[0]) =
  FUNC_1(VAR_2->opaque_data_0);
 *((u16 *)&VAR_5->rqe_wr_id[VAR_5->rq.gsi_cons].smac[4]) =
  FUNC_2((u16)VAR_2->opaque_data_1);

 FUNC_3(&VAR_5->rq);

 FUNC_5(&VAR_5->q_lock, VAR_6);

 if (VAR_4->ibcq.comp_handler)
  (*VAR_4->ibcq.comp_handler) (&VAR_4->ibcq, VAR_4->ibcq.cq_context);

 FUNC_0(VAR_3->ha, "exit\n");

 return;
}
