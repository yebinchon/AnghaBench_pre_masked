
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int EAP_state; int eapRespData; int decision; int methodState; int ignore; int reqMethod; int selectedMethod; int force_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct eap_sm*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*,int ) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_10)
{
 switch (VAR_10->EAP_state) {
 case 134:
  FUNC_0(VAR_2, VAR_5);
  break;
 case 140:
  if (FUNC_3(VAR_10, VAR_3) &&
      !VAR_10->force_disabled)
   FUNC_0(VAR_2, VAR_6);
  break;
 case 135:
  FUNC_1(VAR_10);
  break;
 case 131:
  FUNC_2(VAR_10);
  break;
 case 137:
  if (VAR_10->selectedMethod == VAR_10->reqMethod)
   FUNC_0(VAR_2, VAR_7);
  else
   FUNC_0(VAR_2, VAR_9);
  break;
 case 133:
  if (VAR_10->ignore)
   FUNC_0(VAR_2, VAR_1);
  else if (VAR_10->methodState == VAR_8 &&
    VAR_10->decision == VAR_0 && !VAR_10->eapRespData)
   FUNC_0(VAR_2, VAR_4);
  else
   FUNC_0(VAR_2, VAR_9);
  break;
 case 129:
  FUNC_0(VAR_2, VAR_5);
  break;
 case 139:
  FUNC_0(VAR_2, VAR_5);
  break;
 case 136:
  FUNC_0(VAR_2, VAR_9);
  break;
 case 132:
  FUNC_0(VAR_2, VAR_9);
  break;
 case 130:
  FUNC_0(VAR_2, VAR_9);
  break;
 case 128:
  break;
 case 138:
  break;
 }
}
