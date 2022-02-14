
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;
typedef int field ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 char* FUNC_4 (struct wpa_ssid*,char*) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_0, int VAR_1, struct wpa_ssid *VAR_2)
{
 char VAR_3[20], *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, sizeof(VAR_3), "wep_key%d", VAR_1);
 if (FUNC_3(sizeof(VAR_3), VAR_5))
  return;
 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0, "\t%s=%s\n", VAR_3, VAR_4);
  FUNC_1(VAR_4);
 }
}
