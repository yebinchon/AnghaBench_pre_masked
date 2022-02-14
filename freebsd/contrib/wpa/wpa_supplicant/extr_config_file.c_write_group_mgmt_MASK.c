
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int group_mgmt_cipher; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct wpa_ssid*,char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, struct wpa_ssid *VAR_1)
{
 char *VAR_2;

 if (!VAR_1->group_mgmt_cipher)
  return;

 VAR_2 = FUNC_2(VAR_1, "group_mgmt");
 if (!VAR_2)
  return;
 if (VAR_2[0])
  FUNC_0(VAR_0, "\tgroup_mgmt=%s\n", VAR_2);
 FUNC_1(VAR_2);
}
