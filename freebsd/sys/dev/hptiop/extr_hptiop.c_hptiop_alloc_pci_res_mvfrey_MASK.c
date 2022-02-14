
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpt_iopmu_mvfrey {int dummy; } ;
struct hpt_iop_request_get_config {int dummy; } ;
struct TYPE_3__ {struct hpt_iopmu_mvfrey* mu; struct hpt_iop_request_get_config* config; } ;
struct TYPE_4__ {TYPE_1__ mvfrey; } ;
struct hpt_iop_hba {int bar0_rid; int bar2_rid; int pcidev; int * bar2_res; int * bar0_res; TYPE_2__ u; void* bar2h; void* bar2t; void* bar0h; void* bar0t; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hpt_iop_hba *VAR_2)
{
 VAR_2->bar0_rid = 0x10;
 VAR_2->bar0_res = FUNC_0(VAR_2->pcidev,
   VAR_1, &VAR_2->bar0_rid, VAR_0);

 if (VAR_2->bar0_res == ((void*)0)) {
  FUNC_2(VAR_2->pcidev, "failed to get iop bar0.\n");
  return -1;
 }
 VAR_2->bar0t = FUNC_4(VAR_2->bar0_res);
 VAR_2->bar0h = FUNC_3(VAR_2->bar0_res);
 VAR_2->u.mvfrey.config = (struct hpt_iop_request_get_config *)
    FUNC_5(VAR_2->bar0_res);

 if (!VAR_2->u.mvfrey.config) {
  FUNC_1(VAR_2->pcidev, VAR_1,
     VAR_2->bar0_rid, VAR_2->bar0_res);
  FUNC_2(VAR_2->pcidev, "alloc bar0 mem res failed\n");
  return -1;
 }

 VAR_2->bar2_rid = 0x18;
 VAR_2->bar2_res = FUNC_0(VAR_2->pcidev,
   VAR_1, &VAR_2->bar2_rid, VAR_0);

 if (VAR_2->bar2_res == ((void*)0)) {
  FUNC_1(VAR_2->pcidev, VAR_1,
     VAR_2->bar0_rid, VAR_2->bar0_res);
  FUNC_2(VAR_2->pcidev, "failed to get iop bar2.\n");
  return -1;
 }

 VAR_2->bar2t = FUNC_4(VAR_2->bar2_res);
 VAR_2->bar2h = FUNC_3(VAR_2->bar2_res);
 VAR_2->u.mvfrey.mu =
     (struct hpt_iopmu_mvfrey *)FUNC_5(VAR_2->bar2_res);

 if (!VAR_2->u.mvfrey.mu) {
  FUNC_1(VAR_2->pcidev, VAR_1,
     VAR_2->bar0_rid, VAR_2->bar0_res);
  FUNC_1(VAR_2->pcidev, VAR_1,
     VAR_2->bar2_rid, VAR_2->bar2_res);
  FUNC_2(VAR_2->pcidev, "alloc mem bar2 res failed\n");
  return -1;
 }

 return 0;
}
