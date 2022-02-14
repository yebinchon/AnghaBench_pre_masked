
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * mesh_params; int * mesh_rsn; int * current_ssid; int * ifmsh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_supplicant*,int *) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_0)
{
 FUNC_1(VAR_0, VAR_0->ifmsh);
 VAR_0->ifmsh = ((void*)0);
 VAR_0->current_ssid = ((void*)0);
 FUNC_0(VAR_0->mesh_rsn);
 VAR_0->mesh_rsn = ((void*)0);
 FUNC_0(VAR_0->mesh_params);
 VAR_0->mesh_params = ((void*)0);


}
