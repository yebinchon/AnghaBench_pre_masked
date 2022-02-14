
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef void* uint16_t ;
struct TYPE_10__ {size_t antCtrlCommon; size_t* antCtrlChain; TYPE_3__* spurChans; } ;
struct TYPE_7__ {void* deviceCap; void* blueToothOptions; void* rfSilent; void** regDmn; void* version; void* checksum; void* length; } ;
struct TYPE_8__ {TYPE_4__ modalHeader; TYPE_1__ baseEepHeader; } ;
struct TYPE_11__ {TYPE_2__ ee_base; } ;
struct TYPE_9__ {void* spurChan; } ;
typedef TYPE_4__ MODAL_EEP_9287_HEADER ;
typedef TYPE_5__ HAL_EEPROM_9287 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (void*) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static void
FUNC_2(HAL_EEPROM_9287 *VAR_2)
{
 uint32_t VAR_3, VAR_4;
 uint16_t VAR_5;
 MODAL_EEP_9287_HEADER *VAR_6;


 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.length);
 VAR_2->ee_base.baseEepHeader.length = VAR_5;

 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.checksum);
 VAR_2->ee_base.baseEepHeader.checksum = VAR_5;

 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.version);
 VAR_2->ee_base.baseEepHeader.version = VAR_5;

 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.regDmn[0]);
 VAR_2->ee_base.baseEepHeader.regDmn[0] = VAR_5;

 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.regDmn[1]);
 VAR_2->ee_base.baseEepHeader.regDmn[1] = VAR_5;

 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.rfSilent);
 VAR_2->ee_base.baseEepHeader.rfSilent = VAR_5;

 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.blueToothOptions);
 VAR_2->ee_base.baseEepHeader.blueToothOptions = VAR_5;

 VAR_5 = FUNC_0(VAR_2->ee_base.baseEepHeader.deviceCap);
 VAR_2->ee_base.baseEepHeader.deviceCap = VAR_5;




 VAR_6 = &VAR_2->ee_base.modalHeader;


 VAR_3 = FUNC_1(VAR_6->antCtrlCommon);
 VAR_6->antCtrlCommon = VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = FUNC_1(VAR_6->antCtrlChain[VAR_4]);
  VAR_6->antCtrlChain[VAR_4] = VAR_3;
 }
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_0(VAR_6->spurChans[VAR_4].spurChan);
  VAR_6->spurChans[VAR_4].spurChan = VAR_5;
 }
}
