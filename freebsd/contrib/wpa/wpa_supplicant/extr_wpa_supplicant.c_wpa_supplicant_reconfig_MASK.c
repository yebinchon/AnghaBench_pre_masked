
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_global*) ;

__attribute__((used)) static void FUNC_5(int VAR_1, void *VAR_2)
{
 struct wpa_global *VAR_3 = VAR_2;
 struct wpa_supplicant *VAR_4;
 for (VAR_4 = VAR_3->ifaces; VAR_4; VAR_4 = VAR_4->next) {
  FUNC_0(VAR_4, VAR_0, "Signal %d received - reconfiguring",
   VAR_1);
  if (FUNC_3(VAR_4) < 0) {
   FUNC_4(VAR_3);
  }
 }

 if (FUNC_1() < 0) {

  FUNC_2(VAR_0, "Could not reopen debug log file");
 }
}
