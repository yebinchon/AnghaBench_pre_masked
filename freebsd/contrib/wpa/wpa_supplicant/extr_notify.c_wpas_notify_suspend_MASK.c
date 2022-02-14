
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; int suspend_time; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct wpa_global *VAR_1)
{
 struct wpa_supplicant *VAR_2;

 FUNC_0(&VAR_1->suspend_time);
 FUNC_2(VAR_0, "System suspend notification");
 for (VAR_2 = VAR_1->ifaces; VAR_2; VAR_2 = VAR_2->next)
  FUNC_1(VAR_2);
}
