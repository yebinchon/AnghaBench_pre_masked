
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int reassociate; scalar_t__ reattach; scalar_t__ last_owe_group; scalar_t__ disconnected; scalar_t__ extra_blacklist_count; int scan_req; scalar_t__ normal_scans; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int ) ;

void FUNC_3(struct wpa_supplicant *VAR_1)
{
 VAR_1->normal_scans = 0;
 VAR_1->scan_req = VAR_0;
 FUNC_1(VAR_1);
 VAR_1->extra_blacklist_count = 0;
 VAR_1->disconnected = 0;
 VAR_1->reassociate = 1;
 VAR_1->last_owe_group = 0;

 if (FUNC_0(VAR_1) != 1)
  FUNC_2(VAR_1, 0, 0);
 else
  VAR_1->reattach = 0;
}
