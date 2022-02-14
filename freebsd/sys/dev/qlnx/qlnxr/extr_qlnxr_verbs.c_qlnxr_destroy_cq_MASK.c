
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlnxr_dev {TYPE_3__* ha; int rdma_ctx; } ;
struct TYPE_6__ {int umem; int pbl_tbl; int pbl_info; } ;
struct qlnxr_cq {int destroyed; scalar_t__ cq_type; int icid; int sig; TYPE_2__ q; int pbl; } ;
struct ib_cq {TYPE_1__* uobject; int device; } ;
struct ecore_rdma_destroy_cq_out_params {int dummy; } ;
struct ecore_rdma_destroy_cq_in_params {int icid; } ;
struct TYPE_7__ {int cdev; } ;
typedef TYPE_3__ qlnx_host_t ;
struct TYPE_5__ {scalar_t__ context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,struct ecore_rdma_destroy_cq_in_params*,struct ecore_rdma_destroy_cq_out_params*) ;
 struct qlnxr_cq* FUNC_3 (struct ib_cq*) ;
 struct qlnxr_dev* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qlnxr_cq*) ;
 int FUNC_7 (struct qlnxr_dev*,int *,int ) ;

int
FUNC_8(struct ib_cq *VAR_1)
{
 struct qlnxr_dev *VAR_2 = FUNC_4((VAR_1->device));
 struct ecore_rdma_destroy_cq_out_params VAR_3;
 struct ecore_rdma_destroy_cq_in_params VAR_4;
 struct qlnxr_cq *VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = 0;
 qlnx_host_t *VAR_7;

 VAR_7 = VAR_2->ha;

 FUNC_0(VAR_7, "enter cq_id = %d\n", VAR_5->icid);

 VAR_5->destroyed = 1;
 if (VAR_5->cq_type != VAR_0) {

  VAR_4.icid = VAR_5->icid;

  VAR_6 = FUNC_2(VAR_2->rdma_ctx, &VAR_4, &VAR_3);

  if (VAR_6) {
   FUNC_0(VAR_7, "ecore_rdma_destroy_cq failed cq_id = %d\n",
    VAR_5->icid);
   return VAR_6;
  }

  FUNC_0(VAR_7, "free cq->pbl cq_id = %d\n", VAR_5->icid);
  FUNC_1(&VAR_2->ha->cdev, &VAR_5->pbl);
 }

 if (VAR_1->uobject && VAR_1->uobject->context) {
  FUNC_7(VAR_2, &VAR_5->q.pbl_info, VAR_5->q.pbl_tbl);
  FUNC_5(VAR_5->q.umem);
 }

 VAR_5->sig = ~VAR_5->sig;

 FUNC_6(VAR_5);

 FUNC_0(VAR_7, "exit cq_id = %d\n", VAR_5->icid);

 return VAR_6;
}
