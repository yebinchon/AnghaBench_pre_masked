
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t cons; size_t gsi_cons; } ;
struct qlnxr_qp {TYPE_4__ sq; TYPE_3__* wqe_wr_id; int ibqp; TYPE_4__ rq; TYPE_2__* rqe_wr_id; } ;
struct qlnxr_dev {int ha; struct qlnxr_qp* gsi_qp; } ;
struct qlnxr_cq {int cq_lock; } ;
struct ib_wc {int wc_flags; void* status; int opcode; int wr_id; int * qp; scalar_t__ vlan_id; int smac; int byte_len; scalar_t__ pkey_index; } ;
struct ib_cq {int device; } ;
struct TYPE_7__ {int wr_id; } ;
struct TYPE_6__ {scalar_t__ vlan_id; int smac; TYPE_1__* sg_list; scalar_t__ rc; int wr_id; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 struct qlnxr_cq* FUNC_1 (struct ib_cq*) ;
 struct qlnxr_dev* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct ib_wc*,int ,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int
FUNC_8(struct ib_cq *VAR_9, int VAR_10, struct ib_wc *VAR_11)
{
 struct qlnxr_dev *VAR_12 = FUNC_2((VAR_9->device));
 struct qlnxr_cq *VAR_13 = FUNC_1(VAR_9);
 struct qlnxr_qp *VAR_14 = VAR_12->gsi_qp;
 unsigned long VAR_15;
 int VAR_16 = 0;

 FUNC_0(VAR_12->ha, "enter\n");

 FUNC_6(&VAR_13->cq_lock, VAR_15);

 while (VAR_16 < VAR_10 && VAR_14->rq.cons != VAR_14->rq.gsi_cons) {
  FUNC_4(&VAR_11[VAR_16], 0, sizeof(*VAR_11));

  VAR_11[VAR_16].qp = &VAR_14->ibqp;
  VAR_11[VAR_16].wr_id = VAR_14->rqe_wr_id[VAR_14->rq.cons].wr_id;
  VAR_11[VAR_16].opcode = VAR_4;
  VAR_11[VAR_16].pkey_index = 0;
  VAR_11[VAR_16].status = (VAR_14->rqe_wr_id[VAR_14->rq.cons].rc)?
          VAR_1:VAR_6;

  VAR_11[VAR_16].byte_len = VAR_14->rqe_wr_id[VAR_14->rq.cons].sg_list[0].length;
  VAR_11[VAR_16].wc_flags |= VAR_2 | VAR_3;
  FUNC_5(&VAR_14->rq);
  VAR_16++;
 }

 while (VAR_16 < VAR_10 && VAR_14->sq.cons != VAR_14->sq.gsi_cons) {
  FUNC_4(&VAR_11[VAR_16], 0, sizeof(*VAR_11));

  VAR_11[VAR_16].qp = &VAR_14->ibqp;
  VAR_11[VAR_16].wr_id = VAR_14->wqe_wr_id[VAR_14->sq.cons].wr_id;
  VAR_11[VAR_16].opcode = VAR_5;
  VAR_11[VAR_16].status = VAR_6;

  FUNC_5(&VAR_14->sq);
  VAR_16++;
 }

 FUNC_7(&VAR_13->cq_lock, VAR_15);

 FUNC_0(VAR_12->ha, "exit i = %d\n", VAR_16);
 return VAR_16;
}
