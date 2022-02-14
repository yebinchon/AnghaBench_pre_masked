
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** sataChannel; } ;
struct TYPE_10__ {TYPE_3__ mvSataAdapter; } ;
struct TYPE_8__ {scalar_t__ OsExt; } ;
struct TYPE_7__ {scalar_t__ outstandingCommands; } ;
typedef TYPE_2__* PVBus ;
typedef size_t MV_U8 ;
typedef TYPE_3__ MV_SATA_ADAPTER ;
typedef TYPE_4__ IAL_ADAPTER_T ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,size_t) ;

__attribute__((used)) static int
FUNC_1(PVBus VAR_1)
{
 MV_SATA_ADAPTER *VAR_2 = &((IAL_ADAPTER_T *)VAR_1->OsExt)->mvSataAdapter;
 MV_U8 VAR_3;
 for (VAR_3=0;VAR_3< VAR_0;VAR_3++) {
  if (VAR_2->sataChannel[VAR_3] && VAR_2->sataChannel[VAR_3]->outstandingCommands)
   FUNC_0(VAR_2,VAR_3);
 }
 return 0;
}
