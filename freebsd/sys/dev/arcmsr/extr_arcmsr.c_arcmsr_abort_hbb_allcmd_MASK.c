
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HBB_MessageUnit {int drv2iop_doorbell; } ;
struct AdapterControlBlock {int pci_unit; scalar_t__ pmu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_1)
{
 struct HBB_MessageUnit *VAR_2 = (struct HBB_MessageUnit *)VAR_1->pmu;
 FUNC_0(0, VAR_2->drv2iop_doorbell, VAR_0);
 if(!FUNC_1(VAR_1)) {
  FUNC_2("arcmsr%d: wait 'abort all outstanding command' timeout \n", VAR_1->pci_unit);
 }
}
