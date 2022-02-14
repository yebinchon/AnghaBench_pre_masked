
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; scalar_t__ disconnected; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int ) ;

void FUNC_4(void *VAR_2, void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2;

 if (VAR_4->disconnected || VAR_4->wpa_state != VAR_1)
  return;

 FUNC_0(VAR_4, VAR_0,
  "Try to associate due to network getting re-enabled");
 if (FUNC_2(VAR_4) != 1) {
  FUNC_1(VAR_4);
  FUNC_3(VAR_4, 0, 0);
 }
}
