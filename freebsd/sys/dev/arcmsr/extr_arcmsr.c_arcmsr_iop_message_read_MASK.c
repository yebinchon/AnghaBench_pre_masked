
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HBB_MessageUnit {int drv2iop_doorbell; } ;
struct AdapterControlBlock {int adapter_type; int out_doorbell; scalar_t__ pmu; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(struct AdapterControlBlock *VAR_11)
{
 switch (VAR_11->adapter_type) {
 case 132: {

   FUNC_0(VAR_5, 0, VAR_9, VAR_4);
  }
  break;
 case 131: {
   struct HBB_MessageUnit *VAR_12 = (struct HBB_MessageUnit *)VAR_11->pmu;

   FUNC_1(0, VAR_12->drv2iop_doorbell, VAR_0);
  }
  break;
 case 130: {

   FUNC_0(VAR_6, 0, VAR_9, VAR_1);
  }
  break;
 case 129: {

   FUNC_0(VAR_7, 0, VAR_9, VAR_2);
  }
  break;
 case 128: {

   VAR_11->out_doorbell ^= VAR_3;
   FUNC_0(VAR_8, 0, VAR_10, VAR_11->out_doorbell);
  }
  break;
 }
}
