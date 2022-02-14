
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_vlan {struct hostapd_vlan* next; } ;
struct hostapd_bss_config {struct hostapd_vlan* vlan; } ;


 int FUNC_0 (struct hostapd_vlan*) ;

__attribute__((used)) static void FUNC_1(struct hostapd_bss_config *VAR_0)
{
 struct hostapd_vlan *VAR_1, *VAR_2;

 VAR_1 = VAR_0->vlan;
 VAR_2 = ((void*)0);
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 VAR_0->vlan = ((void*)0);
}
