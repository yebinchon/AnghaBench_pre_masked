
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct wpa_ssid*,char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, struct wpa_ssid *VAR_1)
{
 char *VAR_2 = FUNC_2(VAR_1, "bssid");
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_0, "\tbssid=%s\n", VAR_2);
 FUNC_1(VAR_2);
}
