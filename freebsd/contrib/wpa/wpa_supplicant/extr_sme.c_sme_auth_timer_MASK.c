
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2;
 if (VAR_4->wpa_state == VAR_1) {
  FUNC_1(VAR_4, VAR_0, "SME: Authentication timeout");
  FUNC_0(VAR_4);
 }
}
