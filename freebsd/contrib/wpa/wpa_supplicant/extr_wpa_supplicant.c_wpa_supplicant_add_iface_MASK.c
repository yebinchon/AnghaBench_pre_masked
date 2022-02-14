
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int drv_flags; struct wpa_global* global; TYPE_1__* conf; int ifname; struct wpa_supplicant* next; } ;
struct wpa_ssid {struct wpa_ssid* next; } ;
struct wpa_interface {scalar_t__ p2p_mgmt; int ifname; scalar_t__ ctrl_interface; scalar_t__ driver; } ;
struct TYPE_4__ {int conf_p2p_dev; scalar_t__ override_ctrl_interface; scalar_t__ override_driver; } ;
struct wpa_global {TYPE_2__ params; int p2p_disabled; int * p2p; struct wpa_supplicant* ifaces; } ;
struct TYPE_3__ {int p2p_disabled; struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct wpa_supplicant* FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int,int ) ;
 scalar_t__ FUNC_4 (struct wpa_supplicant*,struct wpa_interface*) ;
 int FUNC_5 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_ssid*) ;
 scalar_t__ FUNC_8 (struct wpa_supplicant*,int ) ;

struct wpa_supplicant * FUNC_9(struct wpa_global *VAR_4,
       struct wpa_interface *VAR_5,
       struct wpa_supplicant *VAR_6)
{
 struct wpa_supplicant *VAR_7;
 struct wpa_interface VAR_8;
 struct wpa_ssid *VAR_9;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->global = VAR_4;

 VAR_8 = *VAR_5;
 if (VAR_4->params.override_driver) {
  FUNC_1(VAR_0, "Override interface parameter: driver "
      "('%s' -> '%s')",
      VAR_5->driver, VAR_4->params.override_driver);
  VAR_8.driver = VAR_4->params.override_driver;
 }
 if (VAR_4->params.override_ctrl_interface) {
  FUNC_1(VAR_0, "Override interface parameter: "
      "ctrl_interface ('%s' -> '%s')",
      VAR_5->ctrl_interface,
      VAR_4->params.override_ctrl_interface);
  VAR_8.ctrl_interface =
   VAR_4->params.override_ctrl_interface;
 }
 if (FUNC_4(VAR_7, &VAR_8)) {
  FUNC_1(VAR_0, "Failed to add interface %s",
      VAR_5->ifname);
  FUNC_3(VAR_7, 0, 0);
  return ((void*)0);
 }

 if (VAR_5->p2p_mgmt == 0) {

  if (FUNC_6(VAR_7)) {
   FUNC_3(VAR_7, 1, 0);
   return ((void*)0);
  }

  for (VAR_9 = VAR_7->conf->ssid; VAR_9; VAR_9 = VAR_9->next)
   FUNC_7(VAR_7, VAR_9);
 }

 VAR_7->next = VAR_4->ifaces;
 VAR_4->ifaces = VAR_7;

 FUNC_0(VAR_7, VAR_0, "Added interface %s", VAR_7->ifname);
 FUNC_5(VAR_7, VAR_2);
 return VAR_7;
}
