
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; int eapol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static void FUNC_4(struct wpa_supplicant *VAR_3)
{
 if (VAR_3->wpa_state == VAR_1) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3, VAR_2);
  FUNC_1(VAR_3->eapol, VAR_0);
  FUNC_0(VAR_3->eapol, VAR_0);
 }
}
