
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostapd_vlan {int ifname; int vlan_id; } ;
struct hostapd_data {scalar_t__ wpa_auth; TYPE_3__* conf; } ;
struct TYPE_4__ {int * key; } ;
struct TYPE_5__ {TYPE_1__ wep; } ;
struct TYPE_6__ {TYPE_2__ ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,int ) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,char*,int ,...) ;

__attribute__((used)) static int FUNC_7(struct hostapd_data *VAR_2, struct hostapd_vlan *VAR_3,
         int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (!VAR_2->conf->ssid.wep.key[VAR_6])
   continue;
  FUNC_6(VAR_0,
      "VLAN: Refusing to set up VLAN iface %s with WEP",
      VAR_3->ifname);
  return -1;
 }

 if (!FUNC_2(VAR_3->ifname))
  VAR_5 = FUNC_0(VAR_2, VAR_3->ifname);
 else if (!VAR_4)
  return -1;
 else
  VAR_5 = 0;

 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_3->ifname);

 if (VAR_2->wpa_auth)
  VAR_5 = FUNC_4(VAR_2->wpa_auth, VAR_3->vlan_id);

 if (VAR_5 == 0)
  return VAR_5;

 FUNC_6(VAR_0, "WPA initialization for VLAN %d failed (%d)",
     VAR_3->vlan_id, VAR_5);
 if (FUNC_5(VAR_2->wpa_auth, VAR_3->vlan_id))
  FUNC_6(VAR_0, "WPA deinit of %s failed", VAR_3->ifname);


 if (FUNC_1(VAR_2, VAR_3->ifname))
  FUNC_6(VAR_0, "Removal of %s failed", VAR_3->ifname);

 return VAR_5;
}
