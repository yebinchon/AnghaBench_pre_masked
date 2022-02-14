
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ countermeasures; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int ) ;

void FUNC_4(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;

 if (VAR_3->countermeasures) {
  VAR_3->countermeasures = 0;
  FUNC_0(VAR_3, 0);
  FUNC_1(VAR_3, VAR_0, "WPA: TKIP countermeasures stopped");
  FUNC_2(VAR_3);
  FUNC_3(VAR_3, 0, 0);
 }
}
