
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct HBB_MessageUnit {int iop2drv_doorbell_mask; } ;
struct AdapterControlBlock {int adapter_type; scalar_t__ pmu; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static u_int32_t FUNC_4( struct AdapterControlBlock *VAR_12)
{
 u_int32_t VAR_13 = 0;

 switch (VAR_12->adapter_type) {
 case 132: {

   VAR_13 = FUNC_0(VAR_5, 0, VAR_10);
   FUNC_1(VAR_5, 0, VAR_10, VAR_13|VAR_4);
  }
  break;
 case 131: {
   struct HBB_MessageUnit *VAR_14 = (struct HBB_MessageUnit *)VAR_12->pmu;

   VAR_13 = FUNC_2(0, VAR_14->iop2drv_doorbell_mask)
      & (~VAR_3);
   FUNC_3(0, VAR_14->iop2drv_doorbell_mask, 0);
  }
  break;
 case 130: {

   VAR_13 = FUNC_0(VAR_6, 0, VAR_9) ;
   FUNC_1(VAR_6, 0, VAR_9, VAR_13|VAR_0);
  }
  break;
 case 129: {

   VAR_13 = FUNC_0(VAR_7, 0, VAR_11) ;
   FUNC_1(VAR_7, 0, VAR_11, VAR_1);
  }
  break;
 case 128: {

   VAR_13 = FUNC_0(VAR_6, 0, VAR_9) ;
   FUNC_1(VAR_8, 0, VAR_9, VAR_13 | VAR_2);
  }
  break;
 }
 return (VAR_13);
}
