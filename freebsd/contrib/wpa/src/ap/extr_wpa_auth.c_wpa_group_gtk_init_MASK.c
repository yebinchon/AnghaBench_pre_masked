
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_group {int GN; int GM; int GN_igtk; int GM_igtk; int GTK; int wpa_group_state; int changed; int vlan_id; } ;
struct wpa_authenticator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct wpa_authenticator *VAR_3,
          struct wpa_group *VAR_4)
{
 FUNC_2(VAR_1, "WPA: group state machine entering state "
     "GTK_INIT (VLAN-ID %d)", VAR_4->vlan_id);
 VAR_4->changed = VAR_0;
 VAR_4->wpa_group_state = VAR_2;


 FUNC_0(VAR_4->GTK, 0, sizeof(VAR_4->GTK));
 VAR_4->GN = 1;
 VAR_4->GM = 2;





 FUNC_1(VAR_3, VAR_4);
}
