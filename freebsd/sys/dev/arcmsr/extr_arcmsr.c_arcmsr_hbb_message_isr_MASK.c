
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct HBB_MessageUnit {int iop2drv_doorbell; } ;
struct AdapterControlBlock {scalar_t__ pmu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_4) {
 u_int32_t VAR_5;
 struct HBB_MessageUnit *VAR_6 = (struct HBB_MessageUnit *)VAR_4->pmu;


 FUNC_1(0, VAR_6->iop2drv_doorbell, VAR_0);
 VAR_5 = FUNC_0(VAR_2, 1, VAR_3[0]);
 if (VAR_5 == VAR_1)
  FUNC_2( VAR_4 );
}
