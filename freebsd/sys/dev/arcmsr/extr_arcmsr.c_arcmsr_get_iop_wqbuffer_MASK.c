
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct QBUFFER {int dummy; } ;
struct HBE_MessageUnit {int message_wbuffer; } ;
struct HBD_MessageUnit0 {TYPE_2__* phbdmu; } ;
struct HBC_MessageUnit {int message_wbuffer; } ;
struct HBB_MessageUnit {TYPE_1__* hbb_rwbuffer; } ;
struct HBA_MessageUnit {int message_wbuffer; } ;
struct AdapterControlBlock {int adapter_type; scalar_t__ pmu; } ;
struct TYPE_4__ {int message_wbuffer; } ;
struct TYPE_3__ {int message_wbuffer; } ;
__attribute__((used)) static struct QBUFFER *FUNC_0( struct AdapterControlBlock *VAR_0)
{
 struct QBUFFER *VAR_1 = ((void*)0);

 switch (VAR_0->adapter_type) {
 case 132: {
   struct HBA_MessageUnit *VAR_2 = (struct HBA_MessageUnit *)VAR_0->pmu;

   VAR_1 = (struct QBUFFER *)&VAR_2->message_wbuffer;
  }
  break;
 case 131: {
   struct HBB_MessageUnit *VAR_3 = (struct HBB_MessageUnit *)VAR_0->pmu;

   VAR_1 = (struct QBUFFER *)&VAR_3->hbb_rwbuffer->message_wbuffer;
  }
  break;
 case 130: {
   struct HBC_MessageUnit *VAR_4 = (struct HBC_MessageUnit *)VAR_0->pmu;

   VAR_1 = (struct QBUFFER *)&VAR_4->message_wbuffer;
  }
  break;
 case 129: {
   struct HBD_MessageUnit0 *VAR_5 = (struct HBD_MessageUnit0 *)VAR_0->pmu;

   VAR_1 = (struct QBUFFER *)&VAR_5->phbdmu->message_wbuffer;
  }
  break;
 case 128: {
   struct HBE_MessageUnit *VAR_6 = (struct HBE_MessageUnit *)VAR_0->pmu;

   VAR_1 = (struct QBUFFER *)&VAR_6->message_wbuffer;
  }
  break;
 }
 return(VAR_1);
}
