
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int own_disconnect_req; TYPE_1__* conf; int eapol; int wpa; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int id; int ssid; int ssid_len; struct wpa_cred* parent_cred; struct wpa_ssid* next; } ;
struct wpa_cred {int dummy; } ;
struct wpa_bss {int ssid_len; int ssid; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct wpa_supplicant*,int ) ;
 int FUNC_6 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_2,
         struct wpa_cred *VAR_3,
         struct wpa_bss *VAR_4)
{
 struct wpa_ssid *VAR_5;

 for (VAR_5 = VAR_2->conf->ssid; VAR_5; VAR_5 = VAR_5->next) {
  if (VAR_5->parent_cred != VAR_3)
   continue;
  if (VAR_5->ssid_len != VAR_4->ssid_len ||
      FUNC_1(VAR_5->ssid, VAR_4->ssid, VAR_4->ssid_len) != 0)
   continue;

  break;
 }

 if (VAR_5 == ((void*)0))
  return;

 FUNC_3(VAR_0, "Interworking: Remove duplicate network entry for the same credential");

 if (VAR_5 == VAR_2->current_ssid) {
  FUNC_4(VAR_2->wpa, ((void*)0));
  FUNC_0(VAR_2->eapol, ((void*)0), ((void*)0));
  VAR_2->own_disconnect_req = 1;
  FUNC_5(VAR_2,
           VAR_1);
 }

 FUNC_6(VAR_2, VAR_5);
 FUNC_2(VAR_2->conf, VAR_5->id);
}
