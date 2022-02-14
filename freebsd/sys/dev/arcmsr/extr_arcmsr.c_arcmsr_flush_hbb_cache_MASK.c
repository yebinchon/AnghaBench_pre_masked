
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HBB_MessageUnit {int drv2iop_doorbell; } ;
struct AdapterControlBlock {scalar_t__ pmu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_2(struct AdapterControlBlock *VAR_1)
{
 int VAR_2 = 30;
 struct HBB_MessageUnit *VAR_3 = (struct HBB_MessageUnit *)VAR_1->pmu;

 FUNC_0(0, VAR_3->drv2iop_doorbell, VAR_0);
 do {
  if(FUNC_1(VAR_1)) {
   break;
  } else {
   VAR_2--;
  }
 }while(VAR_2 != 0);
}
