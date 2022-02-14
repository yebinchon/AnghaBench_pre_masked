
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int * dpp_configurator_params; int * dpp_pkex; int * dpp_auth; int dpp_init_done; scalar_t__ dpp_ignore_netaccesskey_mismatch; int * dpp_groups_override; int * dpp_discovery_override; int * dpp_config_obj_override; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct hostapd_data*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hostapd_data*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

void FUNC_4(struct hostapd_data *VAR_4)
{
 if (!VAR_4->dpp_init_done)
  return;
 FUNC_1(VAR_3, VAR_4, ((void*)0));
 FUNC_1(VAR_2, VAR_4, ((void*)0));
 FUNC_1(VAR_0, VAR_4, ((void*)0));




 FUNC_0(VAR_4->dpp_auth);
 VAR_4->dpp_auth = ((void*)0);
 FUNC_2(VAR_4, "*");
 VAR_4->dpp_pkex = ((void*)0);
 FUNC_3(VAR_4->dpp_configurator_params);
 VAR_4->dpp_configurator_params = ((void*)0);
}
