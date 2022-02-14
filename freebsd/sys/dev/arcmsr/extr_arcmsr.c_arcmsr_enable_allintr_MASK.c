
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct HBB_MessageUnit {int iop2drv_doorbell_mask; } ;
struct AdapterControlBlock {int adapter_type; int outbound_int_enable; scalar_t__ pmu; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_3( struct AdapterControlBlock *VAR_20, u_int32_t VAR_21)
{
 u_int32_t VAR_22;

 switch (VAR_20->adapter_type) {
 case 132: {

   VAR_22 = ~(VAR_12|VAR_10|VAR_11);
   FUNC_1(VAR_13, 0, VAR_18, VAR_21 & VAR_22);
   VAR_20->outbound_int_enable = ~(VAR_21 & VAR_22) & 0x000000ff;
  }
  break;
 case 131: {
   struct HBB_MessageUnit *VAR_23 = (struct HBB_MessageUnit *)VAR_20->pmu;

   VAR_22 = (VAR_8|VAR_7|VAR_6|VAR_9);
   FUNC_2(0, VAR_23->iop2drv_doorbell_mask, VAR_21 | VAR_22);
   VAR_20->outbound_int_enable = (VAR_21 | VAR_22) & 0x0000000f;
  }
  break;
 case 130: {

   VAR_22 = ~(VAR_2 | VAR_0 | VAR_1);
   FUNC_1(VAR_14, 0, VAR_17, VAR_21 & VAR_22);
   VAR_20->outbound_int_enable = ~(VAR_21 & VAR_22) & 0x0000000f;
  }
  break;
 case 129: {

   VAR_22 = VAR_3;
   FUNC_1(VAR_15, 0, VAR_19, VAR_21 | VAR_22);
   FUNC_0(VAR_15, 0, VAR_19);
   VAR_20->outbound_int_enable = VAR_22;
  }
  break;
 case 128: {

   VAR_22 = ~(VAR_4 | VAR_5);
   FUNC_1(VAR_16, 0, VAR_17, VAR_21 & VAR_22);
   VAR_20->outbound_int_enable = ~(VAR_21 & VAR_22) & 0x0000000f;
  }
  break;
 }
}
