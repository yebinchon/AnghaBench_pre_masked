
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef void* uint16_t ;
struct TYPE_6__ {size_t antCtrlCommon; size_t* antCtrlChain; TYPE_2__* spurChans; } ;
struct TYPE_4__ {void* deviceCap; void* blueToothOptions; void* rfSilent; void** regDmn; void* version; void* checksum; void* length; } ;
struct ar5416eeprom_4k {TYPE_3__ modalHeader; TYPE_1__ baseEepHeader; } ;
struct TYPE_5__ {void* spurChan; } ;
typedef TYPE_3__ MODAL_EEP4K_HEADER ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (void*) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static void
FUNC_2(struct ar5416eeprom_4k *VAR_2)
{
 uint32_t VAR_3, VAR_4;
 uint16_t VAR_5;
 MODAL_EEP4K_HEADER *VAR_6;


 VAR_5 = FUNC_0(VAR_2->baseEepHeader.length);
 VAR_2->baseEepHeader.length = VAR_5;

 VAR_5 = FUNC_0(VAR_2->baseEepHeader.checksum);
 VAR_2->baseEepHeader.checksum = VAR_5;

 VAR_5 = FUNC_0(VAR_2->baseEepHeader.version);
 VAR_2->baseEepHeader.version = VAR_5;

 VAR_5 = FUNC_0(VAR_2->baseEepHeader.regDmn[0]);
 VAR_2->baseEepHeader.regDmn[0] = VAR_5;

 VAR_5 = FUNC_0(VAR_2->baseEepHeader.regDmn[1]);
 VAR_2->baseEepHeader.regDmn[1] = VAR_5;

 VAR_5 = FUNC_0(VAR_2->baseEepHeader.rfSilent);
 VAR_2->baseEepHeader.rfSilent = VAR_5;

 VAR_5 = FUNC_0(VAR_2->baseEepHeader.blueToothOptions);
 VAR_2->baseEepHeader.blueToothOptions = VAR_5;

 VAR_5 = FUNC_0(VAR_2->baseEepHeader.deviceCap);
 VAR_2->baseEepHeader.deviceCap = VAR_5;


 VAR_6 = &VAR_2->modalHeader;


 VAR_3 = FUNC_1(VAR_6->antCtrlCommon);
 VAR_6->antCtrlCommon = VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_1(VAR_6->antCtrlChain[VAR_4]);
  VAR_6->antCtrlChain[VAR_4] = VAR_3;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_0(VAR_6->spurChans[VAR_4].spurChan);
  VAR_6->spurChans[VAR_4].spurChan = VAR_5;
 }
}
