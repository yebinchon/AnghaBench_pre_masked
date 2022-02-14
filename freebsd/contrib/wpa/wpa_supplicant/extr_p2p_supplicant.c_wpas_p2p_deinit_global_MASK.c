
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_group_interface; scalar_t__ ap_iface; struct wpa_supplicant* next; } ;
struct wpa_global {int * p2p_init_wpa_s; int * p2p; struct wpa_supplicant* ifaces; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct wpa_global *VAR_1)
{
 struct wpa_supplicant *VAR_2, *VAR_3;

 VAR_2 = VAR_1->ifaces;

 FUNC_3(VAR_1->p2p_init_wpa_s);


 while (VAR_2 && VAR_2->p2p_group_interface != VAR_0)
  VAR_2 = VAR_2->next;
 while (VAR_2) {
  VAR_3 = VAR_1->ifaces;
  while (VAR_3 &&
         (VAR_3 == VAR_2 ||
   VAR_3->p2p_group_interface == VAR_0)) {
   VAR_3 = VAR_3->next;
  }
  if (VAR_3 == ((void*)0))
   break;

  FUNC_1(VAR_3);
 }





 for (VAR_2 = VAR_1->ifaces; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->ap_iface)
   FUNC_2(VAR_2);
 }

 FUNC_0(VAR_1->p2p);
 VAR_1->p2p = ((void*)0);
 VAR_1->p2p_init_wpa_s = ((void*)0);
}
