
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ priority; int ssid; int ssid_len; struct wpa_cred* parent_cred; } ;
struct wpa_cred {int dummy; } ;
struct wpa_bss {int ssid_len; int ssid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 struct wpa_bss* FUNC_1 (struct wpa_supplicant*,struct wpa_ssid**) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1,
        struct wpa_cred *VAR_2, struct wpa_bss *VAR_3)
{
 struct wpa_ssid *VAR_4, *VAR_5;
 struct wpa_bss *VAR_6;

 if (VAR_1->wpa_state < VAR_0 || VAR_1->current_ssid == ((void*)0))
  return 0;

 VAR_4 = VAR_1->current_ssid;
 if (VAR_4->parent_cred != VAR_2)
  return 0;

 if (VAR_4->ssid_len != VAR_3->ssid_len ||
     FUNC_0(VAR_4->ssid, VAR_3->ssid, VAR_3->ssid_len) != 0)
  return 0;

 VAR_5 = ((void*)0);
 VAR_6 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_6 && VAR_5 && VAR_5->priority > VAR_4->priority)
  return 0;

 return 1;
}
