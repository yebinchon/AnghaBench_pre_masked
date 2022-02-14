
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_3__ {int lo; int hi; } ;
struct rdma_cqe_responder {scalar_t__ status; TYPE_1__ srq_wr_id; } ;
struct TYPE_4__ {int wr_cons_cnt; } ;
struct qlnxr_srq {TYPE_2__ hw_srq; } ;
struct qlnxr_qp {int ibqp; int id; struct qlnxr_srq* srq; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_cq {int dummy; } ;
struct ib_wc {void* wr_id; int * qp; int src_qp; scalar_t__ byte_len; scalar_t__ vendor_err; int status; } ;
typedef int qlnx_host_t ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,struct ib_wc*,struct rdma_cqe_responder*,void*) ;

__attribute__((used)) static int
FUNC_3(struct qlnxr_dev *VAR_2,
 struct qlnxr_qp *VAR_3,
 struct qlnxr_cq *VAR_4,
 struct ib_wc *VAR_5,
 struct rdma_cqe_responder *VAR_6)
{
 struct qlnxr_srq *VAR_7 = VAR_3->srq;
 u64 VAR_8;
 qlnx_host_t *VAR_9 = VAR_2->ha;

 FUNC_1(VAR_9, "enter\n");

 VAR_8 = FUNC_0(VAR_6->srq_wr_id.hi, VAR_6->srq_wr_id.lo);

 if (VAR_6->status == VAR_1) {
  VAR_5->status = VAR_0;
  VAR_5->vendor_err = 0;
  VAR_5->wr_id = VAR_8;
  VAR_5->byte_len = 0;
  VAR_5->src_qp = VAR_3->id;
  VAR_5->qp = &VAR_3->ibqp;
  VAR_5->wr_id = VAR_8;
 } else {
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
 }




 VAR_7->hw_srq.wr_cons_cnt++;

 FUNC_1(VAR_9, "exit\n");
 return 1;
}
