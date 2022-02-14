
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mac_acl_entry {int addr; } ;
struct hostapd_data {int dummy; } ;
struct hostapd_acl_params {int num_mac_acl; int acl_policy; TYPE_1__* mac_acl; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*,struct hostapd_acl_params*) ;
 int FUNC_1 (struct hostapd_acl_params*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct hostapd_acl_params* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hostapd_data *VAR_2,
    struct mac_acl_entry *VAR_3,
    int VAR_4, u8 VAR_5)
{
 struct hostapd_acl_params *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_3(sizeof(*VAR_6) +
          (VAR_4 * sizeof(VAR_6->mac_acl[0])));
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_2(VAR_6->mac_acl[VAR_7].addr, VAR_3[VAR_7].addr,
     VAR_1);

 VAR_6->acl_policy = VAR_5;
 VAR_6->num_mac_acl = VAR_4;

 VAR_8 = FUNC_0(VAR_2, VAR_6);

 FUNC_1(VAR_6);

 return VAR_8;
}
