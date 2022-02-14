
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlan_desc ;
struct vlan_description {int notempty; scalar_t__* tagged; int untagged; } ;
struct sta_info {int addr; TYPE_3__* eapol_sm; } ;
struct radius_msg {int dummy; } ;
struct hostapd_data {TYPE_2__* conf; } ;
struct TYPE_6__ {void* authFail; } ;
struct TYPE_4__ {scalar_t__ dynamic_vlan; } ;
struct TYPE_5__ {TYPE_1__ ssid; int vlan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*,struct vlan_description*) ;
 int FUNC_1 (struct hostapd_data*,int ,int ,int ,char*,...) ;
 int FUNC_2 (int ,struct vlan_description*) ;
 int FUNC_3 (struct vlan_description*,int ,int) ;
 int FUNC_4 (struct radius_msg*,int *,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct radius_msg *VAR_6,
      struct hostapd_data *VAR_7,
      struct sta_info *VAR_8)
{
 struct vlan_description VAR_9;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.notempty = !!FUNC_4(VAR_6, &VAR_9.untagged,
           VAR_4,
           VAR_9.tagged);

 if (VAR_9.notempty &&
     !FUNC_2(VAR_7->conf->vlan, &VAR_9)) {
  VAR_8->eapol_sm->authFail = VAR_5;
  FUNC_1(VAR_7, VAR_8->addr, VAR_3,
          VAR_1,
          "Invalid VLAN %d%s received from RADIUS server",
          VAR_9.untagged,
          VAR_9.tagged[0] ? "+" : "");
  FUNC_3(&VAR_9, 0, sizeof(VAR_9));
  FUNC_0(VAR_7, VAR_8, &VAR_9);
  return -1;
 }

 if (VAR_7->conf->ssid.dynamic_vlan == VAR_0 &&
     !VAR_9.notempty) {
  VAR_8->eapol_sm->authFail = VAR_5;
  FUNC_1(VAR_7, VAR_8->addr, VAR_2,
          VAR_1,
          "authentication server did not include required VLAN ID in Access-Accept");
  return -1;
 }

 return FUNC_0(VAR_7, VAR_8, &VAR_9);
}
