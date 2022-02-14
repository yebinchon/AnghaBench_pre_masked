
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_radio_work {struct wpa_connect_work* ctx; } ;
struct wpa_connect_work {int bss_removed; struct wpa_bss* bss; } ;
struct wpa_bss {int dummy; } ;


 int VAR_0 ;
 struct wpa_radio_work* FUNC_0 (struct wpa_supplicant*,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1,
        struct wpa_bss *VAR_2,
        struct wpa_bss *VAR_3)
{
 struct wpa_radio_work *VAR_4;
 struct wpa_connect_work *VAR_5;

 VAR_4 = FUNC_0(VAR_1, "sme-connect");
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_1, "connect");
 if (!VAR_4)
  return;

 VAR_5 = VAR_4->ctx;
 if (VAR_5->bss != VAR_2)
  return;

 FUNC_1(VAR_0,
     "Update BSS pointer for the pending connect radio work");
 VAR_5->bss = VAR_3;
 if (!VAR_3)
  VAR_5->bss_removed = 1;
}
