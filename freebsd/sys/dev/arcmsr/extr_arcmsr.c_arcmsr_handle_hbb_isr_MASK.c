
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct HBB_MessageUnit {int drv2iop_doorbell; int iop2drv_doorbell; } ;
struct AdapterControlBlock {int outbound_int_enable; scalar_t__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (struct AdapterControlBlock*) ;

__attribute__((used)) static void FUNC_6( struct AdapterControlBlock *VAR_5)
{
 u_int32_t VAR_6;
 struct HBB_MessageUnit *VAR_7 = (struct HBB_MessageUnit *)VAR_5->pmu;





 VAR_6 = FUNC_0(0, VAR_7->iop2drv_doorbell) & VAR_5->outbound_int_enable;
 if(!VAR_6) {

  return;
 }
 FUNC_1(0, VAR_7->iop2drv_doorbell, ~VAR_6);
 FUNC_0(0, VAR_7->iop2drv_doorbell);
 FUNC_1(0, VAR_7->drv2iop_doorbell, VAR_0);

 if(VAR_6 & VAR_3) {
  FUNC_5(VAR_5);
 }
 if(VAR_6 & VAR_2) {
  FUNC_4(VAR_5);
 }

 if(VAR_6 & VAR_1) {
  FUNC_3(VAR_5);
 }
 if(VAR_6 & VAR_4) {
  FUNC_2(VAR_5);
 }
}
