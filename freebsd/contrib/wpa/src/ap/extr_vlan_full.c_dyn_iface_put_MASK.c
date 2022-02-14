
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {TYPE_1__* iface; } ;
struct hapd_interfaces {struct dynamic_iface* vlan_priv; } ;
struct dynamic_iface {int clean; struct dynamic_iface* next; scalar_t__ usage; int ifname; } ;
struct TYPE_2__ {struct hapd_interfaces* interfaces; } ;


 int FUNC_0 (struct dynamic_iface*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_0, const char *VAR_1)
{
 struct dynamic_iface *VAR_2, *VAR_3 = ((void*)0), **VAR_4;
 struct hapd_interfaces *VAR_5;
 int VAR_6;

 VAR_5 = VAR_0->iface->interfaces;
 VAR_4 = &VAR_5->vlan_priv;

 for (VAR_2 = *VAR_4; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_1(VAR_1, VAR_2->ifname) == 0)
   break;
  VAR_3 = VAR_2;
 }

 if (!VAR_2)
  return 0;

 VAR_2->usage--;
 if (VAR_2->usage)
  return 0;

 if (VAR_3)
  VAR_3->next = VAR_2->next;
 else
  *VAR_4 = VAR_2->next;
 VAR_6 = VAR_2->clean;
 FUNC_0(VAR_2);

 return VAR_6;
}
