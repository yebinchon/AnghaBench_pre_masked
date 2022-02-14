
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_driver_capa {int dummy; } ;
struct wowlan_triggers {int dummy; } ;
struct TYPE_2__ {int wowlan_triggers; } ;


 int FUNC_0 (struct wowlan_triggers*) ;
 int FUNC_1 (struct wpa_supplicant*,struct wowlan_triggers*) ;
 struct wowlan_triggers* FUNC_2 (int ,struct wpa_driver_capa const*) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_0,
        const struct wpa_driver_capa *VAR_1)
{
 struct wowlan_triggers *VAR_2;
 int VAR_3 = 0;

 if (!VAR_0->conf->wowlan_triggers)
  return 0;

 VAR_2 = FUNC_2(VAR_0->conf->wowlan_triggers, VAR_1);
 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_2);
 }
 return VAR_3;
}
