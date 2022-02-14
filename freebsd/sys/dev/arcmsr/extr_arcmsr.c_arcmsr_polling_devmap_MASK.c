
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HBB_MessageUnit {int drv2iop_doorbell; } ;
struct AdapterControlBlock {int adapter_type; int acb_flags; int devmap_callout; int out_doorbell; scalar_t__ pmu; } ;







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
 int FUNC_2 (int *,int,void (*) (void*),struct AdapterControlBlock*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_3(void *VAR_13)
{
 struct AdapterControlBlock *VAR_14 = (struct AdapterControlBlock *)VAR_13;
 switch (VAR_14->adapter_type) {
 case 132:
  FUNC_0(VAR_5, 0, VAR_11, VAR_3);
  break;

     case 131: {
   struct HBB_MessageUnit *VAR_15 = (struct HBB_MessageUnit *)VAR_14->pmu;
   FUNC_1(0, VAR_15->drv2iop_doorbell, VAR_4);
  }
  break;

 case 130:
  FUNC_0(VAR_6, 0, VAR_11, VAR_3);
  FUNC_0(VAR_6, 0, VAR_10, VAR_1);
  break;

 case 129:
  FUNC_0(VAR_7, 0, VAR_11, VAR_3);
  break;

     case 128:
  FUNC_0(VAR_8, 0, VAR_11, VAR_3);
  VAR_14->out_doorbell ^= VAR_2;
  FUNC_0(VAR_8, 0, VAR_12, VAR_14->out_doorbell);
      break;
 }

 if((VAR_14->acb_flags & VAR_0) == 0)
 {
  FUNC_2(&VAR_14->devmap_callout, 5 * VAR_9, FUNC_3, VAR_14);
 }
}
