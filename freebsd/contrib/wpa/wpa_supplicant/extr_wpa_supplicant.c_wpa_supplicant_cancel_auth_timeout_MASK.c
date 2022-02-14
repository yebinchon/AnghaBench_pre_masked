
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ last_con_fail_realm_len; int * last_con_fail_realm; int bssid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wpa_supplicant*,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*) ;
 int VAR_1 ;

void FUNC_4(struct wpa_supplicant *VAR_2)
{
 FUNC_3(VAR_2, VAR_0, "Cancelling authentication timeout");
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 FUNC_2(VAR_2, VAR_2->bssid);
 FUNC_1(VAR_2->last_con_fail_realm);
 VAR_2->last_con_fail_realm = ((void*)0);
 VAR_2->last_con_fail_realm_len = 0;
}
