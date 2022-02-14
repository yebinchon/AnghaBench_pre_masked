
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* uobject; } ;
struct qlnxr_qp {scalar_t__ qp_type; int ecore_qp; TYPE_2__ ibqp; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct ecore_rdma_destroy_qp_out_params {int dummy; } ;
typedef int qlnx_host_t ;
struct TYPE_3__ {scalar_t__ context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,struct ecore_rdma_destroy_qp_out_params*) ;
 int FUNC_2 (struct qlnxr_dev*,struct qlnxr_qp*) ;
 int FUNC_3 (struct qlnxr_dev*,struct qlnxr_qp*) ;

int
FUNC_4(struct qlnxr_dev *VAR_1,
 struct qlnxr_qp *VAR_2)
{
 int VAR_3 = 0;
 qlnx_host_t *VAR_4;
 struct ecore_rdma_destroy_qp_out_params VAR_5;

 VAR_4 = VAR_1->ha;

 FUNC_0(VAR_4, "enter\n");
 if (VAR_2->ibqp.uobject && VAR_2->ibqp.uobject->context)
  FUNC_3(VAR_1, VAR_2);
 else
  FUNC_2(VAR_1, VAR_2);

 if (VAR_2->qp_type != VAR_0) {
  VAR_3 = FUNC_1(VAR_1->rdma_ctx, VAR_2->ecore_qp,
    &VAR_5);
  if (VAR_3)
   return VAR_3;
 }

 FUNC_0(VAR_4, "exit\n");
 return 0;
}
