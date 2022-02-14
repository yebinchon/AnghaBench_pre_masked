
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {struct wpa_ssid* current_ssid; int eapol; int wpa; } ;
struct wpa_ssid {int dummy; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct wpa_supplicant*,int const*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int VAR_0 ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_7(struct wpa_supplicant *VAR_1,
         const u8 *VAR_2)
{
 struct wpa_ssid *VAR_3;

 FUNC_5(VAR_1);
 FUNC_2(VAR_1, VAR_2);
 VAR_3 = VAR_1->current_ssid;
 FUNC_4(VAR_1);
 FUNC_3(VAR_1->wpa, ((void*)0));
 FUNC_0(VAR_1->eapol, ((void*)0), ((void*)0));
 if (VAR_3 != VAR_1->current_ssid)
  FUNC_6(VAR_1);
 FUNC_1(VAR_0, VAR_1, ((void*)0));
}
