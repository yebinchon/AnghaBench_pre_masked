
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; int confname; } ;
struct TYPE_2__ {int update_config; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1)
{
 int VAR_2;

 if (!VAR_1->conf->update_config) {
  FUNC_1(VAR_0, "CTRL_IFACE: SAVE_CONFIG - Not allowed "
      "to update configuration (update_config=0)");
  return -1;
 }

 VAR_2 = FUNC_0(VAR_1->confname, VAR_1->conf);
 if (VAR_2) {
  FUNC_1(VAR_0, "CTRL_IFACE: SAVE_CONFIG - Failed to "
      "update configuration");
 } else {
  FUNC_1(VAR_0, "CTRL_IFACE: SAVE_CONFIG - Configuration"
      " updated");
 }

 return VAR_2;
}
