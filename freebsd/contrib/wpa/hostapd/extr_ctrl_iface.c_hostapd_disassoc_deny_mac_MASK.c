
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_description {int notempty; } ;
struct sta_info {int addr; int vlan_desc; struct sta_info* next; } ;
struct hostapd_data {TYPE_1__* conf; struct sta_info* sta_list; } ;
struct TYPE_2__ {int num_deny_mac; int deny_mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct vlan_description*) ;
 int FUNC_2 (struct vlan_description*,int ) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_1)
{
 struct sta_info *VAR_2;
 struct vlan_description VAR_3;

 for (VAR_2 = VAR_1->sta_list; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_1(VAR_1->conf->deny_mac,
       VAR_1->conf->num_deny_mac, VAR_2->addr,
       &VAR_3) &&
      (!VAR_3.notempty ||
       !FUNC_2(&VAR_3, VAR_2->vlan_desc)))
   FUNC_0(VAR_1, VAR_2, VAR_2->addr,
       VAR_0);
 }
}
