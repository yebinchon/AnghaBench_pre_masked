
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int ap_iface; int current_ssid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;

 if (!VAR_3->ap_iface || !VAR_3->current_ssid)
  return;

 FUNC_2(VAR_3);


 if (FUNC_0(VAR_3->ap_iface)) {
  FUNC_1(VAR_0,
      "P2P: CSA is in progress - not moving GO");
  return;
 }





 if (FUNC_3(VAR_3) < 0)
  FUNC_4(VAR_3);
}
