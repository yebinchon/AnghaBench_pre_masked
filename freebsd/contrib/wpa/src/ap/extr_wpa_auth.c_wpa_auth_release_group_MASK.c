
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {int vlan_id; scalar_t__ num_setup_iface; scalar_t__ wpa_group_state; int references; struct wpa_group* next; } ;
struct wpa_authenticator {struct wpa_group* group; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct wpa_authenticator *VAR_3, int VAR_4)
{
 struct wpa_group *VAR_5;
 int VAR_6 = 0;

 if (VAR_3 == ((void*)0))
  return 0;

 VAR_5 = VAR_3->group;
 while (VAR_5) {
  if (VAR_5->vlan_id == VAR_4)
   break;
  VAR_5 = VAR_5->next;
 }

 if (VAR_5 == ((void*)0))
  return -1;

 FUNC_1(VAR_0,
     "WPA: Try stopping group state machine for VLAN ID %d",
     VAR_4);

 if (VAR_5->num_setup_iface <= 0) {
  FUNC_1(VAR_1,
      "WPA: wpa_auth_release_group called more often than wpa_auth_ensure_group for VLAN ID %d, skipping.",
      VAR_4);
  return -1;
 }
 VAR_5->num_setup_iface--;

 if (VAR_5->wpa_group_state == VAR_2)
  VAR_6 = -1;

 if (VAR_5->references > 1) {
  FUNC_1(VAR_0,
      "WPA: Cannot stop group state machine for VLAN ID %d as references are still hold",
      VAR_4);
  VAR_6 = -2;
 }

 FUNC_0(VAR_3, VAR_5);

 return VAR_6;
}
