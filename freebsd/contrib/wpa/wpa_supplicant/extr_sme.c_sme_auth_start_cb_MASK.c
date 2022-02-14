
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wpa; struct wpa_radio_work* connect_work; } ;
struct wpa_radio_work {scalar_t__ started; struct wpa_supplicant* wpa_s; struct wpa_connect_work* ctx; } ;
struct wpa_connect_work {int ssid; int bss; scalar_t__ bss_removed; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ,int) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_connect_work*) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,int ) ;
 int FUNC_6 (struct wpa_supplicant*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct wpa_radio_work *VAR_1, int VAR_2)
{
 struct wpa_connect_work *VAR_3 = VAR_1->ctx;
 struct wpa_supplicant *VAR_4 = VAR_1->wpa_s;

 if (VAR_2) {
  if (VAR_1->started)
   VAR_4->connect_work = ((void*)0);

  FUNC_4(VAR_3);
  return;
 }

 VAR_4->connect_work = VAR_1;

 if (VAR_3->bss_removed ||
     !FUNC_6(VAR_4, VAR_3->bss, VAR_3->ssid) ||
     FUNC_5(VAR_4, VAR_3->ssid)) {
  FUNC_1(VAR_4, VAR_0, "SME: BSS/SSID entry for authentication not valid anymore - drop connection attempt");
  FUNC_3(VAR_4);
  return;
 }



 FUNC_2(VAR_4->wpa, ((void*)0), 0);

 FUNC_0(VAR_4, VAR_3->bss, VAR_3->ssid, 1);
}
