
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct sta_info {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_2__ {struct hostapd_data** bss; } ;


 int FUNC_0 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_1 (int ,struct wpa_supplicant*,struct sta_info*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1,
     struct sta_info *VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_1->ifmsh->bss[0];

 FUNC_1(VAR_0, VAR_1, VAR_2);

 FUNC_0(VAR_3, VAR_2);
}
