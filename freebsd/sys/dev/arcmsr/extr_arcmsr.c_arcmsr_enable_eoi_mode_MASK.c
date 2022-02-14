
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HBB_MessageUnit {int drv2iop_doorbell; } ;
struct AdapterControlBlock {scalar_t__ adapter_type; int pci_unit; scalar_t__ pmu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_2)
{
 if (VAR_2->adapter_type == VAR_0)
 {
  struct HBB_MessageUnit *VAR_3 = (struct HBB_MessageUnit *)VAR_2->pmu;
  FUNC_0(0, VAR_3->drv2iop_doorbell, VAR_1);
  if(!FUNC_1(VAR_2)) {
   FUNC_2( "arcmsr%d: 'iop enable eoi mode' timeout \n", VAR_2->pci_unit);
   return;
  }
 }
}
