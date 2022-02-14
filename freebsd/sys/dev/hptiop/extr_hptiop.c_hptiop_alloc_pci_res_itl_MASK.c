
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpt_iopmu_itl {int dummy; } ;
struct TYPE_3__ {struct hpt_iopmu_itl* mu; } ;
struct TYPE_4__ {TYPE_1__ itl; } ;
struct hpt_iop_hba {int bar0_rid; int pcidev; int * bar0_res; TYPE_2__ u; int bar0h; int bar0t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct hpt_iop_hba *VAR_2)
{
 VAR_2->bar0_rid = 0x10;
 VAR_2->bar0_res = FUNC_0(VAR_2->pcidev,
   VAR_1, &VAR_2->bar0_rid, VAR_0);

 if (VAR_2->bar0_res == ((void*)0)) {
  FUNC_2(VAR_2->pcidev,
   "failed to get iop base adrress.\n");
  return -1;
 }
 VAR_2->bar0t = FUNC_4(VAR_2->bar0_res);
 VAR_2->bar0h = FUNC_3(VAR_2->bar0_res);
 VAR_2->u.itl.mu = (struct hpt_iopmu_itl *)
    FUNC_5(VAR_2->bar0_res);

 if (!VAR_2->u.itl.mu) {
  FUNC_1(VAR_2->pcidev, VAR_1,
     VAR_2->bar0_rid, VAR_2->bar0_res);
  FUNC_2(VAR_2->pcidev, "alloc mem res failed\n");
  return -1;
 }

 return 0;
}
