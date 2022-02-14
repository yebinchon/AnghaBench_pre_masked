
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pbl_info; TYPE_3__* pbl_tbl; int umem; } ;
struct TYPE_4__ {int pbl_info; TYPE_3__* pbl_tbl; int umem; } ;
struct qlnxr_qp {TYPE_2__ urq; int srq; TYPE_1__ usq; } ;
struct qlnxr_dev {int * ha; } ;
struct ecore_rdma_create_qp_out_params {int rq_pbl_phys; int rq_pbl_virt; int sq_pbl_phys; int sq_pbl_virt; } ;
typedef int qlnx_host_t ;
struct TYPE_6__ {int pa; int va; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlnxr_dev*,int ,TYPE_3__*,int *) ;

__attribute__((used)) static inline void
FUNC_3(struct qlnxr_dev *VAR_0,
 struct qlnxr_qp *VAR_1,
 struct ecore_rdma_create_qp_out_params *VAR_2)
{
 qlnx_host_t *VAR_3;

 VAR_3 = VAR_0->ha;

 FUNC_1(VAR_3, "enter\n");

 VAR_1->usq.pbl_tbl->va = VAR_2->sq_pbl_virt;
 VAR_1->usq.pbl_tbl->pa = VAR_2->sq_pbl_phys;

 FUNC_2(VAR_0, VAR_1->usq.umem, VAR_1->usq.pbl_tbl,
      &VAR_1->usq.pbl_info);

 if (VAR_1->srq) {
  FUNC_0(VAR_3, "qp->srq = %p\n", VAR_1->srq);
  return;
 }

 VAR_1->urq.pbl_tbl->va = VAR_2->rq_pbl_virt;
 VAR_1->urq.pbl_tbl->pa = VAR_2->rq_pbl_phys;

 FUNC_2(VAR_0, VAR_1->urq.umem, VAR_1->urq.pbl_tbl,
      &VAR_1->urq.pbl_info);

 FUNC_1(VAR_3, "exit\n");
 return;
}
