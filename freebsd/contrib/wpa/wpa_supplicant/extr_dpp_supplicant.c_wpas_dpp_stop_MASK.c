
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ dpp_gas_dialog_token; int gas; scalar_t__ dpp_gas_client; int * dpp_pkex; int * dpp_auth; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct wpa_supplicant *VAR_0)
{
 FUNC_0(VAR_0->dpp_auth);
 VAR_0->dpp_auth = ((void*)0);
 FUNC_1(VAR_0->dpp_pkex);
 VAR_0->dpp_pkex = ((void*)0);
 if (VAR_0->dpp_gas_client && VAR_0->dpp_gas_dialog_token >= 0)
  FUNC_2(VAR_0->gas, VAR_0->dpp_gas_dialog_token);
}
