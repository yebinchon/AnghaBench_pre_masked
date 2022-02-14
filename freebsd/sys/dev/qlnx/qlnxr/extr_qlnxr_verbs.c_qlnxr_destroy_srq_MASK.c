
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlnxr_srq {int srq_id; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int rdma_ctx; int * ha; } ;
struct ib_srq {TYPE_2__* pd; } ;
struct ecore_rdma_destroy_srq_in_params {int srq_id; } ;
typedef int qlnx_host_t ;
typedef int in_params ;
struct TYPE_4__ {TYPE_1__* uobject; } ;
struct TYPE_3__ {scalar_t__ context; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,struct ecore_rdma_destroy_srq_in_params*) ;
 struct qlnxr_srq* FUNC_2 (struct ib_srq*) ;
 int FUNC_3 (struct qlnxr_srq*) ;
 int FUNC_4 (struct ecore_rdma_destroy_srq_in_params*,int ,int) ;
 int FUNC_5 (struct qlnxr_srq*) ;
 int FUNC_6 (struct qlnxr_srq*) ;

int
FUNC_7(struct ib_srq *VAR_0)
{
 struct qlnxr_dev *VAR_1;
 struct qlnxr_srq *VAR_2;
 qlnx_host_t *VAR_3;
 struct ecore_rdma_destroy_srq_in_params VAR_4;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = VAR_2->dev;
 VAR_3 = VAR_1->ha;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.srq_id = VAR_2->srq_id;

 FUNC_1(VAR_1->rdma_ctx, &VAR_4);

 if (VAR_0->pd->uobject && VAR_0->pd->uobject->context)
  FUNC_6(VAR_2);
 else
  FUNC_5(VAR_2);

 FUNC_0(VAR_3, "destroyed srq_id=0x%0x\n", VAR_2->srq_id);
 FUNC_3(VAR_2);
 return 0;
}
