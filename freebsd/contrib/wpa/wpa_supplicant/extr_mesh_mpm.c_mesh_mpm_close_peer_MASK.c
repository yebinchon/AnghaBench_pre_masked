
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct sta_info {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_2__ {struct hostapd_data** bss; } ;


 int VAR_0 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,struct sta_info*,struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*) ;

int FUNC_3(struct wpa_supplicant *VAR_1, const u8 *VAR_2)
{
 struct hostapd_data *VAR_3;
 struct sta_info *VAR_4;

 if (!VAR_1->ifmsh) {
  FUNC_2(VAR_1, VAR_0, "Mesh is not prepared yet");
  return -1;
 }

 VAR_3 = VAR_1->ifmsh->bss[0];
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_4) {
  FUNC_2(VAR_1, VAR_0, "No such mesh peer");
  return -1;
 }

 return FUNC_1(VAR_3, VAR_4, VAR_1) == 0 ? 0 : -1;
}
