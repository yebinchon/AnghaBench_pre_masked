
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_vlan {int ifname; int vlan_id; } ;
struct hostapd_data {int wpa_auth; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ,int) ;

int FUNC_3(struct hostapd_data *VAR_1, struct hostapd_vlan *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->wpa_auth, VAR_2->vlan_id);
 if (VAR_3)
  FUNC_2(VAR_0,
      "WPA deinitialization for VLAN %d failed (%d)",
      VAR_2->vlan_id, VAR_3);

 return FUNC_0(VAR_1, VAR_2->ifname);
}
