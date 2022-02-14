
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_ssid {scalar_t__ ssid_len; int * ssid; struct wpa_ssid* next; } ;
struct wpa_bss {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_0, struct wpa_bss *VAR_1)
{
 struct wpa_ssid *VAR_2;

 for (VAR_2 = VAR_0->conf->ssid; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->ssid == ((void*)0) || VAR_2->ssid_len == 0)
   continue;
  if (VAR_2->ssid_len == VAR_1->ssid_len &&
      FUNC_0(VAR_2->ssid, VAR_1->ssid, VAR_2->ssid_len) == 0)
   return 1;
 }

 return 0;
}
