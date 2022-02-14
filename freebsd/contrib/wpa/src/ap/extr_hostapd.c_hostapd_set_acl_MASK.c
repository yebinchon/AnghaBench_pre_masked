
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_1__* iface; struct hostapd_config* iconf; } ;
struct hostapd_config {TYPE_2__** bss; } ;
struct TYPE_4__ {scalar_t__ macaddr_acl; int num_deny_mac; int deny_mac; int num_accept_mac; int accept_mac; } ;
struct TYPE_3__ {scalar_t__ drv_max_acl_mac_addrs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*,int ,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct hostapd_data *VAR_3)
{
 struct hostapd_config *VAR_4 = VAR_3->iconf;
 int VAR_5;
 u8 VAR_6;

 if (VAR_3->iface->drv_max_acl_mac_addrs == 0)
  return;

 if (VAR_4->bss[0]->macaddr_acl == VAR_1) {
  VAR_6 = 1;
  VAR_5 = FUNC_0(VAR_3, VAR_4->bss[0]->accept_mac,
        VAR_4->bss[0]->num_accept_mac,
        VAR_6);
  if (VAR_5) {
   FUNC_1(VAR_2, "Failed to set accept acl");
   return;
  }
 } else if (VAR_4->bss[0]->macaddr_acl == VAR_0) {
  VAR_6 = 0;
  VAR_5 = FUNC_0(VAR_3, VAR_4->bss[0]->deny_mac,
        VAR_4->bss[0]->num_deny_mac,
        VAR_6);
  if (VAR_5) {
   FUNC_1(VAR_2, "Failed to set deny acl");
   return;
  }
 }
}
