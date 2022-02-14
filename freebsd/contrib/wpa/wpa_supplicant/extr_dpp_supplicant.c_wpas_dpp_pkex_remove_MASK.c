
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * dpp_pkex; int * dpp_pkex_bi; int * dpp_pkex_auth_cmd; int * dpp_pkex_identifier; int * dpp_pkex_code; } ;


 unsigned int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(struct wpa_supplicant *VAR_0, const char *VAR_1)
{
 unsigned int VAR_2;

 if (FUNC_3(VAR_1, "*") == 0) {
  VAR_2 = 0;
 } else {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 == 0)
   return -1;
 }

 if ((VAR_2 != 0 && VAR_2 != 1) || !VAR_0->dpp_pkex_code)
  return -1;


 FUNC_2(VAR_0->dpp_pkex_code);
 VAR_0->dpp_pkex_code = ((void*)0);
 FUNC_2(VAR_0->dpp_pkex_identifier);
 VAR_0->dpp_pkex_identifier = ((void*)0);
 FUNC_2(VAR_0->dpp_pkex_auth_cmd);
 VAR_0->dpp_pkex_auth_cmd = ((void*)0);
 VAR_0->dpp_pkex_bi = ((void*)0);

 FUNC_1(VAR_0->dpp_pkex);
 VAR_0->dpp_pkex = ((void*)0);
 return 0;
}
