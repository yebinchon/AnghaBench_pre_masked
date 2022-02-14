
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct HBB_MessageUnit {int drv2iop_doorbell; int iop2drv_doorbell; } ;
struct AdapterControlBlock {scalar_t__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static u_int8_t FUNC_3(struct AdapterControlBlock *VAR_5)
{
 u_int32_t VAR_6;
 u_int8_t VAR_7 = 0x00;
 struct HBB_MessageUnit *VAR_8 = (struct HBB_MessageUnit *)VAR_5->pmu;

 do {
  for(VAR_6=0; VAR_6 < 100; VAR_6++) {
   if(FUNC_0(0, VAR_8->iop2drv_doorbell) & VAR_1) {
    FUNC_2(0, VAR_8->iop2drv_doorbell, VAR_2);
    FUNC_2(0, VAR_8->drv2iop_doorbell, VAR_0);
    return VAR_4;
   }
   FUNC_1(10000);
  }
 }while(VAR_7++ < 20);
 return (VAR_3);
}
