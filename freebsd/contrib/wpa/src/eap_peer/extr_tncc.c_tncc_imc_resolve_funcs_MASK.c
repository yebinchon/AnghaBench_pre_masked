
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {void* Terminate; void* BatchEnding; void* ReceiveMessage; void* NotifyConnectionChange; int * ProvideBindFunction; int * BeginHandshake; int * Initialize; void* dlhandle; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tnc_if_imc *VAR_1)
{
 void *VAR_2 = VAR_1->dlhandle;


 VAR_1->Initialize = FUNC_0(VAR_2, "TNC_IMC_Initialize");
 if (VAR_1->Initialize == ((void*)0)) {
  FUNC_1(VAR_0, "TNC: IMC does not export "
      "TNC_IMC_Initialize");
  return -1;
 }

 VAR_1->BeginHandshake = FUNC_0(VAR_2, "TNC_IMC_BeginHandshake");
 if (VAR_1->BeginHandshake == ((void*)0)) {
  FUNC_1(VAR_0, "TNC: IMC does not export "
      "TNC_IMC_BeginHandshake");
  return -1;
 }

 VAR_1->ProvideBindFunction =
  FUNC_0(VAR_2, "TNC_IMC_ProvideBindFunction");
 if (VAR_1->ProvideBindFunction == ((void*)0)) {
  FUNC_1(VAR_0, "TNC: IMC does not export "
      "TNC_IMC_ProvideBindFunction");
  return -1;
 }


 VAR_1->NotifyConnectionChange =
  FUNC_0(VAR_2, "TNC_IMC_NotifyConnectionChange");
 VAR_1->ReceiveMessage = FUNC_0(VAR_2, "TNC_IMC_ReceiveMessage");
 VAR_1->BatchEnding = FUNC_0(VAR_2, "TNC_IMC_BatchEnding");
 VAR_1->Terminate = FUNC_0(VAR_2, "TNC_IMC_Terminate");

 return 0;
}
