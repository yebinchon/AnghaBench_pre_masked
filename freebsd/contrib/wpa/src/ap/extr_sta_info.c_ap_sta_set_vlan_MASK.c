
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_description {int untagged; scalar_t__* tagged; scalar_t__ notempty; } ;
struct sta_info {int vlan_id; struct vlan_description* vlan_desc; int addr; } ;
struct hostapd_vlan {int vlan_id; scalar_t__ dynamic_vlan; struct vlan_description vlan_desc; int ifname; struct hostapd_vlan* next; } ;
struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_3__ {scalar_t__ dynamic_vlan; scalar_t__ per_sta_vif; } ;
struct TYPE_4__ {struct hostapd_vlan* vlan; TYPE_1__ ssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,char*,...) ;
 struct hostapd_vlan* FUNC_2 (struct hostapd_data*,struct hostapd_vlan*,int,struct vlan_description*) ;
 int FUNC_3 (struct vlan_description*,struct vlan_description*) ;
 int FUNC_4 (struct hostapd_data*,int) ;

int FUNC_5(struct hostapd_data *VAR_4, struct sta_info *VAR_5,
      struct vlan_description *VAR_6)
{
 struct hostapd_vlan *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 0, VAR_11 = 0;


 if (VAR_4->conf->ssid.per_sta_vif && !VAR_5->vlan_id) {

 } else if (VAR_4->conf->ssid.dynamic_vlan == VAR_0 &&
     !VAR_4->conf->ssid.per_sta_vif && VAR_5->vlan_id) {

 } else if (!FUNC_3(VAR_6, VAR_5->vlan_desc)) {
  return 0;
 }


 if (VAR_4->conf->ssid.per_sta_vif) {


  VAR_10 = FUNC_0(VAR_4);

  for (VAR_7 = VAR_4->conf->vlan; VAR_7; VAR_7 = VAR_7->next) {
   if (VAR_7->vlan_id == VAR_3)
    break;
  }
  if (!VAR_7) {
   FUNC_1(VAR_4, VAR_5->addr,
           VAR_2,
           VAR_1,
           "per_sta_vif missing wildcard");
   VAR_10 = 0;
   VAR_11 = -1;
   goto done;
  }
 } else if (VAR_6 && VAR_6->notempty) {
  for (VAR_7 = VAR_4->conf->vlan; VAR_7; VAR_7 = VAR_7->next) {
   if (!FUNC_3(&VAR_7->vlan_desc, VAR_6))
    break;
   if (VAR_7->vlan_id == VAR_3)
    VAR_8 = VAR_7;
  }
  if (VAR_7) {
   VAR_10 = VAR_7->vlan_id;
  } else if (VAR_8) {
   VAR_7 = VAR_8;
   VAR_10 = VAR_6->untagged;
   if (VAR_6->tagged[0]) {

    VAR_10 = FUNC_0(VAR_4);
   }
  } else {
   FUNC_1(VAR_4, VAR_5->addr,
           VAR_2,
           VAR_1,
           "missing vlan and wildcard for vlan=%d%s",
           VAR_6->untagged,
           VAR_6->tagged[0] ? "+" : "");
   VAR_10 = 0;
   VAR_11 = -1;
   goto done;
  }
 }

 if (VAR_7 && VAR_7->vlan_id == VAR_3) {
  VAR_7 = FUNC_2(VAR_4, VAR_7, VAR_10, VAR_6);
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_4, VAR_5->addr,
           VAR_2,
           VAR_1,
           "could not add dynamic VLAN interface for vlan=%d%s",
           VAR_6 ? VAR_6->untagged : -1,
           (VAR_6 && VAR_6->tagged[0]) ?
           "+" : "");
   VAR_10 = 0;
   VAR_11 = -1;
   goto done;
  }

  FUNC_1(VAR_4, VAR_5->addr, VAR_2,
          VAR_1,
          "added new dynamic VLAN interface '%s'",
          VAR_7->ifname);
 } else if (VAR_7 && VAR_7->dynamic_vlan > 0) {
  VAR_7->dynamic_vlan++;
  FUNC_1(VAR_4, VAR_5->addr,
          VAR_2,
          VAR_1,
          "updated existing dynamic VLAN interface '%s'",
          VAR_7->ifname);
 }
done:
 VAR_9 = VAR_5->vlan_id;
 VAR_5->vlan_id = VAR_10;
 VAR_5->vlan_desc = VAR_7 ? &VAR_7->vlan_desc : ((void*)0);

 if (VAR_10 != VAR_9 && VAR_9)
  FUNC_4(VAR_4, VAR_9);

 return VAR_11;
}
