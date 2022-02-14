
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {void* Terminate; void* BatchEnding; void* ReceiveMessage; void* NotifyConnectionChange; int * ProvideBindFunction; int * SolicitRecommendation; int * Initialize; void* dlhandle; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imv *VAR_1)
{
 void *VAR_2 = VAR_1->dlhandle;


 VAR_1->Initialize = FUNC_0(VAR_2, "TNC_IMV_Initialize");
 if (VAR_1->Initialize == ((void*)0)) {
  FUNC_1(VAR_0, "TNC: IMV does not export "
      "TNC_IMV_Initialize");
  return -1;
 }

 VAR_1->SolicitRecommendation = FUNC_0(
  VAR_2, "TNC_IMV_SolicitRecommendation");
 if (VAR_1->SolicitRecommendation == ((void*)0)) {
  FUNC_1(VAR_0, "TNC: IMV does not export "
      "TNC_IMV_SolicitRecommendation");
  return -1;
 }

 VAR_1->ProvideBindFunction =
  FUNC_0(VAR_2, "TNC_IMV_ProvideBindFunction");
 if (VAR_1->ProvideBindFunction == ((void*)0)) {
  FUNC_1(VAR_0, "TNC: IMV does not export "
      "TNC_IMV_ProvideBindFunction");
  return -1;
 }


 VAR_1->NotifyConnectionChange =
  FUNC_0(VAR_2, "TNC_IMV_NotifyConnectionChange");
 VAR_1->ReceiveMessage = FUNC_0(VAR_2, "TNC_IMV_ReceiveMessage");
 VAR_1->BatchEnding = FUNC_0(VAR_2, "TNC_IMV_BatchEnding");
 VAR_1->Terminate = FUNC_0(VAR_2, "TNC_IMV_Terminate");

 return 0;
}
