
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {int vlan_id; scalar_t__ wpa_group_state; int num_setup_iface; struct wpa_group* next; } ;
struct wpa_authenticator {struct wpa_group* group; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct wpa_group* FUNC_0 (struct wpa_authenticator*,int) ;
 int FUNC_1 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct wpa_authenticator *VAR_2, int VAR_3)
{
 struct wpa_group *VAR_4;

 if (VAR_2 == ((void*)0))
  return 0;

 VAR_4 = VAR_2->group;
 while (VAR_4) {
  if (VAR_4->vlan_id == VAR_3)
   break;
  VAR_4 = VAR_4->next;
 }

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4 == ((void*)0))
   return -1;
 }

 FUNC_2(VAR_0,
     "WPA: Ensure group state machine running for VLAN ID %d",
     VAR_3);

 FUNC_1(VAR_2, VAR_4);
 VAR_4->num_setup_iface++;

 if (VAR_4->wpa_group_state == VAR_1)
  return -1;

 return 0;
}
