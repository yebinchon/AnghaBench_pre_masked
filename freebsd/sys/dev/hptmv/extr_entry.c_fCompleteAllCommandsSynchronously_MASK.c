
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef int UINT ;
struct TYPE_10__ {TYPE_2__** sataChannel; } ;
struct TYPE_11__ {TYPE_3__ mvSataAdapter; } ;
struct TYPE_9__ {scalar_t__ outstandingCommands; } ;
struct TYPE_8__ {scalar_t__ OsExt; } ;
typedef TYPE_1__* PVBus ;
typedef size_t MV_U8 ;
typedef TYPE_2__ MV_SATA_CHANNEL ;
typedef TYPE_3__ MV_SATA_ADAPTER ;
typedef TYPE_4__ IAL_ADAPTER_T ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;

void FUNC_6(PVBus VAR_2)
{
 UINT VAR_3;
 ULONG VAR_4 = 0;
 MV_U8 VAR_5;
 MV_SATA_ADAPTER *VAR_6 = &((IAL_ADAPTER_T *)VAR_2->OsExt)->mvSataAdapter;
 MV_SATA_CHANNEL *VAR_7;

 do {
check_cmds:
  VAR_3 = 0;
  FUNC_0(VAR_1);




  for (VAR_5=0;VAR_5< VAR_0;VAR_5++) {
   VAR_7 = VAR_6->sataChannel[VAR_5];
   if (VAR_7 && VAR_7->outstandingCommands)
   {
    while (VAR_7->outstandingCommands) {
     if (!FUNC_4(VAR_6)) {
      FUNC_2(1000);
      if (VAR_4++ > 3000) {
       FUNC_1(VAR_6,VAR_5);
       goto check_cmds;
      }
     }
     else
      VAR_4 = 0;
    }
    VAR_3 = 1;
   }
  }
 } while (VAR_3);
}
