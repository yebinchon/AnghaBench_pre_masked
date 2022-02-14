
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_vlan {int vlan_id; char const* ifname; struct hostapd_vlan* next; } ;



const char * FUNC_0(struct hostapd_vlan *VAR_0, int VAR_1)
{
 struct hostapd_vlan *VAR_2 = VAR_0;
 while (VAR_2) {
  if (VAR_2->vlan_id == VAR_1)
   return VAR_2->ifname;
  VAR_2 = VAR_2->next;
 }
 return ((void*)0);
}
