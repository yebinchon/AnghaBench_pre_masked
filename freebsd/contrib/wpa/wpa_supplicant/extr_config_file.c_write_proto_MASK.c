
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {scalar_t__ proto; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct wpa_ssid*,char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, struct wpa_ssid *VAR_2)
{
 char *VAR_3;

 if (VAR_2->proto == VAR_0)
  return;

 VAR_3 = FUNC_2(VAR_2, "proto");
 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3[0])
  FUNC_0(VAR_1, "\tproto=%s\n", VAR_3);
 FUNC_1(VAR_3);
}
