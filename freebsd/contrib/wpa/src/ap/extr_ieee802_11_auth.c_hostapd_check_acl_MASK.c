
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vlan_description {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ macaddr_acl; int num_deny_mac; int deny_mac; int num_accept_mac; int accept_mac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int const*,struct vlan_description*) ;

int FUNC_1(struct hostapd_data *VAR_5, const u8 *VAR_6,
        struct vlan_description *VAR_7)
{
 if (FUNC_0(VAR_5->conf->accept_mac,
      VAR_5->conf->num_accept_mac, VAR_6, VAR_7))
  return VAR_2;

 if (FUNC_0(VAR_5->conf->deny_mac,
      VAR_5->conf->num_deny_mac, VAR_6, VAR_7))
  return VAR_4;

 if (VAR_5->conf->macaddr_acl == VAR_0)
  return VAR_2;
 if (VAR_5->conf->macaddr_acl == VAR_1)
  return VAR_4;

 return VAR_3;
}
