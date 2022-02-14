
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
typedef int request_t ;
struct TYPE_3__ {int Event; int EventDataLength; int * Data; int IOCLogInfo; } ;
typedef TYPE_1__ MSG_EVENT_NOTIFY_REPLY ;






 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*,int ,char*,int) ;
 int FUNC_1 (struct mpt_softc*,char*,...) ;
 int FUNC_2 (struct mpt_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_3(struct mpt_softc *VAR_1, request_t *VAR_2,
        MSG_EVENT_NOTIFY_REPLY *VAR_3)
{

 FUNC_0(VAR_1, VAR_0, "mpt_core_event: 0x%x\n",
                 VAR_3->Event & 0xFF);
 switch(VAR_3->Event & 0xFF) {
 case 129:
  break;
 case 130:
 {
  int VAR_4;


  FUNC_1(VAR_1, "EvtLogData: IOCLogInfo: 0x%08x\n",
   VAR_3->IOCLogInfo);
  FUNC_1(VAR_1, "\tEvtLogData: Event Data:");
  for (VAR_4 = 0; VAR_4 < VAR_3->EventDataLength; VAR_4++)
   FUNC_2(VAR_1, "  %08x", VAR_3->Data[VAR_4]);
  FUNC_2(VAR_1, "\n");
  break;
 }
 case 131:




  break;
 case 128:
  break;
 default:
  return (0);
  break;
 }
 return (1);
}
