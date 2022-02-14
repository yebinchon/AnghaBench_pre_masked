
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct sta_info {scalar_t__ my_lid; struct sta_info* next; } ;
struct hostapd_data {struct sta_info* sta_list; } ;
struct TYPE_2__ {struct hostapd_data** bss; } ;
typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static Boolean FUNC_0(struct wpa_supplicant *VAR_2, u16 VAR_3)
{
 struct sta_info *VAR_4;
 struct hostapd_data *VAR_5 = VAR_2->ifmsh->bss[0];

 for (VAR_4 = VAR_5->sta_list; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->my_lid == VAR_3)
   return VAR_1;
 }

 return VAR_0;
}
