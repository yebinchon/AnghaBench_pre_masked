
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_vlan {scalar_t__ vlan_id; struct hostapd_vlan* next; int ifname; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,struct hostapd_vlan*,int) ;
 int FUNC_2 (int ,struct hostapd_data*) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hostapd_data *VAR_3,
       struct hostapd_vlan *VAR_4)
{
 while (VAR_4) {
  if (VAR_4->vlan_id != VAR_1) {
   if (FUNC_1(VAR_3, VAR_4, 1)) {
    FUNC_3(VAR_0,
        "VLAN: Could not add VLAN %s: %s",
        VAR_4->ifname, FUNC_0(VAR_2));
    return -1;
   }



  }

  VAR_4 = VAR_4->next;
 }

 return 0;
}
