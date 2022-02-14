
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {void* eapTriggerStart; void* altReject; void* altAccept; void* portEnabled; void* eapReq; void* eapNoResp; void* eapResp; void* eapFail; void* eapRestart; void* eapSuccess; } ;
typedef enum eapol_bool_var { ____Placeholder_eapol_bool_var } eapol_bool_var ;
typedef void* Boolean ;
__attribute__((used)) static void FUNC_0(void *VAR_0, enum eapol_bool_var VAR_1,
         Boolean VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_0;
 if (VAR_3 == ((void*)0))
  return;
 switch (VAR_1) {
 case 130:
  VAR_3->eapSuccess = VAR_2;
  break;
 case 131:
  VAR_3->eapRestart = VAR_2;
  break;
 case 135:
  VAR_3->eapFail = VAR_2;
  break;
 case 132:
  VAR_3->eapResp = VAR_2;
  break;
 case 134:
  VAR_3->eapNoResp = VAR_2;
  break;
 case 133:
  VAR_3->eapReq = VAR_2;
  break;
 case 128:
  VAR_3->portEnabled = VAR_2;
  break;
 case 137:
  VAR_3->altAccept = VAR_2;
  break;
 case 136:
  VAR_3->altReject = VAR_2;
  break;
 case 129:
  VAR_3->eapTriggerStart = VAR_2;
  break;
 }
}
