
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct hostapd_iface {struct hostapd_data** bss; } ;
struct hostapd_data {scalar_t__ num_plinks; } ;


 int FUNC_0 (struct hostapd_data*,int ,struct wpa_supplicant*) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct hostapd_data*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct wpa_supplicant *VAR_2, struct hostapd_iface *VAR_3)
{
 struct hostapd_data *VAR_4 = VAR_3->bss[0];


 FUNC_0(VAR_4, VAR_0, VAR_2);

 VAR_4->num_plinks = 0;
 FUNC_2(VAR_4);
 FUNC_1(VAR_1, VAR_2, ((void*)0));
}
