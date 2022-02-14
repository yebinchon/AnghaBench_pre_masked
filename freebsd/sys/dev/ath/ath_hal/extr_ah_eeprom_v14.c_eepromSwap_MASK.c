
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_4__ {void* deviceCap; void* blueToothOptions; void* rfSilent; void** regDmn; void* version; void* checksum; void* length; } ;
struct ar5416eeprom {TYPE_3__* modalHeader; TYPE_1__ baseEepHeader; } ;
struct TYPE_6__ {int antCtrlCommon; int* antCtrlChain; TYPE_2__* spurChans; void** xpaBiasLvlFreq; } ;
struct TYPE_5__ {void* spurChan; } ;
typedef TYPE_3__ MODAL_EEP_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct ar5416eeprom *VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;
 uint16_t VAR_6;
 MODAL_EEP_HEADER *VAR_7;


 VAR_6 = FUNC_0(VAR_2->baseEepHeader.length);
 VAR_2->baseEepHeader.length = VAR_6;

 VAR_6 = FUNC_0(VAR_2->baseEepHeader.checksum);
 VAR_2->baseEepHeader.checksum = VAR_6;

 VAR_6 = FUNC_0(VAR_2->baseEepHeader.version);
 VAR_2->baseEepHeader.version = VAR_6;

 VAR_6 = FUNC_0(VAR_2->baseEepHeader.regDmn[0]);
 VAR_2->baseEepHeader.regDmn[0] = VAR_6;

 VAR_6 = FUNC_0(VAR_2->baseEepHeader.regDmn[1]);
 VAR_2->baseEepHeader.regDmn[1] = VAR_6;

 VAR_6 = FUNC_0(VAR_2->baseEepHeader.rfSilent);
 VAR_2->baseEepHeader.rfSilent = VAR_6;

 VAR_6 = FUNC_0(VAR_2->baseEepHeader.blueToothOptions);
 VAR_2->baseEepHeader.blueToothOptions = VAR_6;

 VAR_6 = FUNC_0(VAR_2->baseEepHeader.deviceCap);
 VAR_2->baseEepHeader.deviceCap = VAR_6;


 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_7 = &VAR_2->modalHeader[VAR_5];


  VAR_3 = FUNC_1(VAR_7->antCtrlCommon);
  VAR_7->antCtrlCommon = VAR_3;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   VAR_3 = FUNC_1(VAR_7->antCtrlChain[VAR_4]);
   VAR_7->antCtrlChain[VAR_4] = VAR_3;
  }
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
   VAR_6 = FUNC_0(VAR_7->xpaBiasLvlFreq[VAR_4]);
   VAR_7->xpaBiasLvlFreq[VAR_4] = VAR_6;
  }
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_6 = FUNC_0(VAR_7->spurChans[VAR_4].spurChan);
   VAR_7->spurChans[VAR_4].spurChan = VAR_6;
  }
 }
}
