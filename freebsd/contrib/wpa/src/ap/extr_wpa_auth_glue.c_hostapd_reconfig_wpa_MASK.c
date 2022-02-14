
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_auth_config {int dummy; } ;
struct hostapd_data {int wpa_auth; int iconf; int conf; } ;


 int FUNC_0 (int ,int ,struct wpa_auth_config*) ;
 int FUNC_1 (int ,struct wpa_auth_config*) ;

void FUNC_2(struct hostapd_data *VAR_0)
{
 struct wpa_auth_config VAR_1;
 FUNC_0(VAR_0->conf, VAR_0->iconf, &VAR_1);
 FUNC_1(VAR_0->wpa_auth, &VAR_1);
}
