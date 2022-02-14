
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {struct wpa_group* next; int vlan_id; } ;
struct wpa_authenticator {struct wpa_group* group; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_group*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct wpa_authenticator *VAR_1,
      struct wpa_group *VAR_2)
{
 struct wpa_group *VAR_3 = VAR_1->group;

 FUNC_1(VAR_0, "WPA: Remove group state machine for VLAN-ID %d",
     VAR_2->vlan_id);

 while (VAR_3) {
  if (VAR_3->next == VAR_2) {

   VAR_3->next = VAR_2->next;
   FUNC_0(VAR_2);
   break;
  }
  VAR_3 = VAR_3->next;
 }

}
