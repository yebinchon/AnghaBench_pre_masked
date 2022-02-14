
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int eapTriggerStart; int altReject; int altAccept; int portEnabled; int eapReq; int eapNoResp; int eapResp; int eapFail; int eapRestart; int eapSuccess; } ;
typedef enum eapol_bool_var { ____Placeholder_eapol_bool_var } eapol_bool_var ;
typedef int Boolean ;
 int VAR_0 ;

__attribute__((used)) static Boolean FUNC_0(void *VAR_1, enum eapol_bool_var VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_1;
 if (VAR_3 == ((void*)0))
  return VAR_0;
 switch (VAR_2) {
 case 130:
  return VAR_3->eapSuccess;
 case 131:
  return VAR_3->eapRestart;
 case 135:
  return VAR_3->eapFail;
 case 132:
  return VAR_3->eapResp;
 case 134:
  return VAR_3->eapNoResp;
 case 133:
  return VAR_3->eapReq;
 case 128:
  return VAR_3->portEnabled;
 case 137:
  return VAR_3->altAccept;
 case 136:
  return VAR_3->altReject;
 case 129:
  return VAR_3->eapTriggerStart;
 }
 return VAR_0;
}
