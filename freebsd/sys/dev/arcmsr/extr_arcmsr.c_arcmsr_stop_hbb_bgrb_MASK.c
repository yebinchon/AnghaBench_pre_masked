
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HBB_MessageUnit {int drv2iop_doorbell; } ;
struct AdapterControlBlock {int pci_unit; int acb_flags; scalar_t__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_2)
{
 struct HBB_MessageUnit *VAR_3 = (struct HBB_MessageUnit *)VAR_2->pmu;
 VAR_2->acb_flags &= ~VAR_0;
 FUNC_0(0, VAR_3->drv2iop_doorbell, VAR_1);
 if(!FUNC_1(VAR_2)) {
  FUNC_2( "arcmsr%d: wait 'stop adapter background rebulid' timeout \n"
   , VAR_2->pci_unit);
 }
}
