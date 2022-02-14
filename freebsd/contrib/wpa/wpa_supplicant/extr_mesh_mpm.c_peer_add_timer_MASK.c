
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* ifmsh; } ;
struct hostapd_data {int mesh_required_peer; } ;
struct TYPE_2__ {struct hostapd_data** bss; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;
 struct hostapd_data *VAR_4 = VAR_3->ifmsh->bss[0];

 FUNC_0(VAR_4->mesh_required_peer, 0, VAR_0);
}
