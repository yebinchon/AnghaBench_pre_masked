
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; int confname; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;
struct TYPE_2__ {int update_config; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct wpa_global *VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0;
 struct wpa_supplicant *VAR_4;

 for (VAR_4 = VAR_1->ifaces; VAR_4; VAR_4 = VAR_4->next) {
  if (!VAR_4->conf->update_config) {
   FUNC_1(VAR_4, VAR_0, "CTRL_IFACE: SAVE_CONFIG - Not allowed to update configuration (update_config=0)");
   continue;
  }

  if (FUNC_0(VAR_4->confname, VAR_4->conf)) {
   FUNC_1(VAR_4, VAR_0, "CTRL_IFACE: SAVE_CONFIG - Failed to update configuration");
   VAR_2 = 1;
  } else {
   FUNC_1(VAR_4, VAR_0, "CTRL_IFACE: SAVE_CONFIG - Configuration updated");
   VAR_3++;
  }
 }

 if (!VAR_3 && !VAR_2) {
  FUNC_1(VAR_4, VAR_0,
   "CTRL_IFACE: SAVE_CONFIG - No configuration files could be updated");
  VAR_2 = 1;
 }

 return VAR_2;
}
