
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_vlan {struct hostapd_vlan* next; int ifname; int vlan_id; } ;
struct hostapd_data {TYPE_2__* conf; int full_dynamic_vlan; } ;
struct TYPE_3__ {scalar_t__ dynamic_vlan; scalar_t__ per_sta_vif; } ;
struct TYPE_4__ {struct hostapd_vlan* vlan; int iface; TYPE_1__ ssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_vlan*) ;
 int FUNC_2 (int ,int,char*,int ) ;
 struct hostapd_vlan* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct hostapd_data*,struct hostapd_vlan*) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct hostapd_data *VAR_4)
{




 if ((VAR_4->conf->ssid.dynamic_vlan != VAR_0 ||
      VAR_4->conf->ssid.per_sta_vif) &&
     !VAR_4->conf->vlan) {

  struct hostapd_vlan *VAR_5;
  int VAR_6;

  VAR_5 = FUNC_3(sizeof(*VAR_5));
  if (VAR_5 == ((void*)0)) {
   FUNC_5(VAR_1, "Out of memory while assigning "
       "VLAN interfaces");
   return -1;
  }

  VAR_5->vlan_id = VAR_3;
  VAR_6 = FUNC_2(VAR_5->ifname, sizeof(VAR_5->ifname), "%s.#",
      VAR_4->conf->iface);
  if (VAR_6 >= (int) sizeof(VAR_5->ifname)) {
   FUNC_5(VAR_2,
       "VLAN: Interface name was truncated to %s",
       VAR_5->ifname);
  } else if (VAR_6 < 0) {
   FUNC_1(VAR_5);
   return VAR_6;
  }
  VAR_5->next = VAR_4->conf->vlan;
  VAR_4->conf->vlan = VAR_5;
 }

 if (FUNC_4(VAR_4, VAR_4->conf->vlan))
  return -1;

        return 0;
}
