
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_vlan {int vlan_id; struct hostapd_vlan* next; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {struct hostapd_vlan* vlan; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hostapd_data *VAR_1)
{
 struct hostapd_vlan *VAR_2;
 int VAR_3 = VAR_0 + 2;

retry:
 for (VAR_2 = VAR_1->conf->vlan; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->vlan_id == VAR_3) {
   VAR_3++;
   goto retry;
  }
 }
 return VAR_3;
}
