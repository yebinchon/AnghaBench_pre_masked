
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct wpa_ssid*,char const*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, const char *VAR_1, struct wpa_ssid *VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3 == ((void*)0))
  return;
 FUNC_0(VAR_0, "\t%s=%s\n", VAR_1, VAR_3);
 FUNC_1(VAR_3);
}
