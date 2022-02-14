
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {unsigned int mesh_if_created; int ifname; struct wpa_supplicant* next; struct wpa_supplicant* parent; } ;
struct wpa_global {struct wpa_supplicant* p2p_invite_group; struct wpa_supplicant* p2p_group_formation; struct wpa_supplicant* ifaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_4 (struct wpa_supplicant*,int,int) ;

int FUNC_5(struct wpa_global *VAR_3,
    struct wpa_supplicant *VAR_4,
    int VAR_5)
{
 struct wpa_supplicant *VAR_6;







 VAR_6 = VAR_3->ifaces;
 if (VAR_6 == VAR_4) {
  VAR_3->ifaces = VAR_4->next;
 } else {
  while (VAR_6 && VAR_6->next != VAR_4)
   VAR_6 = VAR_6->next;
  if (VAR_6 == ((void*)0))
   return -1;
  VAR_6->next = VAR_4->next;
 }

 FUNC_2(VAR_4, VAR_0, "Removing interface %s", VAR_4->ifname);
 if (VAR_3->p2p_group_formation == VAR_4)
  VAR_3->p2p_group_formation = ((void*)0);
 if (VAR_3->p2p_invite_group == VAR_4)
  VAR_3->p2p_invite_group = ((void*)0);
 FUNC_4(VAR_4, 1, VAR_5);
 return 0;
}
