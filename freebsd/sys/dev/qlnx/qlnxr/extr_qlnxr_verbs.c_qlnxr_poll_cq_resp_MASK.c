
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_responder {scalar_t__ status; int rq_cons; } ;
struct qlnxr_qp {int dummy; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_cq {int dummy; } ;
struct ib_wc {int dummy; } ;
typedef int qlnx_host_t ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct qlnxr_cq*) ;
 int FUNC_2 (struct qlnxr_qp*,int,struct ib_wc*,int ) ;
 int FUNC_3 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,struct ib_wc*,struct rdma_cqe_responder*) ;
 int FUNC_4 (struct qlnxr_cq*,struct qlnxr_qp*,struct rdma_cqe_responder*,int*) ;

__attribute__((used)) static int
FUNC_5(struct qlnxr_dev *VAR_1,
 struct qlnxr_qp *VAR_2,
 struct qlnxr_cq *VAR_3,
 int VAR_4,
 struct ib_wc *VAR_5,
 struct rdma_cqe_responder *VAR_6,
 int *VAR_7)
{
 int VAR_8;
 qlnx_host_t *VAR_9 = VAR_1->ha;

 FUNC_0(VAR_9, "enter\n");

 if (VAR_6->status == VAR_0) {
  VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_5,
    VAR_6->rq_cons);
  FUNC_4(VAR_3, VAR_2, VAR_6, VAR_7);
 } else {
  VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  FUNC_1(VAR_3);
  *VAR_7 |= 1;
 }

 FUNC_0(VAR_9, "exit cnt = 0x%x\n", VAR_8);
 return VAR_8;
}
