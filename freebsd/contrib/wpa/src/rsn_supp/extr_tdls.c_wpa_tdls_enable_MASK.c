
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int tdls_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;

void FUNC_1(struct wpa_sm *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, "TDLS: %s", VAR_2 ? "enabled" : "disabled");
 VAR_1->tdls_disabled = !VAR_2;
}
