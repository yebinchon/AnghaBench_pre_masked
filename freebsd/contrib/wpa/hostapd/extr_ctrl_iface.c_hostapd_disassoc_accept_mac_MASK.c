
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_description {scalar_t__ notempty; } ;
struct sta_info {int addr; int vlan_desc; struct sta_info* next; } ;
struct hostapd_data {TYPE_1__* conf; struct sta_info* sta_list; } ;
struct TYPE_2__ {scalar_t__ macaddr_acl; int num_accept_mac; int accept_mac; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,struct sta_info*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,struct vlan_description*) ;
 scalar_t__ FUNC_2 (struct vlan_description*,int ) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_2)
{
 struct sta_info *VAR_3;
 struct vlan_description VAR_4;

 if (VAR_2->conf->macaddr_acl != VAR_0)
  return;

 for (VAR_3 = VAR_2->sta_list; VAR_3; VAR_3 = VAR_3->next) {
  if (!FUNC_1(VAR_2->conf->accept_mac,
        VAR_2->conf->num_accept_mac,
        VAR_3->addr, &VAR_4) ||
      (VAR_4.notempty &&
       FUNC_2(&VAR_4, VAR_3->vlan_desc)))
   FUNC_0(VAR_2, VAR_3, VAR_3->addr,
       VAR_1);
 }
}
