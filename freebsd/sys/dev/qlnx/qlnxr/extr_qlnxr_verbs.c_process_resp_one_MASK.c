
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rdma_cqe_responder {int dummy; } ;
struct TYPE_4__ {size_t cons; int pbl; } ;
struct qlnxr_qp {TYPE_2__ rq; TYPE_1__* rqe_wr_id; } ;
struct qlnxr_dev {int * ha; } ;
struct qlnxr_cq {int dummy; } ;
struct ib_wc {int dummy; } ;
typedef int qlnx_host_t ;
struct TYPE_3__ {int wqe_size; int wr_id; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlnxr_dev*,struct qlnxr_qp*,struct qlnxr_cq*,struct ib_wc*,struct rdma_cqe_responder*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(struct qlnxr_dev *VAR_0,
 struct qlnxr_qp *VAR_1,
 struct qlnxr_cq *VAR_2,
 struct ib_wc *VAR_3,
 struct rdma_cqe_responder *VAR_4)
{
 qlnx_host_t *VAR_5 = VAR_0->ha;
 u64 VAR_6 = VAR_1->rqe_wr_id[VAR_1->rq.cons].wr_id;

 FUNC_0(VAR_5, "enter\n");

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);

 while (VAR_1->rqe_wr_id[VAR_1->rq.cons].wqe_size--)
  FUNC_2(&VAR_1->rq.pbl);
 FUNC_3(&VAR_1->rq);

 FUNC_0(VAR_5, "exit\n");
 return 1;
}
