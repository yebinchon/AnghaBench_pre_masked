
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_ssid* prev_scan_ssid; } ;
struct wpa_ssid {struct wpa_ssid* next; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*,int *,struct wpa_ssid*) ;
 int FUNC_2 (struct wpa_supplicant*,int,int ) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_ssid*) ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_2,
         struct wpa_ssid *VAR_3)
{
 int VAR_4 = 0;

 while (VAR_3) {
  if (!FUNC_3(VAR_2, VAR_3)) {
   int VAR_5 = FUNC_4(VAR_2, VAR_3);

   if (VAR_5 <= 0)
    break;

   if (!VAR_4 ||
       VAR_5 < VAR_4)
    VAR_4 = VAR_5;
  }
  VAR_3 = VAR_3->next;
 }


 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_2, VAR_0, "wpa_supplicant_assoc_try: Reached "
   "end of scan list - go back to beginning");
  VAR_2->prev_scan_ssid = VAR_1;
  FUNC_2(VAR_2, VAR_4, 0);
  return;
 }
 if (VAR_3->next) {

  VAR_2->prev_scan_ssid = VAR_3;
 } else {

  VAR_2->prev_scan_ssid = VAR_1;
 }
 FUNC_1(VAR_2, ((void*)0), VAR_3);
}
