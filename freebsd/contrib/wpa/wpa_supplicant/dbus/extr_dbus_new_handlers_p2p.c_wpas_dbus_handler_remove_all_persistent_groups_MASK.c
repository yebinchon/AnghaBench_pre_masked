
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {struct wpa_config* conf; TYPE_1__* global; } ;
struct wpa_ssid {struct wpa_ssid* next; } ;
struct wpa_config {struct wpa_ssid* ssid; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessage ;


 scalar_t__ FUNC_0 (struct wpa_ssid*) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*) ;

DBusMessage * FUNC_2(
 DBusMessage *VAR_0, struct wpa_supplicant *VAR_1)
{
 struct wpa_ssid *VAR_2, *VAR_3;
 struct wpa_config *VAR_4;

 VAR_1 = VAR_1->global->p2p_init_wpa_s;

 VAR_4 = VAR_1->conf;
 VAR_2 = VAR_4->ssid;
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  if (FUNC_0(VAR_2))
   FUNC_1(VAR_1, VAR_2);
  VAR_2 = VAR_3;
 }
 return ((void*)0);
}
