
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ wqe_cons; size_t cons; int pbl; } ;
struct qlnxr_qp {TYPE_3__ rq; TYPE_2__* rqe_wr_id; int ibqp; int id; TYPE_1__* dev; } ;
struct ib_wc {int * qp; int wr_id; scalar_t__ byte_len; int src_qp; scalar_t__ wc_flags; scalar_t__ vendor_err; int status; } ;
typedef int qlnx_host_t ;
struct TYPE_5__ {int wqe_size; int wr_id; } ;
struct TYPE_4__ {int * ha; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(struct qlnxr_qp *VAR_1,
 int VAR_2,
 struct ib_wc *VAR_3,
 u16 VAR_4)
{
 u16 VAR_5 = 0;
 qlnx_host_t *VAR_6 = VAR_1->dev->ha;

 FUNC_0(VAR_6, "enter\n");

 while (VAR_2 && VAR_1->rq.wqe_cons != VAR_4) {

  VAR_3->status = VAR_0;
  VAR_3->vendor_err = 0;
  VAR_3->wc_flags = 0;
  VAR_3->src_qp = VAR_1->id;
  VAR_3->byte_len = 0;
  VAR_3->wr_id = VAR_1->rqe_wr_id[VAR_1->rq.cons].wr_id;
  VAR_3->qp = &VAR_1->ibqp;
  VAR_2--;
  VAR_3++;
  VAR_5++;
  while (VAR_1->rqe_wr_id[VAR_1->rq.cons].wqe_size--)
   FUNC_1(&VAR_1->rq.pbl);
  FUNC_2(&VAR_1->rq);
 }

 FUNC_0(VAR_6, "exit cnt = 0x%x\n", VAR_5);
 return VAR_5;
}
