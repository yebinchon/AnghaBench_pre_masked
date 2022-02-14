
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_vlan {scalar_t__ vlan_id; int ifname; struct hostapd_vlan* next; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct hostapd_data*) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,struct hostapd_vlan*) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hostapd_data *VAR_3,
    struct hostapd_vlan *VAR_4)
{
 struct hostapd_vlan *VAR_5;

 while (VAR_4) {
  VAR_5 = VAR_4->next;






  if (VAR_4->vlan_id != VAR_1 &&
      FUNC_2(VAR_3, VAR_4)) {
   FUNC_3(VAR_0, "VLAN: Could not remove VLAN "
       "iface: %s: %s",
       VAR_4->ifname, FUNC_0(VAR_2));
  }


  VAR_4 = VAR_5;
 }
}
