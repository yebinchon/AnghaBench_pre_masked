
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpt_iop_hba {scalar_t__ bar2_res; int bar2_rid; int pcidev; scalar_t__ bar0_res; int bar0_rid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hpt_iop_hba *VAR_1)
{
 if (VAR_1->bar0_res)
  FUNC_0(VAR_1->pcidev, VAR_0,
   VAR_1->bar0_rid, VAR_1->bar0_res);
 if (VAR_1->bar2_res)
  FUNC_0(VAR_1->pcidev, VAR_0,
   VAR_1->bar2_rid, VAR_1->bar2_res);
}
