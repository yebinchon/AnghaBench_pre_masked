
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_bss* current_bss; int bssid; } ;
struct wpa_bss {int dummy; } ;


 struct wpa_bss* FUNC_0 (struct wpa_supplicant*,int ) ;
 int FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_0)
{
 struct wpa_bss *VAR_1 = FUNC_0(VAR_0, VAR_0->bssid);

 if (!VAR_1) {
  FUNC_1(VAR_0);


  VAR_1 = FUNC_0(VAR_0, VAR_0->bssid);
 }

 if (VAR_1)
  VAR_0->current_bss = VAR_1;
}
